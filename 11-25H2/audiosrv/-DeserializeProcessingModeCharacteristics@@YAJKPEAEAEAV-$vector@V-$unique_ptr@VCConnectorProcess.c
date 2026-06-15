/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x1800433F4
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004333C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@0@@Z @ 0x180041B98 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$defaul.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800437C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800439E0 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAPEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18015D648 (--$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@-$vector@V-$unique_ptr@VCCo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, __int64 a3, const char *a4)
{
  unsigned int v5; // r12d
  _DWORD *v6; // rax
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  unsigned int v9; // r13d
  _DWORD *v10; // r14
  __int128 v11; // xmm6
  _QWORD *v12; // rax
  CConnectorProcessingModeCharacteristics **v13; // r15
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 result; // rax
  _DWORD *v18; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  _QWORD *v23; // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    v20 = 0LL;
    v5 = 0;
    v21 = 0LL;
    if ( a1 < 8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)0x80070490LL);
      if ( (_QWORD)v20 )
      {
        std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
          v20,
          *((__int64 *)&v20 + 1));
        std::_Deallocate<16,0>((char *)v20, (const struct std::nothrow_t *)((v21 - v20) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      result = 2147943568LL;
    }
    else
    {
      v6 = a2;
      if ( *a2 == 10 )
      {
        v7 = a1 - 8;
        v8 = a2 + 2;
        v9 = 0;
LABEL_5:
        if ( v9 >= v6[1] )
        {
          if ( (__int128 *)a3 != &v20 )
          {
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(a3);
            *(_OWORD *)a3 = v20;
            *(_QWORD *)(a3 + 16) = v21;
            *(_QWORD *)&v20 = 0LL;
            v21 = 0LL;
            *((_QWORD *)&v20 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
          }
          if ( (_QWORD)v20 )
          {
            std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
              v20,
              *((__int64 *)&v20 + 1));
            std::_Deallocate<16,0>((char *)v20, (const struct std::nothrow_t *)((v21 - v20) & 0xFFFFFFFFFFFFFFF8uLL));
          }
          result = 0LL;
        }
        else
        {
          v10 = v8;
          v18 = v8;
          if ( v7 < 0x14 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBB,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)0x80070490LL);
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
            result = 2147943568LL;
          }
          else
          {
            v11 = *(_OWORD *)v8;
            v12 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            v23 = v12;
            if ( v12 )
            {
              *(_OWORD *)v12 = v11;
              v12[2] = 0LL;
              v12[3] = 0LL;
              v12[4] = 0LL;
              v12[5] = 0LL;
              v12[6] = 0LL;
              v12[7] = 0LL;
            }
            else
            {
              v12 = 0LL;
            }
            v23 = v12;
            if ( *((_QWORD *)&v20 + 1) == v21 )
            {
              v13 = (CConnectorProcessingModeCharacteristics **)std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<CConnectorProcessingModeCharacteristics *>(
                                                                  &v20,
                                                                  *((_QWORD *)&v20 + 1),
                                                                  &v23);
            }
            else
            {
              **((_QWORD **)&v20 + 1) = v12;
              v13 = (CConnectorProcessingModeCharacteristics **)*((_QWORD *)&v20 + 1);
              *((_QWORD *)&v20 + 1) += 8LL;
            }
            if ( *v13 )
            {
              v7 -= 20;
              v8 += 5;
              while ( 1 )
              {
                if ( v5 >= v10[4] )
                {
                  ++v9;
                  v6 = a2;
                  v5 = 0;
                  goto LABEL_5;
                }
                if ( v7 < 0x26 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xC7,
                    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                    (const char *)0x80070490LL);
                  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
                  return 2147943568LL;
                }
                if ( v7 < (unsigned __int64)*((unsigned __int16 *)v8 + 18) + 38 )
                  break;
                v14 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                        *v13,
                        (const struct tWAVEFORMATEX *)(v8 + 5),
                        v8[1],
                        *v8,
                        v8[2],
                        v8[3],
                        v8[4]);
                v15 = v14;
                if ( v14 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xCD,
                    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                    (const char *)(unsigned int)v14);
                  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
                  return v15;
                }
                v16 = *((unsigned __int16 *)v8 + 18);
                v7 += -38 - v16;
                v8 = (_DWORD *)((char *)v8 + v16 + 38);
                ++v5;
                v10 = v18;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xCB,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)0x80070490LL);
              std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
              result = 2147943568LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xBF,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)0x8007000ELL);
              std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
              result = 2147942414LL;
            }
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB0,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)0x80070490LL);
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
        result = 2147943568LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD9,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                           a4);
  }
  return result;
}
