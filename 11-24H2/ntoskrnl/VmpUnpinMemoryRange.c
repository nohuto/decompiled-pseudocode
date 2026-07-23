/*
 * XREFs of VmpUnpinMemoryRange @ 0x14079F8AC
 * Callers:
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmPinMemoryRange @ 0x14079ED90 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14079F070 (VmUnpinMemoryRange.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 */

__int64 __fastcall VmpUnpinMemoryRange(
        signed __int64 *SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi

  v9 = a2;
  result = VmpUnpinMemoryRangeHelper((__int64)SpinLock, a2, a3, a4, a5, a6);
  if ( (_DWORD)result == -1073741267 )
  {
    if ( !a7
      || (PfLockSharedRelease(SpinLock + 15),
          FsRtlAcquirePushLockExclusive((unsigned __int64 *)SpinLock + 15),
          *a7 = 1,
          result = VmpUnpinMemoryRangeHelper((__int64)SpinLock, v9, a3, a4, a5, a6),
          (_DWORD)result == -1073741267) )
    {
      v12 = v9 + a4 - 1;
      if ( v9 <= v12 )
      {
        v13 = a3 - v9;
        do
        {
          result = VmpUnpinMemoryRangeHelper((__int64)SpinLock, v9, v13 + v9, 1uLL, a5, a6);
          ++v9;
        }
        while ( v9 <= v12 );
      }
    }
  }
  return result;
}
