/*
 * XREFs of ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1800C1DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$_Emplace_one_at_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800BB6F4 (--$_Emplace_one_at_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std.c)
 *     ?MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z @ 0x1800C243C (-MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z.c)
 */

__int64 __fastcall MPCHandProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  unsigned int v6; // edi
  __int128 v7; // xmm1
  unsigned int v8; // esi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // ecx
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // xmm0_8
  ISMTracing *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v29; // [rsp+20h] [rbp-89h] BYREF
  __int128 v30; // [rsp+30h] [rbp-79h]
  __int128 v31; // [rsp+40h] [rbp-69h]
  __m256i v32; // [rsp+50h] [rbp-59h]
  __int128 v33; // [rsp+70h] [rbp-39h]
  __int128 v34; // [rsp+80h] [rbp-29h]
  __int128 v35; // [rsp+90h] [rbp-19h]
  __int128 v36; // [rsp+A0h] [rbp-9h]
  __int128 v37; // [rsp+B0h] [rbp+7h]
  __int128 v38; // [rsp+C0h] [rbp+17h]
  __int64 v39; // [rsp+D0h] [rbp+27h]

  memset_0(&v29, 0, 0xB8uLL);
  v5 = *(_BYTE *)(a1 + 1740) == 0;
  v6 = *(_DWORD *)(a1 + 1596);
  v7 = *(_OWORD *)(a1 + 120);
  v8 = *(_DWORD *)(a1 + 1748);
  v33 = *(_OWORD *)(a1 + 104);
  v9 = *(_OWORD *)(a1 + 136);
  HIDWORD(v29) = v6;
  v34 = v7;
  v10 = *(_OWORD *)(a1 + 152);
  LODWORD(v30) = 6;
  v35 = v9;
  v11 = *(_OWORD *)(a1 + 168);
  DWORD1(v30) = v8;
  v36 = v10;
  v12 = *(_OWORD *)(a1 + 184);
  v37 = v11;
  v38 = v12;
  if ( v5 )
  {
    HIDWORD(v39) = 0;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 1732);
    v14 = 1;
    if ( v13 == 2 )
    {
      HIDWORD(v39) = 5;
    }
    else
    {
      if ( v13 == 1 )
        v14 = 3;
      HIDWORD(v39) = v14;
    }
    v15 = *(_QWORD *)(a1 + 9912);
    v32.m256i_i8[28] = *(_BYTE *)(a1 + 9896);
    v32.m256i_i8[30] = v32.m256i_i8[28];
    v16 = *(_DWORD *)(a1 + 9920);
    *((_QWORD *)&v30 + 1) = v15;
    v17 = *(_QWORD *)(a1 + 9900);
    LODWORD(v31) = v16;
    v32.m256i_i32[5] = *(_DWORD *)(a1 + 9908);
    *(__int64 *)((char *)&v32.m256i_i64[1] + 4) = v17;
  }
  if ( *(_DWORD *)(a1 + 9732) != v8 || *(_DWORD *)(a1 + 9724) != v6 )
  {
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHandProcessor_PointDataChanged_(v18, v6, v8);
    }
  }
  v19 = v30;
  *(_OWORD *)(a1 + 9712) = v29;
  v20 = v31;
  *(_OWORD *)(a1 + 9728) = v19;
  v21 = *(_OWORD *)v32.m256i_i8;
  *(_OWORD *)(a1 + 9744) = v20;
  v22 = *(_OWORD *)&v32.m256i_u64[2];
  *(_OWORD *)(a1 + 9760) = v21;
  v23 = v33;
  *(_OWORD *)(a1 + 9776) = v22;
  v24 = v34;
  *(_OWORD *)(a1 + 9792) = v23;
  *(_OWORD *)(a1 + 9808) = v24;
  *(_OWORD *)(a1 + 9824) = v35;
  v25 = v37;
  *(_OWORD *)(a1 + 9840) = v36;
  v26 = v38;
  v27 = v39;
  *(_OWORD *)(a1 + 9856) = v25;
  *(_OWORD *)(a1 + 9872) = v26;
  *(_QWORD *)(a1 + 9888) = v27;
  return std::vector<PointData3D>::_Emplace_one_at_back<PointData3D const &>(a3, &v29);
}
