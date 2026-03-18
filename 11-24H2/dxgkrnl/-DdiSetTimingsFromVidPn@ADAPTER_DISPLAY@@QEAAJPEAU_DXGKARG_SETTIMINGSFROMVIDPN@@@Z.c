/*
 * XREFs of ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1404084E8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34444@Z @ 0x140002A70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETTIMINGSFROMVIDPN *a2,
        __int64 a3)
{
  int v3; // edi
  __int64 v6; // rbx
  __int64 v7; // r13
  KIRQL CurrentIrql; // al
  __int64 v9; // r12
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v12; // rsi
  KIRQL v13; // al
  __int64 v14; // rbx
  __int64 TimeIncrement; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v19; // edx
  __int64 v20; // rax
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  PDXGK_SET_TIMING_RESULTS pResultsFlags; // rax
  UINT Value; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  UINT v31; // [rsp+64h] [rbp-9Ch] BYREF
  UINT v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+6Ch] [rbp-94h] BYREF
  int v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  char v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CCh] [rbp-34h]
  int v46; // [rsp+D0h] [rbp-30h]
  UINT PathCount; // [rsp+D4h] [rbp-2Ch]
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+DCh] [rbp-24h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  _BYTE v51[56]; // [rsp+F0h] [rbp-10h] BYREF

  v35 = -1;
  v3 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v45 = 0;
  v36 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 5076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5076);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 5076);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v10 = Current;
    if ( Current )
      v3 = *((_DWORD *)Current + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v51,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETTIMINGSFROMVIDPN *))(*((_QWORD *)this + 2) + 1160LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v51);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v13);
    WdLogGlobalForLineNumber = 4467;
  }
  if ( v10 && *((_DWORD *)v10 + 12) != v3 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v3, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v14 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v16 = *((_QWORD *)this + 2);
  v17 = v14 * TimeIncrement;
  if ( (int)v12 < 0 )
  {
    v20 = *(_QWORD *)(v16 + 412);
    v21 = a2->pResultsFlags->0;
    v41 = 0LL;
    PathCount = a2->PathCount;
    v46 = 96;
    v48 = v21;
    v49 = v12;
    v50 = v20;
  }
  else
  {
    v18 = *(_QWORD *)(v16 + 412);
    v19 = a2->pResultsFlags->0;
    v41 = 0LL;
    PathCount = a2->PathCount;
    v48 = v19;
    v46 = 87;
    v49 = (v17 - v7) / 0x2710uLL;
    v50 = v18;
  }
  v43 = 0LL;
  v42 = 0LL;
  v44 = 0;
  v40[1] = 72;
  v40[0] = 30;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v40);
  if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 0x4000LL) )
  {
    pResultsFlags = a2->pResultsFlags;
    v30 = v23;
    Value = pResultsFlags->Value;
    v32 = a2->PathCount;
    v26 = *((_QWORD *)this + 2);
    v31 = Value;
    v33 = v12;
    v38 = *(_QWORD *)(v26 + 412);
    v34 = 1;
    v39 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v38,
      (__int64)&unk_14013C223,
      v22,
      v23,
      (__int64)&v39,
      (__int64)&v34,
      (__int64)&v38,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30);
  }
  WdLogSingleEntry4(4LL, v12, a2->hFunctionalVidPn, *(_DWORD *)&a2->pResultsFlags->0, a2->PathCount);
  WdLogGlobalForLineNumber = 4521;
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 4523;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v35);
  return (unsigned int)v12;
}
