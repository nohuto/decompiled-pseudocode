/*
 * XREFs of ?LogMdmStatusTelemetry@DISPLAY_MUX_MGR@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J_N@Z @ 0x140084ECC
 * Callers:
 *     ?SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z @ 0x1400876BC (-SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z.c)
 *     DpiDisplayMuxTelemetryProviderCallback @ 0x1400883D8 (DpiDisplayMuxTelemetryProviderCallback.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@444455@Z @ 0x140004D1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@U2@U2@.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x14005FCC0 (-DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ.c)
 */

char __fastcall DISPLAY_MUX_MGR::LogMdmStatusTelemetry(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // rax
  int v7; // r10d
  char *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rdx
  int *v13; // rax
  int v14; // r10d
  char *v15; // r11
  int *v17; // [rsp+30h] [rbp-29h]
  int *v18; // [rsp+38h] [rbp-21h]
  int *v19; // [rsp+50h] [rbp-9h]
  int *v20; // [rsp+58h] [rbp-1h]
  int *v21; // [rsp+60h] [rbp+7h]
  unsigned __int8 v22[4]; // [rsp+80h] [rbp+27h] BYREF
  int v23; // [rsp+84h] [rbp+2Bh] BYREF
  int v24; // [rsp+88h] [rbp+2Fh] BYREF
  int v25; // [rsp+8Ch] [rbp+33h] BYREF
  int v26; // [rsp+90h] [rbp+37h] BYREF
  int v27; // [rsp+94h] [rbp+3Bh] BYREF
  int v28; // [rsp+98h] [rbp+3Fh] BYREF
  int v29; // [rsp+9Ch] [rbp+43h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+47h] BYREF
  char v31; // [rsp+C0h] [rbp+67h] BYREF
  char v32; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  if ( a4 )
  {
    if ( (unsigned int)dword_14015B5B8 > 5 )
    {
      LOBYTE(v4) = tlgKeywordOn((__int64)&dword_14015B5B8, 512LL);
      if ( (_BYTE)v4 )
      {
        v32 = v8[8];
        v31 = *v8;
        v24 = *((_DWORD *)v8 + 27);
        v25 = *((_DWORD *)v8 + 3);
        v26 = *((_DWORD *)v8 + 1);
        v23 = v7;
        v22[0] = DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow((DISPLAY_MUX_MGR *)v8);
        v12 = &unk_14013C480;
        v27 = a2;
        v21 = &v23;
        v20 = &v24;
        v19 = &v25;
        v18 = &v27;
        v17 = &v28;
        v13 = &v29;
        v28 = a3;
        v29 = 2;
LABEL_8:
        v30 = 2048LL;
        LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                       v9,
                       (__int64)v12,
                       v10,
                       v11,
                       (__int64)&v30,
                       (__int64)v13,
                       (__int64)v17,
                       (__int64)v18,
                       (__int64)v22,
                       (__int64)&v26,
                       (__int64)v19,
                       (__int64)v20,
                       (__int64)v21,
                       (__int64)&v31,
                       (__int64)&v32);
      }
    }
  }
  else if ( (unsigned int)dword_14015B5B8 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_14015B5B8, 0x400000000200LL);
    if ( (_BYTE)v4 )
    {
      v32 = v15[8];
      v31 = *v15;
      v28 = *((_DWORD *)v15 + 27);
      v27 = *((_DWORD *)v15 + 3);
      v26 = *((_DWORD *)v15 + 1);
      v29 = v14;
      v22[0] = DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow((DISPLAY_MUX_MGR *)v15);
      v12 = &unk_14013C57E;
      v25 = a2;
      v21 = &v29;
      v20 = &v28;
      v19 = &v27;
      v18 = &v25;
      v17 = &v24;
      v13 = &v23;
      v24 = a3;
      v23 = 2;
      goto LABEL_8;
    }
  }
  return v4;
}
