/*
 * XREFs of ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403345B4
 * Callers:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x14001F210 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ??1HWQUEUERELEASEREFERENCE@@QEAA@XZ @ 0x1401D26CC (--1HWQUEUERELEASEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1402DD520 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x140332940 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x140334140 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403AE830 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403E0558 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x140034AE8 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1401D2FE4 (-DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403347DC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueue(DXGCONTEXT *this, struct DXGHWQUEUE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rcx
  struct DXGHWQUEUE *v7; // rcx
  struct DXGHWQUEUE **v8; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 734;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"HwQueue != NULL", 734LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 735;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDevice()->IsDeviceLockExclusiveOwner()",
      735LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 736;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      736LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 739;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"HwQueue != NULL", 739LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 209LL) )
    DXGCONTEXT::DestroyHwQueueOnHost(this, a2);
  DXGHWQUEUE::DestroyCoreState(a2, a3);
  v7 = *(struct DXGHWQUEUE **)a2;
  if ( *(struct DXGHWQUEUE **)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = (struct DXGHWQUEUE **)*((_QWORD *)a2 + 1), *v8 != a2) )
    __fastfail(3u);
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  DXGHWQUEUE::`scalar deleting destructor'(a2);
}
