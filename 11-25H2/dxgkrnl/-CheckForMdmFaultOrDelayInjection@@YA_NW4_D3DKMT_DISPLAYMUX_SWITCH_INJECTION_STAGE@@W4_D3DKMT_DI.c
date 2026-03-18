/*
 * XREFs of ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x140082B3C
 * Callers:
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x140084288 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004BA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlg.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14001DB10 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

char __fastcall CheckForMdmFaultOrDelayInjection(int a1, int a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r9
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-40h]
  _OWORD v32[4]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a3 + 36);
  v4 = a1;
  v6 = a2;
  if ( a1 == v3 || v3 == -1 )
  {
    v7 = *(_DWORD *)(a3 + 40);
    if ( v7 )
    {
      WdLogSingleEntry2(2LL, a1, v7);
      WdLogGlobalForLineNumber = 4408;
      HIDWORD(v31) = *(_DWORD *)(a3 + 40);
      v28 = 0x4000000006uLL;
      v30 = 0uLL;
      v29 = 0LL;
      *(_QWORD *)&v31 = 0x100000082LL;
      DWORD2(v31) = v4;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v28);
      if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 512LL) )
      {
        v15 = *(_DWORD *)(a3 + 40);
        v16 = v4;
        v21 = a3 + 16;
        v22 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          (__int64)&unk_14013C327,
          a3,
          v9,
          (__int64)&v22,
          &v21,
          (__int64)&v16,
          (__int64)&v15);
      }
      Interval.QuadPart = -(__int64)(unsigned int)(10000 * *(_DWORD *)(a3 + 40));
      KeDelayExecutionThread(0, 0, &Interval);
      WdLogSingleEntry2(2LL, v4, *(unsigned int *)(a3 + 40));
      WdLogGlobalForLineNumber = 4444;
      memset(v32, 0, sizeof(v32));
      v28 = *(unsigned __int64 *)&v32[0];
      v30 = v32[2];
      v31 = v32[3];
      v10 = *(_DWORD *)(a3 + 40);
      v29 = 0LL;
      *(_QWORD *)&v28 = 0x4000000006LL;
      DWORD2(v30) = 0;
      *(_QWORD *)&v30 = 0LL;
      *(_QWORD *)&v31 = 130LL;
      *((_QWORD *)&v31 + 1) = __PAIR64__(v10, v4);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v28);
      if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 512LL) )
      {
        v17 = *(_DWORD *)(a3 + 40);
        v18 = v4;
        v24 = a3 + 16;
        v25 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          (__int64)&unk_14013C2C2,
          a3,
          v12,
          (__int64)&v25,
          &v24,
          (__int64)&v18,
          (__int64)&v17);
      }
    }
  }
  if ( (_DWORD)v4 != *(_DWORD *)(a3 + 32) )
    return 0;
  *(_DWORD *)(a3 + 212) |= 1u;
  *(_DWORD *)(a3 + 64) = -1073741595;
  *(_DWORD *)(a3 + 60) = v4;
  *(_DWORD *)(a3 + 56) = v6;
  *(_DWORD *)(a3 + 68) = 1;
  RtlStringCbCopyA((char *)(a3 + 72), 128LL, "**FaultInjected**");
  WdLogSingleEntry2(2LL, v4, v6);
  WdLogGlobalForLineNumber = 4474;
  memset(&v32[1], 0, 32);
  v32[0] = 0x4000000006uLL;
  LODWORD(v32[3]) = 131;
  DWORD1(v32[3]) = v4;
  *((_QWORD *)&v32[3] + 1) = (unsigned int)v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32);
  if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 512LL) )
  {
    v19 = v6;
    v26 = a3 + 16;
    v20 = v4;
    v27 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&v27,
      (__int64)&unk_14013C250,
      a3,
      v13,
      (__int64)&v27,
      &v26,
      (__int64)&v20,
      (__int64)&v19);
  }
  if ( g_DisplayMuxDebug )
    __debugbreak();
  return 1;
}
