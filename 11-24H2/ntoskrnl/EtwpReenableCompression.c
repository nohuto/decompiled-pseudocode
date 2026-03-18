/*
 * XREFs of EtwpReenableCompression @ 0x14065159C
 * Callers:
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14024D154 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     EtwpUnlockBufferList @ 0x1403EEBF4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403EEC80 (EtwpLockBufferList.c)
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
  if ( !v1 && KeGetEffectiveIrql() < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 1) != 1 )
  {
    EtwpLockBufferList(a1, &v6);
    for ( i = EtwpQueryUsedProcessorCount(a1, *(_QWORD *)(a1 + 72)); i && v4; --i )
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
