/*
 * XREFs of MiMakeTransitionPteValid @ 0x140248450
 * Callers:
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v15; // rcx

  v1 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v3 = *(_QWORD *)a1;
    if ( (v1 & 1) != 0 && ((v1 & 0x42) == 0 || (v1 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v15 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v3 = v1 | 0x20;
          v1 = v3 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v1 = v3;
        }
      }
    }
  }
  v4 = v1;
  if ( qword_140E2DCC0 && (v1 & 0x10) == 0 )
    v4 = v1 & ~qword_140E2DCC0;
  v5 = (v1 >> 5) & 0x1F;
  v6 = v4 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[v5] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = v4 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[v5] & 0xFFF0000000000E7FuLL | 0x121;
    goto LABEL_21;
  }
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v6 = a1 == 0xFFFFF6FB7DBEDF68uLL
       ? v4 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[v5] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
       : v4 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[v5] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v6 |= 4uLL;
  }
  v7 = v6 | 4;
  v8 = (__int64)(a1 << 25) >> 16;
  if ( v8 > 0x7FFFFFFEFFFFLL )
    v7 = v6;
  if ( v8 < 0xFFFF800000000000uLL )
  {
LABEL_18:
    v9 = HIBYTE(word_140E2EEC4);
    goto LABEL_19;
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v8 < qword_140E2F3C0 || v8 > qword_140E2F3D0 )
    {
      v9 = (unsigned __int8)word_140E2EEC4;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v9 = 0;
LABEL_19:
  v10 = v7 | 0x100;
  if ( !v9 )
    v10 = v7;
LABEL_21:
  v11 = v10 | 0x42;
  if ( v5 >= 0 || (v5 & 5) != 4 )
    v11 = v10;
  return v11 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
