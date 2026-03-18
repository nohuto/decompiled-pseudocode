/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1409E65DC
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140893220 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1409E64A0 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140A29100 (AlpcSectionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A874FC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  v4 = KeAbPreAcquire(a1 + 328, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
