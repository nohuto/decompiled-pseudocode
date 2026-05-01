/*
 * XREFs of ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18005CFD8
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18005CE40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18005D078 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180073978 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::ResourceSetFactory(
        struct ExecutionModel::ExternalResourceSet **a1)
{
  ExecutionModel::ExternalResourceSet *v2; // rax
  int v3; // ebx
  __int64 v5; // rax
  struct ExecutionModel::ExternalResourceSet *v6; // rdi
  int v7; // ebp

  v2 = (ExecutionModel::ExternalResourceSet *)operator new(0x550uLL);
  v3 = 0;
  if ( v2
    && (v5 = ExecutionModel::ExternalResourceSet::ExternalResourceSet(v2),
        (v6 = (struct ExecutionModel::ExternalResourceSet *)v5) != 0LL) )
  {
    v7 = TpAllocTimer(v5 + 1344, ExecutionModel::ExternalResourceSet::WatchdogTimerCallback, v5, 0LL);
    if ( v7 < 0 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v6 + 16LL))(v6);
      v3 = v7;
    }
    else
    {
      *a1 = v6;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  return v3 | 0x10000000u;
}
