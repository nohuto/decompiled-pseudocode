/*
 * XREFs of ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x180163260
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x18016033C (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 */

void __fastcall std::stoul(__int64 a1, wchar_t *a2, __int64 a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  const wchar_t *v6; // rax
  wchar_t *v7; // rbx
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v4 = (_DWORD *)_o__errno(a1, a2, a3);
  v6 = (const wchar_t *)std::wstring::c_str(a1, v5);
  EndPtr = 0LL;
  *v4 = 0;
  v7 = (wchar_t *)v6;
  wcstoul(v6, &EndPtr, 10);
  if ( v7 == EndPtr )
  {
    std::_Xinvalid_argument("invalid stoul argument");
    __debugbreak();
  }
  if ( *v4 == 34 )
  {
    std::_Xout_of_range("stoul argument out of range");
    __debugbreak();
  }
}
