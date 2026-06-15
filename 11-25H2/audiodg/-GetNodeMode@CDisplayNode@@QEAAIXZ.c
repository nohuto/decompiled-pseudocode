/*
 * XREFs of ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x14006A920
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006AF1C (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14005B565 (memcmp_0.c)
 */

__int64 __fastcall CDisplayNode::GetNodeMode(CDisplayNode *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int128 Buf2; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 2;
  if ( *(_DWORD *)(v1 + 40) == 2 )
  {
    v3 = *(_QWORD *)(v1 + 32);
    v4 = *(_QWORD *)(v3 + 24);
    v5 = *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 - v4;
    if ( *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 == v4 )
      v5 = *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4
         - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
    if ( v5 )
    {
      v6 = *(_QWORD *)(v3 + 24);
      v7 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 - v6;
      if ( *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 == v6 )
        v7 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
           - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v3 + 24);
        v9 = *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 - v8;
        if ( *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 == v8 )
          v9 = *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4
             - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
        if ( v9 )
        {
          v10 = *(_QWORD *)(v3 + 24);
          v11 = *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 - v10;
          if ( *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 == v10 )
            v11 = *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4
                - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
          if ( v11 )
          {
            v12 = *(_QWORD *)(v3 + 24);
            v13 = *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 - v12;
            if ( *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 == v12 )
              v13 = *(_QWORD *)GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data4
                  - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
            if ( v13 )
            {
              v14 = *(_QWORD *)(v3 + 24);
              v15 = *(_QWORD *)&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data1 - v14;
              if ( *(_QWORD *)&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data1 == v14 )
                v15 = *(_QWORD *)GUID_461d14af_a88e_4be1_a809_d8bfd44b0121.Data4
                    - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
              if ( v15 )
              {
                v16 = *(_QWORD *)(v3 + 24);
                v17 = *(_QWORD *)&GUID_9cf2a70b_f377_403b_bd6b_360863e0355c.Data1 - v16;
                if ( *(_QWORD *)&GUID_9cf2a70b_f377_403b_bd6b_360863e0355c.Data1 == v16 )
                  v17 = *(_QWORD *)GUID_9cf2a70b_f377_403b_bd6b_360863e0355c.Data4
                      - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
                if ( v17 )
                {
                  v18 = *(_QWORD *)(v3 + 24);
                  v19 = *(_QWORD *)&GUID_4780004e_7133_41d8_8c74_660dadd2c0ee.Data1 - v18;
                  if ( *(_QWORD *)&GUID_4780004e_7133_41d8_8c74_660dadd2c0ee.Data1 == v18 )
                    v19 = *(_QWORD *)GUID_4780004e_7133_41d8_8c74_660dadd2c0ee.Data4
                        - _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
                  if ( v19 )
                  {
                    Buf2 = *(_OWORD *)(v3 + 24);
                    return memcmp_0(&GUID_b26feb0d_ec94_477c_9494_d1ab8e753f6e, &Buf2, 0x10uLL) == 0 ? 8 : 0;
                  }
                  else
                  {
                    return 7;
                  }
                }
                else
                {
                  return 6;
                }
              }
              else
              {
                return 9;
              }
            }
            else
            {
              return 5;
            }
          }
          else
          {
            return 4;
          }
        }
        else
        {
          return 3;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
