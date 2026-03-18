/*
 * XREFs of ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18024C85C
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023EA98 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801CA98C (-Trim@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::TrimAllDevices(CDeviceManager *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  CD3DDevice *v3; // rcx

  EnterCriticalSection(&CriticalSection);
  v1 = xmmword_1803FAAF0;
  for ( i = qword_1803FAAE8; i != v1; i += 16LL )
  {
    v3 = *(CD3DDevice **)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 1112LL) && *((_BYTE *)v3 + 1500) )
      CD3DDevice::Trim(v3);
  }
  LeaveCriticalSection(&CriticalSection);
}
