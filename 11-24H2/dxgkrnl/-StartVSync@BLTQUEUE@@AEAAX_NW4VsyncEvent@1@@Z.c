/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14028222C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1403EF064 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140430030 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x140006E04 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400072E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400516E8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140282B44 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403A4510 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(__int64 a1, char a2, char a3)
{
  int v3; // eax
  struct _KTHREAD **v7; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  int v18; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+78h] [rbp-8h]
  int v25; // [rsp+A0h] [rbp+20h] BYREF
  int v26; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *(_DWORD *)(a1 + 1072);
  if ( (v3 & 8) != 0 && (v3 & 2) == 0 )
  {
    v7 = 0LL;
    if ( !a2 )
      v7 = (struct _KTHREAD **)(a1 + 424);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, v7, 0);
    if ( !a2 )
    {
      DXGPUSHLOCK::AcquireExclusive(v23);
      v24 = 2;
    }
    if ( *(_DWORD *)(a1 + 136) == 2
      && *((_BYTE *)DXGGLOBAL::GetGlobal() + 305304)
      && (Global = DXGGLOBAL::GetGlobal(), DXGGLOBAL::IsVmConnectedToHost(Global)) )
    {
      BLTQUEUE::RecreateVsyncSource(a1, 0, 13);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
              *(_QWORD *)(a1 + 128),
              *(_QWORD *)(a1 + 384),
              *(unsigned int *)(a1 + 260));
      if ( (unsigned int)dword_14015E5A8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000000800LL) )
        {
          v25 = *(_DWORD *)(a1 + 136);
          v26 = v10;
          v20 = 33556480LL;
          v21 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v9,
            (int)&unk_140140EE5,
            v11,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v26,
            (__int64)&v25);
          v12 = dword_14015E5A8;
        }
        if ( v12 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 2048LL) )
        {
          v18 = *(_DWORD *)(a1 + 136);
          v19 = v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v9,
            (__int64)&unk_140140EA8,
            v11,
            v13,
            (__int64)&v19,
            (__int64)&v18);
        }
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
              *(_QWORD *)(a1 + 128),
              *(_QWORD *)(a1 + 384),
              *(unsigned int *)(a1 + 260));
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v9, &EventBltQueueVsyncStart, v11, *(_DWORD *)(a1 + 136), v10, a3);
    if ( v10 >= 0 )
      goto LABEL_27;
    *(_DWORD *)(a1 + 136) = 2;
    BLTQUEUE::RecreateVsyncSource(a1, 1, 14);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 384),
            *(unsigned int *)(a1 + 260));
    v17 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(1LL, a1, v14);
      WdLogGlobalForLineNumber = 3290;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"BLTQUEUE 0x%I64x : Failed to start Vsync source after recreate Vsync source, Status = 0x%I64x",
        a1,
        v17,
        0LL,
        0LL,
        0LL);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v15, &EventBltQueueVsyncStart, v16, *(_DWORD *)(a1 + 136), v17, 14);
    }
    if ( (int)v17 >= 0 )
LABEL_27:
      *(_DWORD *)(a1 + 1072) |= 2u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  }
}
