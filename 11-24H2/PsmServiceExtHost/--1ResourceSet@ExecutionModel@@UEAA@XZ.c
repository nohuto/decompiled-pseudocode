/*
 * XREFs of ??1ResourceSet@ExecutionModel@@UEAA@XZ @ 0x1800608F8
 * Callers:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x1800608C0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceSet::~ResourceSet(ExecutionModel::ResourceSet *this, __int64 a2)
{
  char *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  v3 = (char *)*((_QWORD *)this + 165);
  if ( v3 )
    RmpObjectRelease(v3, a2);
  v4 = *((_QWORD *)this + 214);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)this + 40);
}
