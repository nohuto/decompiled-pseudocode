/*
 * XREFs of PrExtGetRecord @ 0x140662A58
 * Callers:
 *     HalpGetMicrocodePatchRecord @ 0x14055703C (HalpGetMicrocodePatchRecord.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 */

__int64 __fastcall PrExtGetRecord(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  int v8; // ecx

  v7 = a4;
  v8 = MicrocodeRecordType;
  if ( MicrocodeRecordType == 1 || MicrocodeRecordType == 2 )
    return MicrocodeGetRecord(v8, a1, a2, a4, a5, a6);
  if ( MicrocodeRecordType == 13 && (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
  {
    a4 = v7;
    v8 = 13;
    return MicrocodeGetRecord(v8, a1, a2, a4, a5, a6);
  }
  return 3221225659LL;
}
