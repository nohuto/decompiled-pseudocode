/*
 * XREFs of ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x1802572EC
 * Callers:
 *     ?ClearCaches@CComposition@@IEBA_NXZ @ 0x1801CDED0 (-ClearCaches@CComposition@@IEBA_NXZ.c)
 * Callees:
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x180234688 (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x180237C3C (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CD3DDevice::ClearProtectedResources(CD3DDevice *this)
{
  bool v2; // bl
  CD2DResourceManager *v3; // rcx
  __int64 v4; // rcx
  char v5; // al
  bool v6; // cl

  v2 = 0;
  v3 = (CD2DResourceManager *)*((_QWORD *)this + 23);
  if ( v3 )
    v2 = CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(v3);
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v2 = 1;
  }
  v5 = CD3DResourceManager::MarkHardwareProtectedResourcesInvalid((CD3DDevice *)((char *)this + 1120));
  v6 = v2;
  if ( v5 )
    return 1;
  return v6;
}
