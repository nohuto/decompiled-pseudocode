/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1403DFAEC
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBF58 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 result; // rax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 8619;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8625;
  }
  v6 = *((_QWORD *)a1 + 390);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 8630;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v3);
    if ( !TargetById )
    {
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 8664;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      v12 = -1071774971;
      goto LABEL_11;
    }
    v10 = *((_QWORD *)TargetById + 68);
    v11 = **a3;
    if ( v10 != v11 )
    {
      if ( v10 != *a3[1] )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 677;
        v12 = -1073741790;
LABEL_9:
        if ( v8 )
          ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
LABEL_11:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
        return v12;
      }
      *((_QWORD *)TargetById + 68) = v11;
    }
    v12 = 0;
    goto LABEL_9;
  }
  WdLogSingleEntry1(2LL, a1);
  result = 3223192373LL;
  WdLogGlobalForLineNumber = 8644;
  return result;
}
