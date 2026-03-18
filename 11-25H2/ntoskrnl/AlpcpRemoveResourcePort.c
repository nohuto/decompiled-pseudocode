/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1409EC66C
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x1408AF820 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1409EC530 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140A1F5C0 (AlpcSectionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A82DE8 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  v4 = KeAbPreAcquire(a1 + 328, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
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
