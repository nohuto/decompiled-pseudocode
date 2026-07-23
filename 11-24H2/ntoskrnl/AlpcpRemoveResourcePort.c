/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1409E0E6C
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x14089CDC0 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1409E0D30 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140A1DAC0 (AlpcSectionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A839EC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _QWORD *v3; // rbx
  char *v4; // rax
  char *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  v4 = (char *)KeAbPreAcquire(a1 + 328, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v5 )
    v5[10] = 1;
  v6 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v6[1] != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
