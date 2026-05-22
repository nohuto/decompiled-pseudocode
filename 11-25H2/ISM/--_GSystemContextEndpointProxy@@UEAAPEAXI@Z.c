/*
 * XREFs of ??_GSystemContextEndpointProxy@@UEAAPEAXI@Z @ 0x18013E810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SystemContextEndpointProxy@@UEAA@XZ @ 0x18013E7E4 (--1SystemContextEndpointProxy@@UEAA@XZ.c)
 */

SystemContextEndpointProxy *__fastcall SystemContextEndpointProxy::`scalar deleting destructor'(
        SystemContextEndpointProxy *this,
        char a2)
{
  SystemContextEndpointProxy::~SystemContextEndpointProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
