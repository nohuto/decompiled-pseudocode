/*
 * XREFs of MiExceptionForMappedVa @ 0x140679424
 * Callers:
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  char *AnyMultiplexedVm; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // al
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r8

  v2 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v4, v5, v6);
  v8 = P;
  while ( v8 )
  {
    v9 = v8[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( a1 < v9 + v8[4] )
    {
      if ( a1 >= v9 )
        break;
      v8 = (_QWORD *)*v8;
    }
    else
    {
      v8 = (_QWORD *)v8[1];
    }
  }
  if ( v8 && (v8[7] & 2) != 0 )
    v2 = 1;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
  return v2;
}
