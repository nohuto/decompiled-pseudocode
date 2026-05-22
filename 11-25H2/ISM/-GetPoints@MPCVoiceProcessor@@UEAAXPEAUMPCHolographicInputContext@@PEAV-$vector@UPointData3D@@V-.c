/*
 * XREFs of ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801B2280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180013D54 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$_Emplace_one_at_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800BB6F4 (--$_Emplace_one_at_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCVoiceProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v6; // rax
  __int64 v7; // xmm0_8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h]
  _OWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int128 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+B0h] [rbp-50h]
  __int128 v23; // [rsp+C0h] [rbp-40h]
  __int128 v24; // [rsp+D50h] [rbp+C50h] BYREF
  int v25; // [rsp+D60h] [rbp+C60h]
  int v26; // [rsp+D64h] [rbp+C64h]
  __int64 v27; // [rsp+D68h] [rbp+C68h]
  int v28; // [rsp+D70h] [rbp+C70h]
  __int128 v29; // [rsp+D74h] [rbp+C74h]
  __int64 v30; // [rsp+D84h] [rbp+C84h]
  __int16 v31; // [rsp+D9Ch] [rbp+C9Ch]
  __int128 v32; // [rsp+DA0h] [rbp+CA0h]
  __int128 v33; // [rsp+DB0h] [rbp+CB0h]
  __int128 v34; // [rsp+DC0h] [rbp+CC0h]
  __int128 v35; // [rsp+DD0h] [rbp+CD0h]
  __int128 v36; // [rsp+DE0h] [rbp+CE0h]
  __int128 v37; // [rsp+DF0h] [rbp+CF0h]

  if ( *(_BYTE *)(a1 + 3640) )
  {
    if ( *(_BYTE *)(a1 + 3548) )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      memcpy_0(v19, Instance, 0xCD0uLL);
      v18[0] = v20;
      v18[1] = v21;
      v18[2] = v22;
      v18[3] = v23;
      v6 = MPCHolographicInputManager::GetInstance();
      v7 = *((_QWORD *)v6 + 30);
      LODWORD(v6) = *((_DWORD *)v6 + 62);
      v14 = v7;
      v15 = (int)v6;
      Windows::Foundation::Numerics::transform((float *)&v16, (float *)&v14, (float *)v18);
      memset_0(&v24, 0, 0xB8uLL);
      v8 = *(_OWORD *)(a1 + 120);
      *(_QWORD *)&v24 = v16;
      v29 = 0LL;
      *((_QWORD *)&v24 + 1) = v17 | 0x300000000LL;
      v9 = *(_OWORD *)(a1 + 104);
      v33 = v8;
      v10 = *(_OWORD *)(a1 + 152);
      v25 = 7;
      v32 = v9;
      v11 = *(_OWORD *)(a1 + 136);
      v26 = 1;
      v35 = v10;
      v12 = *(_OWORD *)(a1 + 184);
      v27 = 0LL;
      v34 = v11;
      v13 = *(_OWORD *)(a1 + 168);
      v28 = 0;
      v31 = 0;
      v36 = v13;
      v30 = 0LL;
      v37 = v12;
      std::vector<PointData3D>::_Emplace_one_at_back<PointData3D const &>(a3, &v24);
      v26 = 0;
      std::vector<PointData3D>::_Emplace_one_at_back<PointData3D const &>(a3, &v24);
      *(_BYTE *)(a1 + 3640) = 0;
    }
  }
}
