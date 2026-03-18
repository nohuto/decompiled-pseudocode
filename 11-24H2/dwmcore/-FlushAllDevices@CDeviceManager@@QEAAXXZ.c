/*
 * XREFs of ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x18020E45C
 * Callers:
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18020E400 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x18020E580 (-Flush@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::FlushAllDevices(CDeviceManager *this)
{
  CD3DDevice **v1; // rdi
  CD3DDevice **i; // rbx

  EnterCriticalSection(&CriticalSection);
  v1 = (CD3DDevice **)xmmword_1803FAAF0;
  for ( i = (CD3DDevice **)qword_1803FAAE8; i != v1; i += 2 )
  {
    if ( !*((_DWORD *)*i + 278) )
      CD3DDevice::Flush(*i);
  }
  LeaveCriticalSection(&CriticalSection);
}
