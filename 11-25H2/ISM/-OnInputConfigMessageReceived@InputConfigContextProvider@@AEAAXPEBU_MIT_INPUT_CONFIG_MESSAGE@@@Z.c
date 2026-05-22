/*
 * XREFs of ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18000B874
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x180094BB0 (std--_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAG.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000B724 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000B81C (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18000BA1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x180054E14 (--$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall InputConfigContextProvider::OnInputConfigMessageReceived(
        InputConfigContextProvider *this,
        const struct _MIT_INPUT_CONFIG_MESSAGE *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  char *v5; // r14
  __int64 v6; // rsi
  __m128i v7; // xmm2
  char *v8; // xmm1_8
  unsigned __int64 v9; // xmm0_8
  __m128i *v10; // rdx
  __m128i v11; // [rsp+20h] [rbp-40h]
  __m128i v12; // [rsp+38h] [rbp-28h] BYREF
  char *v13; // [rsp+48h] [rbp-18h]

  v3 = *(unsigned int *)a2;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v3, (InputConfigContextProvider *)((char *)this + 256));
      v4 = (_QWORD *)((char *)this + 232);
      if ( (char *)this + 256 != (char *)this + 232 )
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)this + 32);
        *((_QWORD *)this + 32) = *v4;
        *((_QWORD *)this + 33) = *((_QWORD *)this + 30);
        *((_QWORD *)this + 34) = *((_QWORD *)this + 31);
        *v4 = 0LL;
        *((_QWORD *)this + 30) = 0LL;
        *((_QWORD *)this + 31) = 0LL;
      }
      if ( *((_QWORD *)this + 29) != *((_QWORD *)this + 30) )
        *((_QWORD *)this + 30) = *v4;
      InputConfigContextProvider::Broadcast(this);
    }
  }
  else
  {
    v5 = (char *)a2 + 20;
    v6 = *((unsigned int *)a2 + 4);
    v11 = *(__m128i *)((char *)a2 + 4);
    v7 = v11;
    v8 = (char *)a2 + 20;
    v13 = (char *)a2 + 20;
    v9 = _mm_srli_si128(v11, 8).m128i_u64[0];
    v12 = v11;
    if ( HIDWORD(v9) )
    {
      v13 = (char *)operator new[](saturated_mul(HIDWORD(v9), 0xC8uLL));
      memcpy_0(v13, v5, 200 * v6);
      v8 = v13;
      v7 = v11;
    }
    v10 = (__m128i *)*((_QWORD *)this + 30);
    if ( v10 == *((__m128i **)this + 31) )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD>((char *)this + 232, v10, &v12);
    }
    else
    {
      *v10 = v7;
      v10[1].m128i_i64[0] = (__int64)v8;
      *((_QWORD *)this + 30) += 24LL;
    }
  }
}
