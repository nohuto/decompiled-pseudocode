/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1801F6E74
 * Callers:
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1801F6DCC (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180246254 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180260D58 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

const void **__fastcall CProcessAttributionManager::CreateObserver(const void **this)
{
  const void **v2; // rax
  const void **v3; // rbx
  _BYTE *v4; // rdx
  __int64 *v5; // r15
  __int64 *i; // rsi
  __int64 v8; // r14
  char *v9; // rax
  char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  const void **v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = (const void **)DefaultHeap::AllocClear(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v2[1] = this;
  v15 = v2;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v4 = this[4];
  if ( v4 == this[5] )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      this + 3,
      v4,
      &v15);
    v3 = v15;
  }
  else
  {
    *(_QWORD *)v4 = v2;
    this[4] = (char *)this[4] + 8;
  }
  v5 = (__int64 *)this[1];
  for ( i = (__int64 *)*this; i != v5; ++i )
  {
    v8 = *i;
    ++*(_DWORD *)(*i + 160);
    v9 = (char *)operator new(0x70uLL);
    v10 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x70uLL);
    else
      v10 = 0LL;
    *(_QWORD *)v10 = *(_QWORD *)v8;
    v11 = *(_QWORD *)(v8 + 112);
    v15 = (const void **)v10;
    if ( v11 )
    {
      *(_OWORD *)(v10 + 8) = *(_OWORD *)(v11 + 24);
      v12 = *(_DWORD *)(v11 + 40);
    }
    else
    {
      *(_OWORD *)(v10 + 8) = *(_OWORD *)(v8 + 8);
      v12 = *(_DWORD *)(v8 + 24);
    }
    *((_DWORD *)v10 + 6) = v12;
    v13 = v3[3];
    if ( v13 == v3[4] )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v3 + 2,
        v13,
        &v15);
    }
    else
    {
      *(_QWORD *)v13 = v10;
      v3[3] = (char *)v3[3] + 8;
    }
  }
  return v3;
}
