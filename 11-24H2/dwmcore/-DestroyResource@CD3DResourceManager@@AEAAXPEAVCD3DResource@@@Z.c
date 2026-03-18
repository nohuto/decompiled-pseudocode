/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1801CAA00
 * Callers:
 *     ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CA788 (-DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18022BEEC (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1802C9070 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IsValid@CD3DResource@@UEBAJXZ @ 0x1801CACD0 (-IsValid@CD3DResource@@UEBAJXZ.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1801CACE8 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x1801CAD40 (-ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1801CAD50 (-ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802BC49C (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  __int64 (__fastcall *v4)(CD3DResource *__hidden); // rax
  int IsValid; // eax
  void (__fastcall *v6)(CD3DConstantBuffer *__hidden); // rax
  struct CD3DResource **v7; // rdx
  struct CD3DResource **v8; // rcx
  __int64 (__fastcall *v9)(struct CMILPoolResource *); // rax

  ((void (__fastcall *)(struct CD3DResource ***))(*a2)[1])(a2);
  v4 = (__int64 (__fastcall *)(CD3DResource *__hidden))(*a2)[3];
  if ( v4 == CD3DResource::IsValid )
    IsValid = CD3DResource::IsValid((CD3DResource *)a2);
  else
    IsValid = v4((CD3DResource *)a2);
  if ( IsValid >= 0 )
    CD3DResource::Invalidate((CD3DResource *)a2);
  if ( *((_BYTE *)a2 + 116) )
  {
    if ( *((_BYTE *)a2 + 117) )
      CD2DContext::RemoveHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
    --*((_DWORD *)this + 18);
  }
  v6 = (void (__fastcall *)(CD3DConstantBuffer *__hidden))(*a2)[14];
  if ( v6 == CD3DConstantBuffer::ReleaseD3DResources )
  {
    CD3DConstantBuffer::ReleaseD3DResources((CD3DConstantBuffer *)a2);
  }
  else if ( v6 == CD3DPixelShader::ReleaseD3DResources )
  {
    CD3DPixelShader::ReleaseD3DResources((CD3DPixelShader *)a2);
  }
  else
  {
    v6((CD3DConstantBuffer *)a2);
  }
  a2[5] = 0LL;
  v7 = a2[12];
  if ( v7[1] != (struct CD3DResource *)(a2 + 12) || (v8 = a2[13], *v8 != (struct CD3DResource *)(a2 + 12)) )
    __fastfail(3u);
  *v8 = (struct CD3DResource *)v7;
  v7[1] = (struct CD3DResource *)v8;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 28);
  v9 = (__int64 (__fastcall *)(struct CMILPoolResource *))(*a2)[2];
  if ( v9 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((struct CMILPoolResource *)a2);
  else
    v9((struct CMILPoolResource *)a2);
}
