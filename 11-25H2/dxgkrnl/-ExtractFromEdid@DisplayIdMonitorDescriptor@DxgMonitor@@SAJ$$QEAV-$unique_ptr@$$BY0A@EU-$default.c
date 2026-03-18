/*
 * XREFs of ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404078C0
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042CE30 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1400649A0 (-EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x140093EB4 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140278F98 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
        unsigned __int8 **a1,
        unsigned int a2,
        __int64 (__fastcall ****a3)(_QWORD, __int64))
{
  unsigned int ExtractedDisplayIdBlobSize; // ebp
  __int64 v7; // r9
  void *v8; // rax
  unsigned int v9; // edi
  unsigned __int8 *v10; // rdx
  int DisplayIdBlob; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rax
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+2Ch] [rbp-2Ch]
  int v19; // [rsp+34h] [rbp-24h]
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  ExtractedDisplayIdBlobSize = EDID_V1_GetExtractedDisplayIdBlobSize(a2, *a1);
  v8 = (void *)operator new[](ExtractedDisplayIdBlobSize, 0x4D677844u, 256LL, v7);
  v20 = v8;
  if ( v8 )
  {
    v10 = *a1;
    v18 = 0LL;
    v19 = 0;
    v16 = v8;
    v17 = ExtractedDisplayIdBlobSize;
    DisplayIdBlob = EDID_V1_ExtractDisplayIdBlob(a2, v10, (struct DisplayIDObj *)&v16);
    v9 = DisplayIdBlob;
    if ( DisplayIdBlob >= 0 )
    {
      v13 = operator new(0x40uLL, 0x4D677844u, 256LL, v12);
      if ( v13
        && (v14 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                               v13,
                                                               &v20,
                                                               v17)) != 0LL )
      {
        wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
          a3,
          v14);
        v9 = 0;
      }
      else
      {
        v9 = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 91;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, DisplayIdBlob);
      WdLogGlobalForLineNumber = 85;
    }
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v20);
  }
  else
  {
    v9 = -1073741801;
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 79;
  }
  return v9;
}
