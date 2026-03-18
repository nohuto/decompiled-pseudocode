/*
 * XREFs of ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404001D0
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1400645C0 (-EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x140096468 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140280488 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
        unsigned __int8 **a1,
        unsigned int a2,
        __int64 (__fastcall ****a3)(_QWORD, __int64))
{
  unsigned int ExtractedDisplayIdBlobSize; // ebp
  void *v7; // rax
  unsigned int v8; // edi
  unsigned __int8 *v9; // rdx
  int DisplayIdBlob; // eax
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rax
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]
  __int128 v16; // [rsp+2Ch] [rbp-2Ch]
  int v17; // [rsp+3Ch] [rbp-1Ch]
  void *v18; // [rsp+60h] [rbp+8h] BYREF

  ExtractedDisplayIdBlobSize = EDID_V1_GetExtractedDisplayIdBlobSize(a2, *a1);
  v7 = (void *)operator new[](ExtractedDisplayIdBlobSize, 0x4D677844u, 256LL);
  v18 = v7;
  if ( v7 )
  {
    v9 = *a1;
    v17 = 0;
    v14 = v7;
    v16 = 0LL;
    v15 = ExtractedDisplayIdBlobSize;
    DisplayIdBlob = EDID_V1_ExtractDisplayIdBlob(a2, v9, (struct DisplayIDObj *)&v14);
    v8 = DisplayIdBlob;
    if ( DisplayIdBlob >= 0 )
    {
      v11 = operator new(0x48uLL, 0x4D677844u, 256LL);
      if ( v11
        && (v12 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                               v11,
                                                               &v18,
                                                               v15)) != 0LL )
      {
        wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
          a3,
          v12);
        v8 = 0;
      }
      else
      {
        v8 = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 91;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, DisplayIdBlob);
      WdLogGlobalForLineNumber = 85;
    }
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v18);
  }
  else
  {
    v8 = -1073741801;
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 79;
  }
  return v8;
}
