/*
 * XREFs of ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x180257C2C
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023598C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801D8C2C (-Trim@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::TrimAllDevices(CDeviceManager *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  CD3DDevice *v3; // rcx

  EnterCriticalSection(&CriticalSection);
  v1 = xmmword_180406B40;
  for ( i = qword_180406B38; i != v1; i += 16LL )
  {
    v3 = *(CD3DDevice **)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 1112LL) && *((_BYTE *)v3 + 1500) )
      CD3DDevice::Trim(v3);
  }
  LeaveCriticalSection(&CriticalSection);
}
