/*
 * XREFs of ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x1800B6DC0
 * Callers:
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800B8540 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5355@Z @ 0x18000234C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U1@U3@U3@.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGestureReadyChanged_(
        ISMTracing *this,
        char a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+64h] [rbp-1Ch] BYREF
  int v16; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+6Ch] [rbp-14h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v20; // [rsp+90h] [rbp+10h] BYREF

  v20 = this;
  v10 = ISMTracing::Provider();
  if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x400000000001LL) )
  {
    v18 = a5;
    v14 = a7;
    v15 = a6;
    v16 = a4;
    v17 = a3;
    LOBYTE(v20) = a2;
    v19 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_180210190,
      v11,
      v12,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v18,
      (__int64)&v15,
      (__int64)&v14);
  }
}
