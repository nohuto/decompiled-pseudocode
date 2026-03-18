/*
 * XREFs of ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1403DCB90
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x14006438C (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403DCC80 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

bool __fastcall DxgMonitor::EdidMonitorDescriptor::IsEotf2084Supported(DxgMonitor::EdidMonitorDescriptor *this)
{
  unsigned __int8 *v2; // [rsp+40h] [rbp+18h] BYREF
  __int64 v3; // [rsp+48h] [rbp+20h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  v3 = 0LL;
  if ( (int)EDID_V1_GetHDRCaps(0, v2, (struct DISPLAY_HDR_CAPS *)&v3) < 0 )
  {
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v2);
    return 0;
  }
  else
  {
    if ( v2 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    return BYTE2(v3);
  }
}
