/*
 * XREFs of ACPILoadTableCheckSum @ 0x1400C8FFC
 * Callers:
 *     ACPIInitializeDDB @ 0x1400C72F4 (ACPIInitializeDDB.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     ACPIAssert @ 0x14005653C (ACPIAssert.c)
 */

char __fastcall ACPILoadTableCheckSum(_BYTE *a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rdi
  char v6; // bl
  _BYTE *v7; // rbp
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp-28h]

  v4 = a2;
  v6 = 0;
  v7 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Bu,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      a1,
      (_DWORD)a1 + a2 - 1);
  if ( (_DWORD)v4 )
  {
    v8 = v4;
    do
    {
      v6 += *v7++;
      --v8;
    }
    while ( v8 );
  }
  ACPIAssert(v6 == 0, 8194, a3, a4);
  if ( !v6 )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = (_DWORD)a1 + v4 - 1;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x1Cu,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      a1,
      v10);
  }
  return 0;
}
