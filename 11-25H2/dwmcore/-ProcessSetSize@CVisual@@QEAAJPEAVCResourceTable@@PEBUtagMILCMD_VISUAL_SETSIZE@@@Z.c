/*
 * XREFs of ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1800E4CB8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800E53C4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSIZE *a3)
{
  __m128 v4; // xmm6
  float *v5; // rax
  __m128 v6; // xmm7
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // r9d
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  struct CResourceTable *v15; // [rsp+88h] [rbp+10h] BYREF

  v15 = a2;
  v4 = (__m128)*((unsigned int *)a3 + 3);
  v5 = (float *)((char *)this + 140);
  v6 = (__m128)*((unsigned int *)a3 + 2);
  if ( *((float *)this + 34) != v6.m128_f32[0] || *v5 != v4.m128_f32[0] )
  {
    *((_DWORD *)this + 34) = v6.m128_i32[0];
    *v5 = v4.m128_f32[0];
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_DWORD *)this + 19) & 0x20000000) != 0 )
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                   *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                   11LL);
            if ( v9 )
            {
              v10 = *((_QWORD *)this + 7);
              if ( v10 )
                v11 = *(_DWORD *)(v10 + 108);
              else
                v11 = 0;
              v14[0] = v11;
              v14[1] = *((unsigned int *)this + 18);
              v15 = (struct CResourceTable *)_mm_unpacklo_ps(v6, v4).m128_u64[0];
              v12 = CoreUICallSend(v9, v14, 2LL, 11LL, 2, &unk_180336EB2, 29, &v15, v11);
              v13 = 0;
              if ( v12 != -2018375675 )
                v13 = v12;
              if ( v13 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x125u, 0LL);
            }
          }
        }
      }
    }
    CResource::InvalidateAnimationSources(this, 0x1Du);
  }
  return 0LL;
}
