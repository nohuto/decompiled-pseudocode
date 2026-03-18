/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140258A28
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056FA0 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14005F8A4 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x14026FB10 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r12
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  struct _DMM_MONITOR_SERIALIZATION *v17; // rbx
  __int64 v18; // rax
  struct DXGADAPTER *v19; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  int v25; // eax
  unsigned __int8 v26; // dl
  _BYTE *v27; // r14
  unsigned __int8 v28; // di
  char *v29; // rsi
  __int64 v30; // rbx
  _QWORD *v31; // rax
  DXGMONITOR *v32[3]; // [rsp+30h] [rbp-49h] BYREF
  DXGMONITOR *v33[3]; // [rsp+48h] [rbp-31h] BYREF
  void **v34; // [rsp+60h] [rbp-19h] BYREF
  void **v35; // [rsp+68h] [rbp-11h] BYREF
  int v36; // [rsp+70h] [rbp-9h]
  _QWORD v37[2]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp+Fh]
  int v39; // [rsp+90h] [rbp+17h]
  __int64 v40; // [rsp+98h] [rbp+1Fh]
  unsigned __int64 v41; // [rsp+F0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, __int64); // [rsp+F8h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 968;
    }
    v36 = 0;
    v34 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v38 = 0LL;
    v35 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v37[1] = v37;
    v37[0] = v37;
    v7 = *(_QWORD *)(a1 + 24);
    v39 = 2;
    v40 = 0LL;
    if ( v7 == a1 + 24 )
      v8 = 0LL;
    else
      v8 = v7 - 8;
    v9 = a1 + 24;
    while ( v8 )
    {
      if ( *(_QWORD *)(v8 + 112) )
      {
        v10 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL, a4);
        v11 = (__int64)v10;
        if ( v10 )
        {
          v10[1] = 0LL;
          v10[2] = 0LL;
          *v10 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          v10[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v10[4] = 0LL;
          v10[5] = 0LL;
          v10[6] = 256LL;
        }
        else
        {
          v11 = 0LL;
        }
        v42 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
        if ( !v11 )
        {
          WdLogSingleEntry2(6LL, 56LL, v8);
          WdLogGlobalForLineNumber = 990;
          v13 = -1073741801;
          goto LABEL_37;
        }
        v12 = *(_QWORD *)(v8 + 112);
        if ( !v12 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1001;
        }
        v41 = 0LL;
        if ( !v12 )
        {
          v13 = -1073741811;
LABEL_35:
          ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a1 + 88));
          WdLogSingleEntry4(2LL, *(_QWORD *)(v8 + 112), *(unsigned int *)(v8 + 24), ContainingAdapter, v13);
          WdLogGlobalForLineNumber = 1023;
LABEL_37:
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v42);
          goto LABEL_57;
        }
        MONITOR_MGR::AcquireMonitorShared(v33, v12);
        if ( !v33[0] )
        {
          v13 = -1073741275;
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3344;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v33);
          goto LABEL_35;
        }
        v13 = DXGMONITOR::_SerializeMonitor(v33[0], &v41, 0LL);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v33);
        if ( v13 < 0 && v13 != -1073741789 )
          goto LABEL_35;
        if ( v13 != -1073741789 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1028;
        }
        v16 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v11, v41, v14, v15);
        v13 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry1(2LL, v16);
          WdLogGlobalForLineNumber = 1038;
          goto LABEL_37;
        }
        v17 = *(struct _DMM_MONITOR_SERIALIZATION **)(v11 + 32);
        MONITOR_MGR::AcquireMonitorShared(v32, v12);
        if ( !v32[0] )
        {
          v13 = -1073741275;
          WdLogSingleEntry1(2LL, -1073741275LL);
          WdLogGlobalForLineNumber = 3344;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v32);
LABEL_31:
          v19 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a1 + 88));
          WdLogSingleEntry4(2LL, *(_QWORD *)(v8 + 112), *(unsigned int *)(v8 + 24), v19, v13);
          WdLogGlobalForLineNumber = 1056;
          goto LABEL_37;
        }
        v13 = DXGMONITOR::_SerializeMonitor(v32[0], &v41, v17);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v32);
        if ( v13 < 0 )
          goto LABEL_31;
        v42 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v34, v11);
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v42);
        v9 = a1 + 24;
      }
      v18 = *(_QWORD *)(v8 + 8);
      v8 = v18 - 8;
      if ( v18 == v9 )
        v8 = 0LL;
    }
    v21 = 1LL;
    if ( v38 > 1 )
      v21 = v38;
    v22 = 4 * v21 + 4;
    if ( (_QWORD *)v37[0] != v37 )
    {
      v23 = v37[0] - 8LL;
      if ( v37[0] != 8LL )
      {
        do
        {
          v22 += *(_QWORD *)(v23 + 40);
          a3 = v37;
          v24 = *(_QWORD **)(v23 + 8);
          v23 = (__int64)(v24 - 1);
          if ( v24 == v37 )
            v23 = 0LL;
        }
        while ( v23 );
      }
    }
    v25 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v22, (__int64)a3, a4);
    v13 = v25;
    if ( v25 >= 0 )
    {
      v26 = 1;
      v27 = (_BYTE *)a2[4];
      v28 = 0;
      *v27 = v38;
      if ( (unsigned __int8)v38 > 1u )
        v26 = v38;
      v29 = (char *)(a2[4] + 4LL + 4LL * v26);
      if ( (_QWORD *)v37[0] != v37 )
      {
        v30 = v37[0] - 8LL;
        if ( v37[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v27[4 * v28 + 4] = (_DWORD)v29 - (_DWORD)v27;
            memmove(v29, *(const void **)(v30 + 32), *(_QWORD *)(v30 + 40));
            v29 += *(_QWORD *)(v30 + 40);
            v31 = *(_QWORD **)(v30 + 8);
            v30 = (__int64)(v31 - 1);
            if ( v31 == v37 )
              v30 = 0LL;
            ++v28;
          }
          while ( v30 );
        }
      }
      if ( v28 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1133;
      }
      v13 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v25);
      WdLogGlobalForLineNumber = 1093;
    }
LABEL_57:
    v34 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v35 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v35);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 962;
  }
  return result;
}
