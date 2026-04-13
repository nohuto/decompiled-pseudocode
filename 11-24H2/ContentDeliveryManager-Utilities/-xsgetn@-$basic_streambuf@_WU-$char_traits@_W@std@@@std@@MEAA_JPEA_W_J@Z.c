/*
 * XREFs of ?xsgetn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEA_W_J@Z @ 0x18005E980
 * Callers:
 *     <none>
 * Callees:
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x18005B02C (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005C494 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::wstreambuf::xsgetn(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int16 v10; // ax

  v3 = 0LL;
  for ( i = a3; i > 0; a2 = (_WORD *)((char *)a2 + v9) )
  {
    v7 = std::wstreambuf::_Gnavail(a1);
    if ( v7 <= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      if ( v10 == -1 )
        return v3;
      *a2 = v10;
      --i;
      v9 = 2LL;
      v8 = 1LL;
    }
    else
    {
      v8 = i;
      if ( i >= v7 )
        v8 = v7;
      std::char_traits<wchar_t>::copy(a2, **(const void ***)(a1 + 56), v8);
      i -= v8;
      **(_DWORD **)(a1 + 80) -= v8;
      **(_QWORD **)(a1 + 56) += 2LL * (int)v8;
      v9 = 2 * v8;
    }
    v3 += v8;
  }
  return v3;
}
