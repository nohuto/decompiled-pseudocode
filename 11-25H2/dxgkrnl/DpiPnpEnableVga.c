/*
 * XREFs of DpiPnpEnableVga @ 0x140243AB4
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x140243090 (DpiDisableMsBddFallbackDriverWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // r8
  _DWORD v10[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h]
  __int64 v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  _DWORD v14[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  int v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+84h] [rbp+1Bh]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  v10[1] = 0;
  v13 = 0LL;
  v6 = a2;
  v7 = a1;
  DxgkInvalidateQdcCache();
  v11 = 0LL;
  v10[0] = 7;
  v12 = v7;
  if ( qword_14015DFF8 )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_14015DFF8 + 64) + 152LL);
  v19 = 0;
  v18 = 0;
  v23 = 0;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v14[0] = 6;
  v14[1] = 64;
  v20 = 48;
  v21 = v7;
  v22 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, 0x200000000uLL);
  LOBYTE(v8) = v6;
  return SMgrGdiCallout(
           v10,
           0x200000000LL,
           v8,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0),
           a3,
           a4);
}
