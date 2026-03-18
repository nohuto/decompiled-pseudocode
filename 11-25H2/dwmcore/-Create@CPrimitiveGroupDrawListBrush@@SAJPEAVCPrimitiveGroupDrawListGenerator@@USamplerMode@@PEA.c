/*
 * XREFs of ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x180045780
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180044810 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180045858 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x180045900 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::Create(
        struct CPrimitiveGroupDrawListBrush *a1,
        __int16 *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  CObjectCache *ObjectCache; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  __int16 v10; // bp
  char v11; // r15

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = CObjectCache::Alloc(ObjectCache, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a2;
    v11 = *((_BYTE *)a2 + 2);
    v8[2] = 1065353216;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 1065353216;
    v8[6] = 0;
    v8[7] = 0;
    *((_BYTE *)v8 + 52) = 0;
    *((_BYTE *)v8 + 64) = 0;
    *(_QWORD *)v8 = &CPrimitiveGroupDrawListBrush::`vftable';
    *((_QWORD *)v8 + 9) = a1;
    if ( a1 )
      (**(void (__fastcall ***)(struct CPrimitiveGroupDrawListBrush *))a1)(a1);
    *((_WORD *)v9 + 40) = v10;
    *((_BYTE *)v9 + 82) = v11;
    *a3 = v9;
  }
  else
  {
    *a3 = 0LL;
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  return v6;
}
