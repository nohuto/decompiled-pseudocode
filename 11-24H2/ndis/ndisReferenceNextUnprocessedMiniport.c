/*
 * XREFs of ndisReferenceNextUnprocessedMiniport @ 0x140175B20
 * Callers:
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007D730 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceNextUnprocessedMiniport(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  KIRQL v4; // bp
  signed __int32 InterlockedFlags; // eax
  signed __int32 v7; // ett

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      10,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  v4 = v2;
  while ( v3 )
  {
    if ( ndisIsMiniportReady(v3) )
    {
      _m_prefetchw(&v3->InterlockedFlags);
      InterlockedFlags = v3->InterlockedFlags;
      do
      {
        v7 = InterlockedFlags;
        InterlockedFlags = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&v3->InterlockedFlags,
                             InterlockedFlags,
                             InterlockedFlags);
      }
      while ( v7 != InterlockedFlags );
      if ( (InterlockedFlags & 0x80u) == 0 && (unsigned __int8)ndisReferenceMiniport(v3, 0x52u) )
      {
        _InterlockedOr((volatile signed __int32 *)&v3->InterlockedFlags, 0x80u);
        break;
      }
    }
    v3 = v3->NextMiniport;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      11,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      a1);
  return v3;
}
