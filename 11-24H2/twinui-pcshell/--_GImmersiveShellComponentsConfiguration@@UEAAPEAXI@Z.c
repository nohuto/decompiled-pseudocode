/*
 * XREFs of ??_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z @ 0x1803EBBB0
 * Callers:
 *     ??_E?$heap_implements@UImmersiveShellComponentsConfiguration@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1803EBBA0 (--_E-$heap_implements@UImmersiveShellComponentsConfiguration@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803DFFB8 (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 */

ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::`scalar deleting destructor'(
        ImmersiveShellComponentsConfiguration *this,
        char a2)
{
  ImmersiveShellComponentsConfiguration::~ImmersiveShellComponentsConfiguration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
