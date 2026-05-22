/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x1800FC488
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FD014 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FB3D0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  char v10; // [rsp+30h] [rbp-61h] BYREF
  char v11; // [rsp+31h] [rbp-60h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-59h] BYREF
  struct IMPCTarget *v14; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-41h] BYREF
  char *v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+7Ch] [rbp-15h]
  struct IMPCTarget **v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+8Ch] [rbp-5h]
  char *v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+9Ch] [rbp+Bh]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+ACh] [rbp+1Bh]
  unsigned __int64 *v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+BCh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled() )
  {
    v8 = ISMTracing::Provider();
    v9 = (__int64)v8;
    if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v13 = a5;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v18 = 0;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
      v28 = &v13;
      p_PIDOfTarget = &PIDOfTarget;
      v22 = &v10;
      v19 = &v14;
      v16 = &v11;
      v29 = 8;
      v20 = 8;
      v10 = a4;
      v14 = a3;
      v11 = a2;
      v26 = 4;
      v23 = 1;
      v17 = 1;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_18020B817, 0LL, 0LL, 7u, &v15);
    }
  }
}
