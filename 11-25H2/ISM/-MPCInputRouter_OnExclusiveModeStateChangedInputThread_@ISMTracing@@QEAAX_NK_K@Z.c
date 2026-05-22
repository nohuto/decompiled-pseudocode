/*
 * XREFs of ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x1800FC1F4
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FC670 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
        ISMTracing *this,
        char a2,
        int a3,
        __int64 a4)
{
  const struct _tlgProvider_t *v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  char v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  char *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  __int64 *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  if ( ISMTracing::IsEnabled() )
  {
    v7 = ISMTracing::Provider();
    if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 1LL) )
    {
      v22 = 0;
      v19 = 0;
      v16 = 0;
      v20 = &v12;
      v17 = &v11;
      v14 = &v10;
      v15 = v8;
      v12 = a4;
      v11 = a3;
      v10 = a2;
      v21 = 8;
      v18 = 4;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_18020B707, 0LL, 0LL, 5u, &v13);
    }
  }
}
