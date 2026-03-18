/*
 * XREFs of ?LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J_N@Z @ 0x1400850CC
 * Callers:
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x140087720 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     DpiDisplayMuxTelemetryProviderCallback @ 0x1400883D8 (DpiDisplayMuxTelemetryProviderCallback.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U1@U2@U2@U2@U?$_tlgWrapSz@G@@U1@U2@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$00@@444443444AEBU?$_tlgWrapSz@G@@34447@Z @ 0x14000540C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNIC_ea_14000540C.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEAEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z @ 0x14005FD10 (-DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEAEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z.c)
 *     ?FillMdmStatus@DISPLAY_MUX_PAIRING@@QEBAXPEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z @ 0x140084014 (-FillMdmStatus@DISPLAY_MUX_PAIRING@@QEBAXPEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall DISPLAY_MUX_PAIRING::LogMuxPairingStateTelemetry(
        DISPLAY_MUX_PAIRING *a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  unsigned __int16 *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+C0h] [rbp-80h] BYREF
  int v27; // [rsp+C4h] [rbp-7Ch] BYREF
  int v28; // [rsp+C8h] [rbp-78h] BYREF
  int v29; // [rsp+CCh] [rbp-74h] BYREF
  int v30; // [rsp+D0h] [rbp-70h] BYREF
  int v31; // [rsp+D4h] [rbp-6Ch] BYREF
  int v32; // [rsp+D8h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+DCh] [rbp-64h] BYREF
  unsigned int v34; // [rsp+E4h] [rbp-5Ch] BYREF
  unsigned int v35; // [rsp+E8h] [rbp-58h] BYREF
  int v36; // [rsp+ECh] [rbp-54h] BYREF
  void *v37; // [rsp+F0h] [rbp-50h] BYREF
  void *v38; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+100h] [rbp-40h] BYREF
  unsigned __int16 *v40; // [rsp+108h] [rbp-38h] BYREF
  unsigned __int16 *v41; // [rsp+110h] [rbp-30h] BYREF
  __int64 v42; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v43[92]; // [rsp+120h] [rbp-20h] BYREF
  char DoesSystemSupportStaticMdmNow; // [rsp+438h] [rbp+2F8h] BYREF

  memset(v43, 0, 0x2D8uLL);
  DISPLAY_MUX_PAIRING::FillMdmStatus(a1, (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)v43);
  if ( a4 )
  {
    if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 512LL) )
    {
      v9 = *((_QWORD *)a1 + 3);
      if ( v9 )
      {
        v37 = (void *)(v9 + 32);
        v26 = *(_DWORD *)(v9 + 28);
        v27 = *(_DWORD *)(v9 + 24);
        v28 = *(_DWORD *)(v9 + 356);
        v10 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v37 = &unk_1400C5C48;
        v10 = (__int64)v8;
        v26 = (int)v8;
        v27 = (int)v8;
        v28 = -1;
      }
      v11 = *((_QWORD *)a1 + 2);
      v39 = v10;
      if ( v11 )
      {
        v38 = (void *)(v11 + 32);
        v29 = *(_DWORD *)(v11 + 28);
        v30 = *(_DWORD *)(v11 + 24);
        v31 = *(_DWORD *)(v11 + 356);
        v12 = *(unsigned __int16 **)(v11 + 16);
      }
      else
      {
        v38 = &unk_1400C5C48;
        v12 = v8;
        v29 = (int)v8;
        v30 = (int)v8;
        v31 = -1;
      }
      v40 = v12;
      v13 = *((_QWORD *)a1 + 1);
      if ( v13 )
        LODWORD(v8) = *(_DWORD *)(v13 + 72);
      v34 = HIDWORD(v43[89]);
      v35 = v43[89];
      v32 = (int)v8;
      v33 = __PAIR64__(a2, a3);
      DoesSystemSupportStaticMdmNow = DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow(
                                        qword_14015E3C0,
                                        (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)v43);
      v14 = *((_QWORD *)a1 + 1);
      v36 = 2;
      v42 = 2048LL;
      v41 = (unsigned __int16 *)((v14 + 16) & -(__int64)(v14 != 0));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14 + 16,
        (__int64)&unk_14013C9D1,
        v15,
        v16,
        (__int64)&v42,
        (__int64)&v36,
        &v41,
        (__int64)&DoesSystemSupportStaticMdmNow,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33 + 4,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v40,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        &v38,
        (__int64)&v39,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        &v37);
    }
  }
  else if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 0x400000000200LL) )
  {
    v18 = *((_QWORD *)a1 + 3);
    if ( v18 )
    {
      v38 = (void *)(v18 + 32);
      v31 = *(_DWORD *)(v18 + 28);
      v30 = *(_DWORD *)(v18 + 24);
      v29 = *(_DWORD *)(v18 + 356);
      v19 = *(_QWORD *)(v18 + 16);
    }
    else
    {
      v38 = &unk_1400C5C48;
      v19 = (__int64)v17;
      v31 = (int)v17;
      v30 = (int)v17;
      v29 = -1;
    }
    v20 = *((_QWORD *)a1 + 2);
    v42 = v19;
    if ( v20 )
    {
      v37 = (void *)(v20 + 32);
      v28 = *(_DWORD *)(v20 + 28);
      v27 = *(_DWORD *)(v20 + 24);
      v26 = *(_DWORD *)(v20 + 356);
      v21 = *(unsigned __int16 **)(v20 + 16);
    }
    else
    {
      v37 = &unk_1400C5C48;
      v21 = v17;
      v28 = (int)v17;
      v27 = (int)v17;
      v26 = -1;
    }
    v41 = v21;
    v22 = *((_QWORD *)a1 + 1);
    if ( v22 )
      LODWORD(v17) = *(_DWORD *)(v22 + 72);
    v33 = v43[89];
    v36 = (int)v17;
    v35 = a3;
    v34 = a2;
    DoesSystemSupportStaticMdmNow = DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow(
                                      qword_14015E3C0,
                                      (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)v43);
    v23 = *((_QWORD *)a1 + 1);
    v32 = 2;
    v39 = 2048LL;
    v40 = (unsigned __int16 *)((v23 + 16) & -(__int64)(v23 != 0));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v23 + 16,
      (__int64)&unk_14013C866,
      v24,
      v25,
      (__int64)&v39,
      (__int64)&v32,
      &v40,
      (__int64)&DoesSystemSupportStaticMdmNow,
      (__int64)&v33,
      (__int64)&v33 + 4,
      (__int64)&v34,
      (__int64)&v35,
      (__int64)&v36,
      (__int64)&v41,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v28,
      &v37,
      (__int64)&v42,
      (__int64)&v29,
      (__int64)&v30,
      (__int64)&v31,
      &v38);
  }
}
