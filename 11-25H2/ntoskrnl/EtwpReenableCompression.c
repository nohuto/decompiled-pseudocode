/*
 * XREFs of EtwpReenableCompression @ 0x14064559C
 * Callers:
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1403E4930 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     EtwpUnlockBufferList @ 0x1403E4F1C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E4FA8 (EtwpLockBufferList.c)
 */

void __fastcall EtwpReenableCompression(__int64 a1)
{
  bool v1; // zf
  int i; // eax
  __int64 *v4; // rdx
  __int64 *j; // rcx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 1444) == 2;
  v6 = 0;
  if ( !v1 && ObGetCurrentIrql() < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 1) != 1 )
  {
    EtwpLockBufferList(a1, &v6);
    for ( i = EtwpQueryUsedProcessorCount(a1); i && v4; --i )
    {
      if ( *((_DWORD *)v4 + 3) == 4 )
        *((_WORD *)v4 + 10) |= 0x80u;
      v4 = (__int64 *)*v4;
    }
    for ( j = *(__int64 **)(a1 + 56); i && j; j = (__int64 *)*j )
    {
      --i;
      if ( *((_DWORD *)j + 3) == 4 )
        *((_WORD *)j + 10) |= 0x80u;
    }
    EtwpUnlockBufferList(a1, &v6);
  }
}
