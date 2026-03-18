/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x140348530
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14004A8C8 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v6; // r12
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  int *v13; // rbx
  bool v14; // zf
  __int64 v15; // r9
  int *v16; // rbx
  _QWORD *v17; // rax
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v21; // r9
  struct _KTHREAD **v22; // [rsp+50h] [rbp-10h] BYREF
  char v23; // [rsp+58h] [rbp-8h]

  v6 = a1;
  v23 = 0;
  v9 = 0;
  v22 = (struct _KTHREAD **)((char *)a5 + 472);
  if ( a5 == (struct ADAPTER_DISPLAY *)-472LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v22[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
  v10 = *((_QWORD *)a5 + 16);
  v11 = 3984 * v6;
  v12 = *(_BYTE *)(3984 * v6 + v10 + 704);
  if ( !a2 )
  {
    if ( !v12 )
      goto LABEL_7;
    *(_DWORD *)(v11 + v10 + 708) = 0;
    *(_DWORD *)(v11 + *((_QWORD *)a5 + 16) + 712) = 0;
    *(_BYTE *)(v11 + *((_QWORD *)a5 + 16) + 704) = 0;
    goto LABEL_26;
  }
  if ( !v12 || *(_DWORD *)(v11 + v10 + 708) != a3 || *(_DWORD *)(v11 + v10 + 712) != a4 )
  {
    *(_DWORD *)(v11 + v10 + 708) = a3;
    *(_DWORD *)(v11 + *((_QWORD *)a5 + 16) + 712) = a4;
    *(_BYTE *)(v11 + *((_QWORD *)a5 + 16) + 704) = a2;
LABEL_26:
    v9 = 1;
  }
LABEL_7:
  if ( !v23 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v22, 0LL, 0LL);
    WdLogGlobalForLineNumber = 695;
  }
  v13 = (int *)v22;
  v23 = 0;
  if ( v22[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v22, 0LL, 0LL);
    WdLogGlobalForLineNumber = 570;
  }
  if ( v13[8] <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 573;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = v13[8]-- == 1;
  if ( v14 )
  {
    *((_QWORD *)v13 + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v17 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 256LL, v15);
    v18 = v17;
    if ( v17 )
    {
      v17[1] = 0LL;
      v17[2] = 0LL;
      *v17 = 0LL;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v17, *((struct DXGADAPTER **)a5 + 2));
      v18[4] = v6;
      Current = DXGPROCESS::GetCurrent(v19);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
        (void (*)(void *))lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v18,
        v21);
    }
  }
  if ( v23 )
  {
    v16 = (int *)v22;
    v23 = 0;
    if ( v22[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v22, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v16[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    v14 = v16[8]-- == 1;
    if ( v14 )
    {
      *((_QWORD *)v16 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v16 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
