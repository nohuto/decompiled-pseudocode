/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1403211F0
 * Callers:
 *     DxgkCreateHwQueueInternal @ 0x140321C88 (DxgkCreateHwQueueInternal.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14040373C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x140034AE8 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140053C88 (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x140321478 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403347DC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v5; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // esi
  DXGHWQUEUE *v14; // rax
  DXGHWQUEUE **v15; // rcx
  __int64 v16; // rdx

  v5 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 669;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDevice()->IsDeviceLockExclusiveOwner()",
      669LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 670;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      670LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 671;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"HwQueue != NULL", 671LL, 0LL, 0LL, 0LL, 0LL);
  }
  v12 = DXGQUOTAALLOCATOR<64,1265072196>::operator new(152LL, v9, v10, v11);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 16) = this;
    *(_OWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_QWORD *)(v12 + 40) = 0LL;
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v12 + 56) = 0LL;
    *(_QWORD *)(v12 + 64) = 0LL;
    *(_QWORD *)(v12 + 72) = 0LL;
    *(_QWORD *)(v12 + 80) = 0LL;
    *(_QWORD *)(v12 + 88) = 0LL;
    *(_QWORD *)(v12 + 96) = 0LL;
    *(_QWORD *)(v12 + 104) = 1LL;
    *(_BYTE *)(v12 + 112) = 0;
    *(_QWORD *)(v12 + 120) = 0LL;
    *(_QWORD *)(v12 + 128) = 0LL;
    *(_DWORD *)(v12 + 136) = 0;
    *(_BYTE *)(v12 + 140) = 0;
    *(_QWORD *)(v12 + 144) = 0LL;
    *a4 = (struct DXGHWQUEUE *)v12;
    v13 = DXGHWQUEUE::Initialize((DXGHWQUEUE *)v12, a2, a3);
    if ( v13 >= 0 )
    {
      v14 = *a4;
      v15 = (DXGHWQUEUE **)((char *)this + 400);
      v16 = *((_QWORD *)this + 50);
      if ( *(DXGCONTEXT **)(v16 + 8) != (DXGCONTEXT *)((char *)this + 400) )
        __fastfail(3u);
      *(_QWORD *)v14 = v16;
      *((_QWORD *)v14 + 1) = v15;
      *(_QWORD *)(v16 + 8) = v14;
      *v15 = v14;
      _InterlockedIncrement64((volatile signed __int64 *)this + 4);
      return 0LL;
    }
  }
  else
  {
    *a4 = 0LL;
    v13 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 683;
  }
  if ( *a4 )
  {
    DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGHWQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v13;
}
