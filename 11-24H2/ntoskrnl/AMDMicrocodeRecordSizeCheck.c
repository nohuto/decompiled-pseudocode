/*
 * XREFs of AMDMicrocodeRecordSizeCheck @ 0x140663BC0
 * Callers:
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     AMDMicrocodeV1RecordSizeCheck @ 0x140663CA0 (AMDMicrocodeV1RecordSizeCheck.c)
 */

__int64 __fastcall AMDMicrocodeRecordSizeCheck(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v7; // rsi

  if ( !(unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
    return AMDMicrocodeV1RecordSizeCheck(a1, a2, a3);
  if ( *(_DWORD *)a1 == 1 )
  {
    return (unsigned int)AMDMicrocodeV1RecordSizeCheck(a1, a2, a3);
  }
  else if ( *(_DWORD *)a1 == 13 )
  {
    v7 = a2 + 36;
    if ( v7 <= a3 )
      return a3 < v7 + *(_QWORD *)(a1 + 8) + 4LL * *(unsigned int *)(a1 + 32) ? 0xC000000D : 0;
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
}
