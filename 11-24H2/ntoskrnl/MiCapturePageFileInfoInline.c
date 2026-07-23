/*
 * XREFs of MiCapturePageFileInfoInline @ 0x1402FAB00
 * Callers:
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCapturePageFileInfoInline(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *a1;
  v10[0] = *a1;
  if ( (v10[0] & 4) != 0 )
  {
    if ( a2 )
      *a1 &= ~4uLL;
    if ( !a3 )
    {
      v5 = v10[0];
      if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL
        && (v10[0] & 1) != 0
        && ((v10[0] & 0x42) == 0 || (v10[0] & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v8 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v10 >> 3) & 0x1FF));
            if ( (v8 & 0x20) != 0 )
              v5 = v10[0] | 0x20LL;
            v9 = v5;
            v5 |= 0x42uLL;
            if ( (v8 & 0x42) == 0 )
              v5 = v9;
          }
        }
      }
      v10[0] = v5 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    return v10[0];
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
