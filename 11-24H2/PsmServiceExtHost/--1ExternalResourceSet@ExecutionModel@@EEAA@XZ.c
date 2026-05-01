/*
 * XREFs of ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x180069AF8
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180069AC0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::~ExternalResourceSet(
        ExecutionModel::ExternalResourceSet *this,
        __int64 a2)
{
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  v3 = (char *)*((_QWORD *)this + 167);
  if ( v3 )
    RmpObjectRelease(v3, a2);
  v4 = *((_QWORD *)this + 168);
  if ( v4 )
    TpReleaseTimer(v4);
  v5 = (__int64 **)((char *)this + 1312);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v7 = (__int64 *)v6[1];
    v8 = *v6;
    *v7 = *v6;
    *(_QWORD *)(v8 + 8) = v7;
    operator delete(v6);
  }
  *((_QWORD *)this + 166) = 0LL;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)this + 40);
}
