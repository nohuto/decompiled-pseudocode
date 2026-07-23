/*
 * XREFs of AMDMicrocodeGetRecordData @ 0x140663A28
 * Callers:
 *     GetMicrocodePatchData @ 0x140662BB8 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x140663208 (MicrocodeUpdate.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     PrExtGetRecordDataLength @ 0x140662B00 (PrExtGetRecordDataLength.c)
 *     AMDMicrocodeV1GetRecordData @ 0x140663C5C (AMDMicrocodeV1GetRecordData.c)
 */

__int64 __fastcall AMDMicrocodeGetRecordData(_DWORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v9; // rcx

  if ( !(unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() || *a1 == 1 )
    return AMDMicrocodeV1GetRecordData(a1, a2, a3, a4);
  if ( *a1 != 13 )
    return 3221225659LL;
  if ( a2 < 0x10 )
    return 3221225485LL;
  v9 = 4LL * (unsigned int)a1[8] + 36;
  if ( v9 != a1[4] )
    return 3221225485LL;
  *a4 = (char *)a1 + v9;
  return PrExtGetRecordDataLength((__int64)a1, a2, a3);
}
