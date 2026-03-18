/*
 * XREFs of ?GetDisplaySurface@CDDisplaySwapChainBuffer@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180208240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CDDisplaySwapChainBuffer::GetDisplaySurface(
        CDDisplaySwapChainBuffer *this,
        unsigned int *a2)
{
  if ( a2 )
    *a2 = 0;
  return (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 25);
}
