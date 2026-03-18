/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1402E9C18
 * Callers:
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x14026C858 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     ?MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1402E9B94 (-MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005F4BC (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1402EA0CC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EA554 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        MONITOR_MGR *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        unsigned int a4)
{
  unsigned int v5; // edx
  int NextVideoPresentTarget; // ebx
  __int64 v7; // rax
  bool v8; // r15
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r14
  VIDPN_MGR *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned __int8 IsTargetForceable; // r13
  char *v20; // rbx
  char *v21; // rdi
  __int64 v22; // r14
  MONITOR_MGR *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  int v30; // [rsp+28h] [rbp-49h]
  int v31; // [rsp+30h] [rbp-41h]
  __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  char v33[8]; // [rsp+60h] [rbp-11h] BYREF
  void *v34; // [rsp+68h] [rbp-9h] BYREF
  char *v35; // [rsp+70h] [rbp-1h]
  void *v36; // [rsp+78h] [rbp+7h] BYREF
  char *v37; // [rsp+80h] [rbp+Fh]
  void *retaddr; // [rsp+D0h] [rbp+5Fh]
  unsigned int v39; // [rsp+D8h] [rbp+67h]
  unsigned int i; // [rsp+F0h] [rbp+7Fh] BYREF

  i = a4;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4597;
  }
  v5 = -1;
  for ( i = -1; ; v5 = i )
  {
    NextVideoPresentTarget = DmmGetNextVideoPresentTarget(*(void *const *)(*((_QWORD *)this + 3) + 16LL), v5, &i);
    if ( NextVideoPresentTarget < 0 )
      return (unsigned int)NextVideoPresentTarget;
    v7 = *((_QWORD *)this + 3);
    v8 = 0;
    v9 = i;
    v39 = 0;
    v10 = *(_QWORD *)(v7 + 16);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 7078;
LABEL_36:
      NextVideoPresentTarget = -1071775742;
LABEL_19:
      WdLogSingleEntry3(2LL, i, this, NextVideoPresentTarget);
      WdLogGlobalForLineNumber = 4626;
      return (unsigned int)NextVideoPresentTarget;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v7 + 16)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7084;
    }
    v11 = *(_QWORD *)(v10 + 3120);
    if ( !v11 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 7089;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_36;
    }
    v12 = *(VIDPN_MGR **)(v11 + 104);
    if ( !v12 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 7103;
      NextVideoPresentTarget = -1071774923;
      goto LABEL_19;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, (__int64)v12);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v12 + 15) + 72LL));
    v13 = *((_QWORD *)v12 + 15);
    v14 = *(_QWORD *)(v13 + 24);
    if ( v14 == v13 + 24 || (v15 = v14 - 8) == 0 )
    {
LABEL_16:
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v12);
      WdLogSingleEntry2(3LL, v9, ContainingAdapter);
      WdLogGlobalForLineNumber = 7127;
      if ( v13 )
        ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v32 + 40));
      NextVideoPresentTarget = -1071774971;
      goto LABEL_19;
    }
    while ( *(_DWORD *)(v15 + 24) != (_DWORD)v9 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      v15 = v16 - 8;
      if ( v16 == v13 + 24 )
        v15 = 0LL;
      if ( !v15 )
        goto LABEL_16;
    }
    IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v15);
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v32 + 40));
    v20 = 0LL;
    v34 = retaddr;
    v21 = 0LL;
    v35 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
    v22 = i;
    if ( i == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2703;
    }
    v36 = retaddr;
    v37 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v33, (__int64)this);
    v23 = (MONITOR_MGR *)*((_QWORD *)this + 5);
    if ( v23 != (MONITOR_MGR *)((char *)this + 40) )
    {
LABEL_26:
      v20 = (char *)v23 - 152;
      if ( !v23 )
        v20 = 0LL;
    }
    while ( 1 )
    {
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
      v37 = v20;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
      if ( !v20 )
        break;
      if ( *((_DWORD *)v20 + 45) == (_DWORD)v22 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
        v35 = v20;
        v21 = v20;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
        v27 = 0;
        goto LABEL_31;
      }
      v23 = (MONITOR_MGR *)*((_QWORD *)v20 + 19);
      if ( v23 != (MONITOR_MGR *)((char *)this + 40) )
        goto LABEL_26;
      v20 = 0LL;
    }
    v29 = WdLogNewEntry5_WdTrace(0LL, v24, v25, v26);
    v27 = -1073741275;
    *(_QWORD *)(v29 + 24) = v22;
    *(_QWORD *)(v29 + 32) = this;
    WdLogGlobalForLineNumber = 2734;
LABEL_31:
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v33);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    if ( v27 >= 0 )
      break;
LABEL_32:
    LOBYTE(v31) = v8;
    LOBYTE(v30) = IsTargetForceable;
    v28 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
            a3,
            i,
            v39,
            v30,
            v31);
    NextVideoPresentTarget = v28;
    if ( i == -1 || v28 < 0 )
      goto LABEL_46;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  }
  if ( !v21 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4650;
  }
  v39 = *((_DWORD *)v21 + 70);
  NextVideoPresentTarget = MONITOR_MGR::_GetMonitorInstance(this, i, 1, (struct MONITOR_REF_ACCESSOR *)&v34);
  if ( (int)(NextVideoPresentTarget + 0x80000000) < 0 || NextVideoPresentTarget == -1073741275 )
  {
    v8 = NextVideoPresentTarget >= 0;
    goto LABEL_32;
  }
  WdLogSingleEntry2(2LL, i, this);
  WdLogGlobalForLineNumber = 4671;
LABEL_46:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  return (unsigned int)NextVideoPresentTarget;
}
