/*
 * XREFs of ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x1800339A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x180033130 (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 */

ApplicationSpecificEndpointInfo *__fastcall ApplicationSpecificEndpointInfo::`scalar deleting destructor'(
        ApplicationSpecificEndpointInfo *this,
        char a2)
{
  ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
