/*
 * XREFs of MiQueryVpabAccessedState @ 0x1403AACE4
 * Callers:
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1403AAA70 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x1403AAB80 (MiAgeWorkingSetTail.c)
 * Callees:
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     VmpQueryAccessedState @ 0x1403AAF1C (VmpQueryAccessedState.c)
 *     VslQueryPrivilegedAccessedState @ 0x1403AB140 (VslQueryPrivilegedAccessedState.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiQueryVpabAccessedState(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v9; // rdx
  _BYTE v10[208]; // [rsp+30h] [rbp-108h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  MiReleaseWalkLocks(a1);
  if ( KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink )
  {
    VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink);
  }
  else
  {
    if ( (int)VslQueryPrivilegedAccessedState(a2 + 2) < 0 )
      KeBugCheckEx(0x1Au, 0x51515uLL, (ULONG_PTR)(a2 + 2), *a2, 0LL);
    if ( a3 )
    {
      memset_0(v10, 0, 0xC8uLL);
      MiInitializeTbFlushList((__int64)v10, *(_QWORD *)(a1 + 32), 20, 8, 2);
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)&a2[2 * i + 2];
        if ( (v9 & 2) == 0 && (v9 & 1) != 0 )
          MiInsertTbFlushEntry((__int64)v10, v9 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      MiFlushTbList((__int64)v10);
    }
  }
  result = MiReacquireWalkLocks(a1, v3, 0LL);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
