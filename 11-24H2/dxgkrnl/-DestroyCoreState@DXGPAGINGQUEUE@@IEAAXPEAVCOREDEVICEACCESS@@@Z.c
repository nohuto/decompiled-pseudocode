/*
 * XREFs of ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE154
 * Callers:
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CDF70 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x140396C98 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1401868A0 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402CE5A0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGPAGINGQUEUE::DestroyCoreState(DXGPAGINGQUEUE *this, struct COREDEVICEACCESS *a2)
{
  __int64 v3; // rdx
  DXGDEVICESYNCOBJECT *v4; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 67;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDevice()->GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      67LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 72) )
  {
    v3 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 72) = 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                     + 848LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 792LL));
      *((_QWORD *)this + 4) = 0LL;
    }
    v4 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
    if ( v4 )
    {
      if ( *((_QWORD *)this + 7) )
      {
        DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(v4, *((_DWORD *)this + 12));
        *((_QWORD *)this + 7) = 0LL;
      }
      DXGDEVICESYNCOBJECT::DestroyCoreState(*((DXGDEVICESYNCOBJECT **)this + 5));
    }
  }
}
