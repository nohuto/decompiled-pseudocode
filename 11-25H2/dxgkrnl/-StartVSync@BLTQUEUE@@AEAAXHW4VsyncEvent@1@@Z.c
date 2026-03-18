/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403A59D4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B53C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14027C3E0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1403A596C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x14042E128 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x140006E04 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x14000723C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140051C98 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14027BB3C (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403B39D4 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(__int64 a1, int a2, char a3)
{
  int v3; // eax
  struct _KTHREAD **v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  DXGGLOBAL *Global; // rax
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

  v3 = *(_DWORD *)(a1 + 1000);
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
      && *((_BYTE *)DXGGLOBAL::GetGlobal() + 305224)
      && (Global = DXGGLOBAL::GetGlobal(), DXGGLOBAL::IsVmConnectedToHost(Global)) )
    {
      BLTQUEUE::RecreateVsyncSource(a1, 0, 13);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
             *(_QWORD *)(a1 + 128),
             *(_QWORD *)(a1 + 384),
             *(unsigned int *)(a1 + 260));
      if ( (unsigned int)dword_14015B5B8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_14015B5B8, 0x400000000800LL) )
        {
          v25 = *(_DWORD *)(a1 + 136);
          v26 = v9;
          v20 = 33556480LL;
          v21 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            (int)&unk_14013E27C,
            v10,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v26,
            (__int64)&v25);
          v12 = dword_14015B5B8;
        }
        if ( v12 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 2048LL) )
        {
          v18 = *(_DWORD *)(a1 + 136);
          v19 = v9;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            (__int64)&unk_14013E23F,
            v10,
            v13,
            (__int64)&v19,
            (__int64)&v18);
        }
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
             *(_QWORD *)(a1 + 128),
             *(_QWORD *)(a1 + 384),
             *(unsigned int *)(a1 + 260));
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v8, &EventBltQueueVsyncStart, v10, *(_DWORD *)(a1 + 136), v9, a3);
    if ( v9 >= 0 )
      goto LABEL_13;
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
      WdLogGlobalForLineNumber = 2847;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
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
LABEL_13:
      *(_DWORD *)(a1 + 1000) |= 2u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  }
}
