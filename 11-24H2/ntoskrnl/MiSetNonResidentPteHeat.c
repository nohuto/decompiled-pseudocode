/*
 * XREFs of MiSetNonResidentPteHeat @ 0x140251DF0
 * Callers:
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetNonResidentPteHeat(unsigned __int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 result; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r11
  __int64 v11; // rcx

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v5 = *(_QWORD *)a1;
    if ( (v2 & 1) != 0 && ((v2 & 0x42) == 0 || (v2 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v11 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v5 = v2 | 0x20;
          v2 = v5 | 0x42;
          if ( (v11 & 0x42) == 0 )
            v2 = v5;
        }
      }
    }
  }
  if ( (v2 & 0x400) != 0 )
  {
    v6 = a2 != 0 ? 0x800 : 0;
    v7 = v2 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  else
  {
    v6 = a2 != 0 ? 8 : 0;
    v7 = v2 & 0xFFFFFFFFFFFFFFF7uLL;
  }
  result = v7 | v6;
  *(_QWORD *)a1 = result;
  return result;
}
