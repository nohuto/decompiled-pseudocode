/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801E0DA0
 * Callers:
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x180269434 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802697E0 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801C7820 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  CD3DResource *v2; // rcx
  CD3DDevice *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rbp
  _QWORD *i; // rdi
  struct CMILPoolResource *v8; // rcx

  v2 = (CD3DResource *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(v2, this);
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 120);
      if ( v5 )
      {
        v6 = (_QWORD *)*((_QWORD *)this + 6);
        for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v6; ++i )
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 8LL))(*i, v5);
      }
    }
    v8 = (struct CMILPoolResource *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v8 )
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v8);
  }
  v3 = (CD3DDevice *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    CD3DDevice::Release(v3);
}
