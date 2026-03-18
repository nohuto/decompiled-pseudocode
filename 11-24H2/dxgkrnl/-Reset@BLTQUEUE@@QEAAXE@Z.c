/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140282CF8
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EBD0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019AB14 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14028F8B0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x140281EF4 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x14043016C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  const char *v6; // rdx
  _BYTE v7[160]; // [rsp+30h] [rbp-B8h] BYREF

  if ( *((_QWORD *)this + 89) )
  {
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 2u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
    }
    else
    {
      *((_BYTE *)this + 657) = 1;
    }
    BLTQUEUE::IssueCommand(this);
    v5 = *((_QWORD *)this + 47);
    if ( v5 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v7, v5, 0, v4, 0);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 16LL)) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v6);
      BLTQUEUE::DestroyStagingBuffer(this);
      *((_QWORD *)this + 47) = 0LL;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v7);
    }
    if ( !a2 )
      *((_DWORD *)this + 269) = 0;
  }
}
