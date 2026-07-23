/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x140B78578
 * Callers:
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  __int64 *v4; // rdx
  KIRQL v5; // r9
  __int64 *v6; // r8
  __int64 *v8; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&KdpDataSpinLock);
  v4 = (__int64 *)KdpDebuggerDataListHead;
  v5 = v3;
  while ( v4 != &KdpDebuggerDataListHead )
  {
    v6 = v4;
    v4 = (__int64 *)*v4;
    if ( v6 == (__int64 *)a2 || *((_DWORD *)v6 + 4) == 1195525195 )
    {
      KeReleaseSpinLock(&KdpDataSpinLock, v3);
      return 0;
    }
  }
  *(_DWORD *)(a2 + 16) = 1195525195;
  *(_DWORD *)(a2 + 20) = 928;
  v8 = (__int64 *)qword_140F55148;
  if ( *(__int64 **)qword_140F55148 != &KdpDebuggerDataListHead )
    __fastfail(3u);
  *(_QWORD *)a2 = &KdpDebuggerDataListHead;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  qword_140F55148 = a2;
  KeReleaseSpinLock(&KdpDataSpinLock, v5);
  return 1;
}
