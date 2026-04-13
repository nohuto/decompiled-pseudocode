/*
 * XREFs of ?xsputn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEB_W_J@Z @ 0x18005E570
 * Callers:
 *     <none>
 * Callees:
 *     ?_Pnavail@?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEBA_JXZ @ 0x18005B488 (-_Pnavail@-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEBA_JXZ.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005BFB8 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::wstreambuf::xsputn(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = 0LL;
  for ( i = a3; i > 0; a2 = (unsigned __int16 *)((char *)a2 + v9) )
  {
    v7 = std::basic_streambuf<unsigned short>::_Pnavail(a1);
    if ( v7 <= 0 )
    {
      if ( (*(unsigned __int16 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *a2) == 0xFFFF )
        return v3;
      v8 = 1LL;
      --i;
      v9 = 2LL;
    }
    else
    {
      v8 = i;
      if ( i >= v7 )
        v8 = v7;
      std::char_traits<wchar_t>::copy(**(void ***)(a1 + 64), a2, v8);
      i -= v8;
      **(_DWORD **)(a1 + 88) -= v8;
      **(_QWORD **)(a1 + 64) += 2LL * (int)v8;
      v9 = 2 * v8;
    }
    v3 += v8;
  }
  return v3;
}
