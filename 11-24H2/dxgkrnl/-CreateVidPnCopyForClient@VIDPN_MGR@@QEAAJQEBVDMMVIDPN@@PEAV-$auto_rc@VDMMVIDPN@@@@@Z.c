/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316CB4
 * Callers:
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x140261B20 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026B350 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x140041F1C (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x140316E98 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(VIDPN_MGR *this, struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rbx
  DMMVIDPN *v8; // rax
  DMMVIDPN *v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax
  unsigned int v12; // ebx

  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = VIDPN_MGR::GetContainingAdapter(this);
  WdLogGlobalForLineNumber = 1022;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1026;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1027;
  }
  if ( *a3 )
    ReferenceCounted::Release((ReferenceCounted *)(*a3 + 24));
  *a3 = 0LL;
  v8 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, 256LL);
  if ( v8 && (v9 = DMMVIDPN::DMMVIDPN(v8, a2), (v10 = (__int64)v9) != 0) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 9))((__int64)v9 + 72) )
    {
      if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1056;
      }
      if ( Set<DMMVIDPN>::Add() != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1063;
      }
      auto_rc<DMMVIDPN>::reset(a3, v10);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(7LL, v10, a2, *(int *)(v10 + 80));
      v12 = *(_DWORD *)(v10 + 80);
      WdLogGlobalForLineNumber = 1049;
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 24));
      return v12;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a2);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1041;
  }
  return result;
}
