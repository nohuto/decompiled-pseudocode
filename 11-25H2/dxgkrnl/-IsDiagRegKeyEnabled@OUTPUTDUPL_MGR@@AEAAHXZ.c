/*
 * XREFs of ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1401E0214
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401DFDE8 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1401E16C8 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsDiagRegKeyEnabled(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  unsigned int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int128 v12; // [rsp+80h] [rbp+37h]
  __int128 v13; // [rsp+90h] [rbp+47h]
  unsigned int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+B4h] [rbp+6Bh]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF

  v15 = HIDWORD(this);
  v16 = 1;
  v14 = 0;
  v2 = 0LL;
  v4 = L"DxgEnableDesktopDuplicationDiagnostics";
  v9 = 0LL;
  v10 = 0;
  v5 = &v14;
  v11 = 0LL;
  v7 = &v16;
  v3 = 288;
  v6 = 67108868;
  v8 = 4;
  v12 = 0LL;
  v13 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v2, 0LL, 0LL);
  return v14;
}
