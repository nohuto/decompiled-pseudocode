/*
 * XREFs of EtwpReenableCompression @ 0x14064FC9C
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027D764 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     EtwpUnlockBufferList @ 0x1403E1688 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E1714 (EtwpLockBufferList.c)
 */

void __fastcall EtwpReenableCompression(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // r8
  __int64 v5; // r9
  int i; // eax
  __int64 *v7; // rdx
  __int64 *j; // rcx
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 1444) == 2;
  v9 = 0;
  if ( !v2 && KeGetEffectiveIrql(a1, a2) < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 1) != 1 )
  {
    EtwpLockBufferList(a1, &v9, v4, v5);
    for ( i = EtwpQueryUsedProcessorCount(a1, *(_QWORD *)(a1 + 72)); i && v7; --i )
    {
      if ( *((_DWORD *)v7 + 3) == 4 )
        *((_WORD *)v7 + 10) |= 0x80u;
      v7 = (__int64 *)*v7;
    }
    for ( j = *(__int64 **)(a1 + 56); i && j; j = (__int64 *)*j )
    {
      --i;
      if ( *((_DWORD *)j + 3) == 4 )
        *((_WORD *)j + 10) |= 0x80u;
    }
    EtwpUnlockBufferList(a1, &v9);
  }
}
