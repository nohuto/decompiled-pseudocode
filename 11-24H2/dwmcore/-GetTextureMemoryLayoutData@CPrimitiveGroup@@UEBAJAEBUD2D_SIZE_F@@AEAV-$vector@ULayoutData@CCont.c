/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1801711D8 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x180207C34 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRECT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1802A167C (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 */

__int64 __fastcall CPrimitiveGroup::GetTextureMemoryLayoutData(
        CPrimitiveGroupDrawListGenerator **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  int **ContentRegion; // rax
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm4
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __m128 v15; // [rsp+30h] [rbp-69h]
  __int128 v16; // [rsp+40h] [rbp-59h] BYREF
  __int128 v17; // [rsp+50h] [rbp-49h]
  unsigned __int64 v18; // [rsp+60h] [rbp-39h]
  _QWORD v19[2]; // [rsp+70h] [rbp-29h] BYREF
  int v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+84h] [rbp-15h]
  _BYTE v22[64]; // [rsp+90h] [rbp-9h] BYREF

  if ( *a3 != a3[1] )
    a3[1] = *a3;
  v5 = 0;
  v19[0] = v22;
  v19[1] = v22;
  v20 = 4;
  v21 = 4LL;
  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x200u, 0LL);
  }
  else
  {
    ContentRegion = (int **)CPrimitiveGroupDrawListGenerator::GetContentRegion(a1[16]);
    HIDWORD(v21) = 0;
    CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(ContentRegion, (__int64)v19);
    if ( HIDWORD(v21) )
    {
      do
      {
        v17 = 0LL;
        v18 = 0LL;
        v16 = 0LL;
        v15.m128_f32[0] = (float)*(int *)(v19[0] + 16LL * v5);
        v15.m128_f32[1] = (float)*(int *)(v19[0] + 16LL * v5 + 4);
        v15.m128_f32[2] = (float)*(int *)(v19[0] + 16LL * v5 + 8);
        v15.m128_f32[3] = (float)*(int *)(v19[0] + 16LL * v5 + 12);
        *((float *)&v17 + 2) = v15.m128_f32[0];
        v9 = _mm_shuffle_ps(v15, v15, 85);
        v10 = _mm_shuffle_ps(v15, v15, 170);
        v11 = _mm_shuffle_ps(v15, v15, 255);
        HIDWORD(v17) = v9.m128_i32[0];
        v18 = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
        if ( v15.m128_f32[0] == 0.0 && v9.m128_f32[0] == 0.0 )
          *(_QWORD *)&v17 = 0LL;
        else
          *(_QWORD *)&v17 = _mm_unpacklo_ps(v15, v9).m128_u64[0];
        v12 = a3[1];
        v16 = _xmm;
        if ( v12 == a3[2] )
        {
          std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
            a3,
            (_BYTE *)v12,
            (__int64)&v16);
        }
        else
        {
          v13 = v17;
          *(_OWORD *)v12 = _xmm;
          *(_OWORD *)(v12 + 16) = v13;
          *(_QWORD *)(v12 + 32) = _mm_unpacklo_ps(v10, v11).m128_u64[0];
          a3[1] += 40LL;
        }
        ++v5;
      }
      while ( v5 < HIDWORD(v21) );
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v19);
  return v7;
}
