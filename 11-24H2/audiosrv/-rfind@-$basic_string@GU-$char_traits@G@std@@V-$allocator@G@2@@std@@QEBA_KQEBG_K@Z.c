/*
 * XREFs of ?rfind@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180162EB4
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x18016033C (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::wstring::rfind(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned __int64 v4; // r11
  wchar_t v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _WORD *i; // rcx

  v1 = -1LL;
  do
    ++v1;
  while ( asc_180191F5C[v1] );
  v3 = std::wstring::c_str(a1, *(_QWORD *)(a1 + 16));
  if ( v1 )
  {
    if ( v1 <= v2 )
    {
      v5 = asc_180191F5C[0];
      v6 = v2 - v1;
      v7 = v4;
      if ( v6 < v4 )
        v7 = v6;
      for ( i = (_WORD *)(v3 + 2 * v7);
            *i != v5 || (unsigned int)std::_WChar_traits<unsigned short>::compare((__int64)i, L"\\", v1);
            --i )
      {
        if ( i == (_WORD *)v3 )
          return v4;
      }
      return ((__int64)i - v3) >> 1;
    }
  }
  else if ( v2 < v4 )
  {
    return v2;
  }
  return v4;
}
