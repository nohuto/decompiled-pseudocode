/*
 * XREFs of ??1InputSiteElementProxy@@UEAA@XZ @ 0x18003B44C
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18003B410 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18003B674 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSiteElementProxy::~InputSiteElementProxy(InputSiteElementProxy *this)
{
  InputSite *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  v2 = (InputSite *)*((_QWORD *)this + 42);
  if ( v2 )
    InputSite::RemoveAllObjectsForElement(v2, this);
  v3 = *((_QWORD *)this + 42);
  if ( v3 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl((InputSiteElementProxy *)((char *)this + 16));
}
