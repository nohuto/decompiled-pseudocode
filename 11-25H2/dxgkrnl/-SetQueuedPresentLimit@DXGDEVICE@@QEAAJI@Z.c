/*
 * XREFs of ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1403E7F6C
 * Callers:
 *     DxgkSetQueuedLimit @ 0x140297C10 (DxgkSetQueuedLimit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1403E7FEC (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetQueuedPresentLimit(DXGDEVICE *this, unsigned int a2)
{
  int v4; // edi
  __int64 v5; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 168LL))(*((_QWORD *)this + 100));
  if ( v4 >= 0 )
  {
    v5 = *((_QWORD *)this + 235);
    if ( v5 )
    {
      if ( v5 != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
        ADAPTER_DISPLAY::SetQueuedPresentLimit(*(ADAPTER_DISPLAY **)(v5 + 3120), this, a2);
    }
  }
  return (unsigned int)v4;
}
