/*
 * XREFs of ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18014D220
 * Callers:
 *     wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::operator() @ 0x18014BC90 (wistd--__function--__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x18014BF88 (-OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::SpatialApplicationInfoUpdateCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        GUID *a3,
        struct _RTL_CRITICAL_SECTION *a4,
        struct ApplicationSpatialInformationWnf *a5,
        unsigned int a6)
{
  char v7; // si
  _DWORD *SpinCount; // rcx
  char v11; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-35h] BYREF
  char v13[32]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp-9h]
  int v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+6Ch] [rbp+3h]
  GUID *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  char *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]

  v7 = 0;
  if ( a6 >= 0x90 && a6 >= (unsigned __int64)(unsigned int)(*(_DWORD *)a5 * *((_DWORD *)a5 + 18)) + 144 )
  {
    v7 = 1;
    CExclusiveModeListener::OnExclusiveModeChange(a4, a5);
  }
  SpinCount = (_DWORD *)a4[8].SpinCount;
  if ( *SpinCount > 5u )
  {
    v11 = v7;
    v12 = a6;
    if ( !a3 )
      a3 = &GUID_00000000_0000_0000_0000_000000000000;
    v21 = 1;
    v22 = 0;
    v19 = 0;
    v16 = 0;
    v20 = &v11;
    v17 = a3;
    v14 = &v12;
    v18 = 16;
    v15 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)SpinCount, byte_1801B26D5, 0LL, 0LL, 5, (__int64)v13);
  }
  return 0LL;
}
