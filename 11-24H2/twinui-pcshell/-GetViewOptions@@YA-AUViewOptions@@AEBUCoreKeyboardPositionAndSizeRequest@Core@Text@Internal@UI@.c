/*
 * XREFs of ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800500F4
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18004ED50 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047E800 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802BC628 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__m128 *__fastcall GetViewOptions(__m128 *a1, __int64 a2, __int64 a3, int a4)
{
  bool v5; // r13
  int v6; // edi
  int v7; // r14d
  BOOL v8; // r12d
  const void *v9; // r15
  char *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r15
  const void *v14; // rdx
  bool v15; // [rsp+31h] [rbp-3Fh]
  bool v16; // [rsp+32h] [rbp-3Eh]
  bool v17; // [rsp+33h] [rbp-3Dh]
  int v18; // [rsp+34h] [rbp-3Ch]
  __m128 v19; // [rsp+40h] [rbp-30h]
  void *v20[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-10h]

  *(_OWORD *)v20 = 0LL;
  v21 = 0LL;
  v5 = *(_BYTE *)(a2 + 44) != 0;
  v15 = *(_BYTE *)(a2 + 45) != 0;
  v16 = *(_BYTE *)(a2 + 46) != 0;
  v17 = *(_BYTE *)(a2 + 47) != 0;
  v6 = 1;
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v7 = 1;
    v18 = 1;
  }
  else
  {
    v7 = 0;
    if ( *(_DWORD *)(a2 + 28) == 2 )
      v7 = 2;
    v18 = v7;
  }
  v8 = *(_DWORD *)(a2 + 32) == 1;
  if ( *(_DWORD *)(a2 + 36) != 1 )
  {
    v6 = 0;
    if ( *(_DWORD *)(a2 + 36) == 2 )
      v6 = 2;
  }
  v19 = _mm_div_ps(
          _mm_mul_ps(
            *(__m128 *)(a2 + 56),
            _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)a4), (__m128)COERCE_UNSIGNED_INT((float)a4), 0)),
          (__m128)_xmm);
  if ( v20 == (void **)a3 )
  {
    v10 = (char *)v20[1];
  }
  else
  {
    v9 = *(const void **)a3;
    v10 = (char *)(16 * ((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4));
    if ( (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4 )
    {
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(v20);
      v14 = v9;
      v12 = (unsigned __int64)v20[0];
      memmove_0(v20[0], v14, (size_t)v10);
      v10 += v12;
      v11 = v21;
      v7 = v18;
      goto LABEL_8;
    }
    memmove_0(0LL, v9, 16 * ((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4));
  }
  v11 = 0LL;
  v12 = (unsigned __int64)v20[0];
LABEL_8:
  a1->m128_i8[0] = v5;
  a1->m128_i8[1] = v15;
  a1->m128_i8[2] = v16;
  a1->m128_i8[3] = v17;
  a1->m128_i32[1] = v7;
  a1->m128_i32[2] = v8;
  a1->m128_i32[3] = v6;
  a1[1] = v19;
  v21 = 0LL;
  v20[1] = 0LL;
  v20[0] = 0LL;
  a1[2].m128_u64[0] = v12;
  a1[2].m128_u64[1] = (unsigned __int64)v10;
  a1[3].m128_u64[0] = v11;
  std::vector<Geometry::CRect>::_Tidy(v20);
  return a1;
}
