/*
 * XREFs of ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801AF420
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEC44 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801AF4A8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x1801AF4C8 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Update(struct CManipulationFrame *this)
{
  unsigned int i; // edx
  __int64 v3; // rcx
  char v4; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 4) && (*((_DWORD *)this + 62 * i + 95) & 0x10004) == 4; ++i )
    ;
  if ( CManipulationFrame::IsMousewheelFrame(this) )
    CPointerDeviceCache::s_rcMouseRegion = *(struct tagRECT *)((char *)this + 584);
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 48);
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
      v3,
      &v6);
  }
  return CPointerDeviceCache::Query(*((char **)this + 48));
}
