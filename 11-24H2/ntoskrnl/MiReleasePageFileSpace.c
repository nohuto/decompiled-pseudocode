/*
 * XREFs of MiReleasePageFileSpace @ 0x1403D2B30
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140298E70 (MiDecommitHandlePageFileFormatPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v10[0] = a2;
  if ( (a2 & 4) != 0 )
  {
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
      a2 = v5 & 0xFFFFFFFFFFFFFFFDuLL;
    }
  }
  else if ( !a3 || (a2 & 2) == 0 )
  {
    return 0LL;
  }
  if ( !a2 )
    return 0LL;
  MiReleasePageFileInfo(a1, a2, 1LL, a1);
  return 1LL;
}
