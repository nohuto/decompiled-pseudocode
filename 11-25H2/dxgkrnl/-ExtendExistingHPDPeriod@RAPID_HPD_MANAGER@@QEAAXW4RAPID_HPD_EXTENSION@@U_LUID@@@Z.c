/*
 * XREFs of ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x14005FA3C
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x140377270 (DxgkProcessDisplayCalloutBatch.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403774A0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@333@Z @ 0x140003F80 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434AEBU?$_tlgWrapperByRef@$0BA@@@444@Z @ 0x140004050 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U-$_tlgWrapperByRef@$0BA@@@U.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140052344 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

void __fastcall RAPID_HPD_MANAGER::ExtendExistingHPDPeriod(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // edx
  char v12; // cl
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  BOOL v17; // [rsp+70h] [rbp-19h] BYREF
  int v18; // [rsp+74h] [rbp-15h] BYREF
  unsigned int v19; // [rsp+78h] [rbp-11h] BYREF
  int v20; // [rsp+7Ch] [rbp-Dh] BYREF
  int v21; // [rsp+80h] [rbp-9h] BYREF
  BOOL v22; // [rsp+84h] [rbp-5h] BYREF
  int v23; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v24; // [rsp+8Ch] [rbp+3h] BYREF
  int v25; // [rsp+90h] [rbp+7h] BYREF
  __int64 v26; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 v31; // [rsp+C0h] [rbp+37h] BYREF
  char v32; // [rsp+C8h] [rbp+3Fh]
  int v33; // [rsp+F0h] [rbp+67h] BYREF
  int v34; // [rsp+108h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED((DXGAUTOPUSHLOCKFASTSHARED *)&v31, (struct DXGPUSHLOCKFAST *)a1);
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD *)(a1 + 56) + (unsigned int)(10000 * *(_DWORD *)(a1 + 24));
  LOBYTE(v9) = MEMORY[0xFFFFF78000000014] < v8;
  v10 = v7 + (unsigned int)(10000 * *(_DWORD *)(a1 + 28));
  if ( MEMORY[0xFFFFF78000000014] < v8 && MEMORY[0xFFFFF78000000014] < v10 )
    *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000014];
  v11 = *(_DWORD *)(a1 + 88);
  if ( v11 == 1 )
    goto LABEL_18;
  v12 = 0;
  if ( v11 != 2 )
    v12 = v9;
  if ( v12 )
  {
LABEL_18:
    if ( (unsigned int)dword_14015B5F0 > 5 && tlgKeywordOn((__int64)&dword_14015B5F0, 0x400000000002LL) )
    {
      v29 = a3;
      v24 = a2;
      v25 = 1;
      v30 = 16779264LL;
      v21 = *(_DWORD *)(a1 + 80);
      v20 = (MEMORY[0xFFFFF78000000014] - (int)v16) / 10000;
      v22 = v14 < v15;
      v28 = a1 + 36;
      v23 = *(unsigned __int8 *)(a1 + 32);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        MEMORY[0xFFFFF78000000014] - v16,
        (__int64)&unk_14013B8D1,
        v13,
        v14,
        (__int64)&v30,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v29,
        (__int64)&v23,
        &v28,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
    DxgkLogCodePointPacket(
      0x76u,
      a2,
      *(_DWORD *)(a1 + 88) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(_DWORD *)(a1 + 36),
      a3);
  }
  else if ( (unsigned int)dword_14015B5F0 > 5 )
  {
    v27 = a3;
    v19 = a2;
    v34 = *(_DWORD *)(a1 + 80);
    v33 = (MEMORY[0xFFFFF78000000014] - (int)v7) / 10000;
    v17 = v6 < v10;
    v26 = a1 + 36;
    v18 = *(unsigned __int8 *)(a1 + 32);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      MEMORY[0xFFFFF78000000014] - v7,
      (__int64)&unk_14013B839,
      v9,
      v6,
      (__int64)&v19,
      (__int64)&v27,
      (__int64)&v18,
      &v26,
      (__int64)&v17,
      (__int64)&v34,
      (__int64)&v33);
  }
  if ( v32 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v31 + 16));
    ExReleasePushLockSharedEx(v31, 0LL);
    KeLeaveCriticalRegion();
  }
}
