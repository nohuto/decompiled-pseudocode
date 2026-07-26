/*
 * XREFs of ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BA00
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x14006B640 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x14009A280 (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterInstanceRegistry(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned __int8 v7; // r14
  int v8; // edx
  unsigned int v9; // ebp
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 v12; // [rsp+A8h] [rbp+20h] BYREF

  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  v7 = 1;
  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Cu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a3,
      a2);
  v9 = ndisGetOrCreateFilterInstanceKey(a1, a2, a3, 1, &v12, &v11);
  if ( !v9 && !v12 )
  {
    FilterDriver = a2->FilterDriver;
    if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
      && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
       || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x28u) )
    {
      v7 = 0;
    }
    v9 = ndisSetAllFilterDefaultParameters(a1, &v11, &ndisFilterInstanceParamsStr, v7);
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0x5Du,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a3,
      (char)a2,
      v9);
  return v9;
}
