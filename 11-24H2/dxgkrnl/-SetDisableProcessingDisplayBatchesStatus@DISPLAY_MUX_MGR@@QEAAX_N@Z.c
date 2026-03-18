/*
 * XREFs of ?SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z @ 0x140087B80
 * Callers:
 *     _lambda_5bf16074e78eca97c9745c10e52e39f7_::operator() @ 0x140082B58 (_lambda_5bf16074e78eca97c9745c10e52e39f7_--operator().c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DISPLAY_MUX_MGR::SetDisableProcessingDisplayBatchesStatus(DISPLAY_MUX_MGR *this, unsigned __int8 a2)
{
  int v2; // edi
  _BYTE v4[16]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v5[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v6; // [rsp+38h] [rbp-48h]
  __int128 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  __int64 v12; // [rsp+68h] [rbp-18h]

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v5[0] = 6;
  v9 = 0LL;
  v8 = 0LL;
  v12 = 0LL;
  v5[1] = 64;
  v6 = 0LL;
  v7 = 0LL;
  v10 = 140;
  v11 = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5);
  *((_BYTE *)this + 112) = v2;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
}
