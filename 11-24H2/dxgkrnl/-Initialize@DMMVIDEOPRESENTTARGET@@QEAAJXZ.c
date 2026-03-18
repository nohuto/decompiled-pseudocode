/*
 * XREFs of ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x14025F22C
 * Callers:
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025ECE8 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x140267090 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v2; // rax
  struct DXGADAPTER *ContainingAdapter; // rax

  v2 = operator new(0xB0uLL, 0x4E506456u, 64LL);
  *((_QWORD *)this + 67) = v2;
  if ( !v2 )
  {
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 6), -1073741670LL);
    WdLogGlobalForLineNumber = 101;
    return 3221225626LL;
  }
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 67) + 168LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) = 0;
  KeInitializeTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL));
  KeInitializeDpc(
    (PRKDPC)(*((_QWORD *)this + 67) + 80LL),
    (PKDEFERRED_ROUTINE)DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc,
    *((PVOID *)this + 67));
  *(_QWORD *)(*((_QWORD *)this + 67) + 144LL) = IoAllocateWorkItem(g_pDriverObject);
  if ( !*(_QWORD *)(*((_QWORD *)this + 67) + 144LL) )
  {
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 6), -1073741670LL);
    WdLogGlobalForLineNumber = 121;
    return 3221225626LL;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL));
  _InterlockedIncrement64((volatile signed __int64 *)ContainingAdapter + 3);
  *(_QWORD *)(*((_QWORD *)this + 67) + 8LL) = this;
  **((_QWORD **)this + 67) = ContainingAdapter;
  return 0LL;
}
