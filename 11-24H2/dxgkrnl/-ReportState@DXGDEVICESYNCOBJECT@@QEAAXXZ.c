/*
 * XREFs of ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402F79B4
 * Callers:
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1402F7914 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403D065C (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x1403EED04 (-ReportState@DXGHWQUEUE@@IEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::ReportState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v1; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v4; // rcx
  __int64 v5; // r9

  v1 = *((_QWORD *)this + 4);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v1 + 32));
  if ( bTracingEnabled )
  {
    if ( DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this) )
      DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        v4,
        &EventReportSyncObject,
        *((unsigned int *)this + 10),
        VidSchSyncObject,
        *((unsigned int *)this + 10),
        *((_QWORD *)this + 2),
        v5);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 32));
}
