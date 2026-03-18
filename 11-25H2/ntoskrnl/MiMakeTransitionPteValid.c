/*
 * XREFs of MiMakeTransitionPteValid @ 0x140234420
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v10; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v13; // rcx

  v1 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = *(_QWORD *)a1;
    if ( (v1 & 1) != 0 && ((v1 & 0x42) == 0 || (v1 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v13 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v10 = v1 | 0x20;
          v1 = v10 | 0x42;
          if ( (v13 & 0x42) == 0 )
            v1 = v10;
        }
      }
    }
  }
  v3 = v1;
  if ( qword_140E2D940 && (v1 & 0x10) == 0 )
    v3 = v1 & ~qword_140E2D940;
  v4 = v3 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v1 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = v3 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v1 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
  }
  else
  {
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v4 = a1 == 0xFFFFF6FB7DBEDF68uLL
         ? v3 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v1 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
         : v3 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v1 >> 5) & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(a1) )
        v4 |= 4uLL;
    }
    v5 = v4 | 4;
    v6 = (__int64)(a1 << 25) >> 16;
    if ( v6 > 0x7FFFFFFEFFFFLL )
      v5 = v4;
    if ( v6 < 0xFFFF800000000000uLL )
    {
      v7 = HIBYTE(word_140E2EB44);
    }
    else if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v6 < qword_140E2F040 || (v7 = HIBYTE(word_140E2EB44), v6 > qword_140E2F050) )
        v7 = (unsigned __int8)word_140E2EB44;
    }
    else
    {
      v7 = 0;
    }
    v8 = v5 | 0x100;
    if ( !v7 )
      v8 = v5;
  }
  return v8 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
