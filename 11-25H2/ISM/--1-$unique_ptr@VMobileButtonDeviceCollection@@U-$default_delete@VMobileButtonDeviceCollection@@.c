/*
 * XREFs of ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180098FA8
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18004CA70 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004D264 (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004D50C (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004DF94 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D28A8 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D6EA8 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D8020 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D989C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA080 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DB200 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 *     _GazeDeviceCollection::Create_::_1_::dtor$0 @ 0x1801CAD78 (_GazeDeviceCollection--Create_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::Create_::_1_::dtor$0 @ 0x1801CAD9C (_DockableDeviceCollection--Create_--_1_--dtor$0.c)
 *     _PenDeviceCollection::Create_::_1_::dtor$0 @ 0x1801CAF07 (_PenDeviceCollection--Create_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::Create_::_1_::dtor$0 @ 0x1801CE1FF (_SpatialRimDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x180098FC8 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SpatialRimDeviceCollection>::operator()(a1, *a1);
  return result;
}
