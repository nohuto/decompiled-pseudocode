/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F928
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140256CC4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140023444 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056850 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14006015C (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  int v11; // ebx
  int v12; // eax
  struct _DMM_MONITOR_SERIALIZATION *v13; // rbx
  __int64 v14; // rax
  struct DXGADAPTER *v15; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  unsigned __int8 v22; // dl
  _BYTE *v23; // r14
  unsigned __int8 v24; // di
  char *v25; // rsi
  __int64 v26; // rbx
  _QWORD *v27; // rax
  DXGMONITOR *v28[3]; // [rsp+30h] [rbp-49h] BYREF
  DXGMONITOR *v29[3]; // [rsp+48h] [rbp-31h] BYREF
  void **v30; // [rsp+60h] [rbp-19h] BYREF
  void **v31; // [rsp+68h] [rbp-11h] BYREF
  int v32; // [rsp+70h] [rbp-9h]
  _QWORD v33[2]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp+Fh]
  int v35; // [rsp+90h] [rbp+17h]
  __int64 v36; // [rsp+98h] [rbp+1Fh]
  unsigned __int64 v37; // [rsp+F0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, __int64); // [rsp+F8h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 982;
    }
    v32 = 0;
    v30 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v34 = 0LL;
    v31 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v33[1] = v33;
    v33[0] = v33;
    v5 = *(_QWORD *)(a1 + 24);
    v35 = 2;
    v36 = 0LL;
    if ( v5 == a1 + 24 )
      v6 = 0LL;
    else
      v6 = v5 - 8;
    v7 = a1 + 24;
    while ( v6 )
    {
      if ( *(_QWORD *)(v6 + 112) )
      {
        v8 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL);
        v9 = (__int64)v8;
        if ( v8 )
        {
          v8[1] = 0LL;
          v8[2] = 0LL;
          *v8 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          v8[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v8[4] = 0LL;
          v8[5] = 0LL;
          v8[6] = 256LL;
        }
        else
        {
          v9 = 0LL;
        }
        v38 = (__int64 (__fastcall ***)(_QWORD, __int64))v9;
        if ( !v9 )
        {
          WdLogSingleEntry2(6LL, 56LL, v6);
          WdLogGlobalForLineNumber = 1004;
          v11 = -1073741801;
          goto LABEL_37;
        }
        v10 = *(_QWORD *)(v6 + 112);
        if ( !v10 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1015;
        }
        v37 = 0LL;
        if ( !v10 )
        {
          v11 = -1073741811;
LABEL_35:
          ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a1 + 88));
          WdLogSingleEntry4(2LL, *(_QWORD *)(v6 + 112), *(unsigned int *)(v6 + 24), ContainingAdapter, v11);
          WdLogGlobalForLineNumber = 1037;
LABEL_37:
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v38);
          goto LABEL_57;
        }
        MONITOR_MGR::AcquireMonitorShared(v29, v10);
        if ( !v29[0] )
        {
          v11 = -1073741275;
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3344;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v29);
          goto LABEL_35;
        }
        v11 = DXGMONITOR::_SerializeMonitor(v29[0], &v37, 0LL);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v29);
        if ( v11 < 0 && v11 != -1073741789 )
          goto LABEL_35;
        if ( v11 != -1073741789 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1042;
        }
        v12 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v9, v37);
        v11 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(2LL, v12);
          WdLogGlobalForLineNumber = 1052;
          goto LABEL_37;
        }
        v13 = *(struct _DMM_MONITOR_SERIALIZATION **)(v9 + 32);
        MONITOR_MGR::AcquireMonitorShared(v28, v10);
        if ( !v28[0] )
        {
          v11 = -1073741275;
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3344;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v28);
LABEL_31:
          v15 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a1 + 88));
          WdLogSingleEntry4(2LL, *(_QWORD *)(v6 + 112), *(unsigned int *)(v6 + 24), v15, v11);
          WdLogGlobalForLineNumber = 1070;
          goto LABEL_37;
        }
        v11 = DXGMONITOR::_SerializeMonitor(v28[0], &v37, v13);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v28);
        if ( v11 < 0 )
          goto LABEL_31;
        v38 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v30, v9);
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v38);
        v7 = a1 + 24;
      }
      v14 = *(_QWORD *)(v6 + 8);
      v6 = v14 - 8;
      if ( v14 == v7 )
        v6 = 0LL;
    }
    v17 = 1LL;
    if ( v34 > 1 )
      v17 = v34;
    v18 = 4 * v17 + 4;
    if ( (_QWORD *)v33[0] != v33 )
    {
      v19 = v33[0] - 8LL;
      if ( v33[0] != 8LL )
      {
        do
        {
          v18 += *(_QWORD *)(v19 + 40);
          v20 = *(_QWORD **)(v19 + 8);
          v19 = (__int64)(v20 - 1);
          if ( v20 == v33 )
            v19 = 0LL;
        }
        while ( v19 );
      }
    }
    v21 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v18);
    v11 = v21;
    if ( v21 >= 0 )
    {
      v22 = 1;
      v23 = (_BYTE *)a2[4];
      v24 = 0;
      *v23 = v34;
      if ( (unsigned __int8)v34 > 1u )
        v22 = v34;
      v25 = (char *)(a2[4] + 4LL + 4LL * v22);
      if ( (_QWORD *)v33[0] != v33 )
      {
        v26 = v33[0] - 8LL;
        if ( v33[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v23[4 * v24 + 4] = (_DWORD)v25 - (_DWORD)v23;
            memmove(v25, *(const void **)(v26 + 32), *(_QWORD *)(v26 + 40));
            v25 += *(_QWORD *)(v26 + 40);
            v27 = *(_QWORD **)(v26 + 8);
            v26 = (__int64)(v27 - 1);
            if ( v27 == v33 )
              v26 = 0LL;
            ++v24;
          }
          while ( v26 );
        }
      }
      if ( v24 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1147;
      }
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 1107;
    }
LABEL_57:
    v30 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v31 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v31);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 976;
  }
  return result;
}
