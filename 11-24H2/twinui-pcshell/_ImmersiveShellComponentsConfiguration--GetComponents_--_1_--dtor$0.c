/*
 * XREFs of _ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor$0 @ 0x1806E726A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAA@XZ @ 0x1803DFF28 (--1-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo@.c)
 */

void __fastcall ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::~vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(*(_QWORD *)(a2 + 112));
  }
}
