/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x1801E742C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000D0B0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800E53C4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetSize(CVisual *this, double a2, double a3)
{
  float *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // r9d
  _QWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v3 = (float *)((char *)this + 140);
  if ( *((float *)this + 34) != *(float *)&a2 || *v3 != *(float *)&a3 )
  {
    *((_DWORD *)this + 34) = LODWORD(a2);
    *v3 = *(float *)&a3;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_DWORD *)this + 19) & 0x20000000) != 0 )
          {
            v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                   *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                   11LL);
            if ( v6 )
            {
              v7 = *((_QWORD *)this + 7);
              if ( v7 )
                v8 = *(_DWORD *)(v7 + 108);
              else
                v8 = 0;
              v11[0] = v8;
              v11[1] = *((unsigned int *)this + 18);
              v12 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
              v9 = CoreUICallSend(v6, v11, 2LL, 11LL, 2, &unk_180336EB2, 29, &v12, v8);
              v10 = 0;
              if ( v9 != -2018375675 )
                v10 = v9;
              if ( v10 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x125u, 0LL);
            }
          }
        }
      }
    }
    CResource::InvalidateAnimationSources(this, 29LL);
  }
}
