/*
 * XREFs of MiQueryVpabAccessedState @ 0x14042AF30
 * Callers:
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14042ACB0 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x14042ADC0 (MiAgeWorkingSetTail.c)
 * Callees:
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     VmpQueryAccessedState @ 0x14042B094 (VmpQueryAccessedState.c)
 *     VslQueryPrivilegedAccessedState @ 0x14042BF3C (VslQueryPrivilegedAccessedState.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiQueryVpabAccessedState(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 i; // rdi
  _BYTE v9[208]; // [rsp+30h] [rbp-108h] BYREF

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
      memset_0(v9, 0, 0xC8uLL);
      MiInitializeTbFlushList((__int64)v9, *(_QWORD *)(a1 + 32), 20, 8, 2);
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        if ( (*(_QWORD *)&a2[2 * i + 2] & 3) == 1 )
          MiInsertTbFlushEntry((__int64)v9, *(_QWORD *)&a2[2 * i + 2] & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      MiFlushTbList((__int64)v9);
    }
  }
  result = MiReacquireWalkLocks(a1, v3, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
