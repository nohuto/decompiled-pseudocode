/*
 * XREFs of ??_ECAudioRenderEndpointChangeDelegator@@UEAAPEAXI@Z @ 0x1800B8490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioRenderEndpointChangeDelegator@@UEAA@XZ @ 0x1800B7450 (--1CAudioRenderEndpointChangeDelegator@@UEAA@XZ.c)
 */

CAudioRenderEndpointChangeDelegator *__fastcall CAudioRenderEndpointChangeDelegator::`vector deleting destructor'(
        CAudioRenderEndpointChangeDelegator *this,
        char a2)
{
  CAudioRenderEndpointChangeDelegator::~CAudioRenderEndpointChangeDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
