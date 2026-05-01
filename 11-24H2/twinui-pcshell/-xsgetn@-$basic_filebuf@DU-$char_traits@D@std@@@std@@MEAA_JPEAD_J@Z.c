/*
 * XREFs of ?xsgetn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z @ 0x180617190
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802CAB94 (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall std::filebuf::xsgetn(__int64 a1, char *a2, __int64 a3)
{
  size_t v7; // rsi
  unsigned __int64 v8; // rax
  size_t v9; // rbx
  const void *v10; // rax
  unsigned __int64 v11; // rdx
  size_t v12; // rcx
  size_t v13; // rbx
  size_t v14; // rax

  if ( a3 <= 0 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 104) )
    return std::streambuf::xsgetn();
  v7 = a3;
  v8 = std::streambuf::_Gnavail();
  if ( v8 )
  {
    v9 = a3;
    if ( v8 < a3 )
      v9 = v8;
    v10 = (const void *)std::streambuf::gptr(a1);
    memcpy_0(a2, v10, v9);
    a2 += v9;
    v7 = a3 - v9;
    std::streambuf::gbump(a1, (unsigned int)v9);
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    std::filebuf::_Reset_back(a1);
    v11 = v7;
    v12 = v7;
    v13 = v7;
    while ( v11 > 0xFFF )
    {
      v14 = fread(a2, 1uLL, 0xFFFuLL, *(FILE **)(a1 + 128));
      a2 += v14;
      v7 = v13 - v14;
      v12 = v13 - v14;
      v11 = v13 - v14;
      v13 -= v14;
      if ( v14 != 4095 )
        return a3 - v12;
    }
    if ( v12 )
      v7 -= fread(a2, 1uLL, v7, *(FILE **)(a1 + 128));
  }
  return a3 - v7;
}
