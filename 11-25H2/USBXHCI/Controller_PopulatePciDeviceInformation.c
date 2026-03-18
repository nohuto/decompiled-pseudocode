/*
 * XREFs of Controller_PopulatePciDeviceInformation @ 0x140077C88
 * Callers:
 *     Controller_RetrievePciData @ 0x14007835C (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1400785BC (Controller_RetrieveUrsData.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x140077F00 (Controller_PopulateVIAFirmwareVersion.c)
 */

__int64 __fastcall Controller_PopulatePciDeviceInformation(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        _QWORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // r15d
  int v11; // r14d
  __int64 result; // rax
  __int64 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-30h]

  v10 = a3;
  v11 = a4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = a4;
    v15 = a3;
    WPP_RECORDER_SF_ddL(a1, 4u, 4u, 0x88u, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, a2, v15, v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = *((unsigned __int8 *)a6 + 8);
      LODWORD(v16) = a6[1];
      LODWORD(v14) = *a6;
      WPP_RECORDER_SF_ddL(a1, 4u, 4u, 0x89u, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v14, v16, v18);
    }
  }
  if ( *a6 == 4358 )
    Controller_PopulateVIAFirmwareVersion(a1, a5, a6, a8);
  *(_DWORD *)a7 = *a6;
  *(_DWORD *)(a7 + 4) = a6[1];
  *(_WORD *)(a7 + 8) = *((unsigned __int8 *)a6 + 8);
  *(_WORD *)(a7 + 24) = a6[22];
  *(_WORD *)(a7 + 26) = a6[23];
  *(_QWORD *)(a7 + 32) = a5[1];
  *(_QWORD *)(a7 + 40) = a5[6];
  result = a5[7];
  *(_QWORD *)(a7 + 48) = result;
  *(_DWORD *)(a7 + 12) = a2;
  *(_DWORD *)(a7 + 16) = v10;
  *(_DWORD *)(a7 + 20) = v11;
  return result;
}
