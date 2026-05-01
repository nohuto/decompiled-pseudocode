/*
 * XREFs of ??_GRdpShellExtensionHost@@UEAAPEAXI@Z @ 0x180673ABC
 * Callers:
 *     ??_ERdpShellExtensionHost@@WCA@EAAPEAXI@Z @ 0x180673A70 (--_ERdpShellExtensionHost@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RdpShellExtensionHost@@UEAA@XZ @ 0x1806737D8 (--1RdpShellExtensionHost@@UEAA@XZ.c)
 */

RdpShellExtensionHost *__fastcall RdpShellExtensionHost::`scalar deleting destructor'(
        RdpShellExtensionHost *this,
        char a2)
{
  RdpShellExtensionHost::~RdpShellExtensionHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
