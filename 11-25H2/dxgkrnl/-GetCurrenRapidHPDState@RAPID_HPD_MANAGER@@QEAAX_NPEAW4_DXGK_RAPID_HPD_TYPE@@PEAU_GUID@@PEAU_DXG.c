/*
 * XREFs of ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140052108
 * Callers:
 *     ?DxgkGetCurrentRapidHPDState@@YAJPEAU_DXGK_RAPID_HPD_INFO@@@Z @ 0x1400776C0 (-DxgkGetCurrentRapidHPDState@@YAJPEAU_DXGK_RAPID_HPD_INFO@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x140377270 (DxgkProcessDisplayCalloutBatch.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403BFC70 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140003ED0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6A.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140052344 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
        RAPID_HPD_MANAGER *this,
        unsigned __int8 a2,
        enum _DXGK_RAPID_HPD_TYPE *a3,
        struct _GUID *a4,
        struct _DXGK_RAPID_HPD_DIAG *a5)
{
  int v5; // r12d
  int v9; // r15d
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // r13
  struct _DXGK_RAPID_HPD_DIAG *v18; // rax
  BOOL v19; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+54h] [rbp-2Ch] BYREF
  int v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  struct _GUID *v23; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h] BYREF
  char v25; // [rsp+78h] [rbp-8h]
  int v26; // [rsp+B0h] [rbp+30h] BYREF

  v5 = a2;
  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED((DXGAUTOPUSHLOCKFASTSHARED *)&v24, this, (bool)a3);
  v9 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 11);
    if ( v11 )
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v11 + 240))(0LL, 0LL, 0LL);
  }
  v12 = MEMORY[0xFFFFF78000000014];
  v13 = *((_DWORD *)this + 22);
  v14 = *((_QWORD *)this + 9) + (unsigned int)(10000 * *((_DWORD *)this + 7));
  v15 = *((_QWORD *)this + 7) + (unsigned int)(10000 * *((_DWORD *)this + 6));
  v22 = v14;
  v16 = MEMORY[0xFFFFF78000000014] < v15;
  if ( v13 == 1 )
    v16 = 1LL;
  v17 = 0;
  if ( v13 != 2 )
    v17 = v16;
  if ( !v9 && *((_BYTE *)this + 32) && v17 )
  {
    if ( !*((_DWORD *)this + 13) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 193;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_CurrentType != DXGK_RAPID_HPD_NONE",
        193LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v14 = v22;
    }
    *(_DWORD *)a3 = *((_DWORD *)this + 13);
    *a4 = *(struct _GUID *)((char *)this + 36);
    if ( *((_DWORD *)this + 22) == 1 )
    {
      *((_DWORD *)this + 13) = 1;
    }
    else if ( (_BYTE)v5 )
    {
      *((_DWORD *)this + 13) = 2;
    }
    v16 = (__int64)a5;
    if ( a5 )
    {
      *((_QWORD *)a5 + 1) = *((_QWORD *)this + 9);
      *(_DWORD *)v16 = *((_DWORD *)this + 20);
    }
  }
  else
  {
    v18 = a5;
    *(_DWORD *)a3 = 0;
    *a4 = 0LL;
    if ( v18 )
      *(_OWORD *)v18 = 0LL;
  }
  if ( (unsigned int)dword_14015B5F0 > 5 )
  {
    v26 = v17;
    v23 = a4;
    v21 = v5;
    v19 = v12 < v14;
    v20 = *(_DWORD *)a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v16,
      (__int64)&unk_14013B7C6,
      v14,
      1LL,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v26,
      (__int64 *)&v23);
  }
  if ( v25 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v24 + 16));
    ExReleasePushLockSharedEx(v24, 0LL);
    KeLeaveCriticalRegion();
  }
}
