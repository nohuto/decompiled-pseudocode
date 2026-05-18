/*
 * XREFs of sub_1800CBAD4 @ 0x1800CBAD4
 * Callers:
 *     sub_1800CBD20 @ 0x1800CBD20 (sub_1800CBD20.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180040B74 @ 0x180040B74 (sub_180040B74.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_1800CAF54 @ 0x1800CAF54 (sub_1800CAF54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CBAD4(__int64 a1, int a2)
{
  __int64 *v2; // rsi
  unsigned int v3; // r10d
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (__int64 *)(a1 + 504);
  sub_180040B74((__int64 *)(a1 + 504), v9, &v11);
  if ( !*(_BYTE *)(v10 + 25) && v3 >= *(_DWORD *)(v10 + 32) && v10 != *v2 )
    return v10 + 40;
  v5 = sub_18001B1F8(160LL);
  v6 = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 1;
    *(_DWORD *)(v5 + 12) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`vftable';
    sub_1800CAF54((void *)(v5 + 16));
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(_QWORD *)sub_1800502A0(v2, (__int64)v9, &v11);
  *(_QWORD *)(v7 + 40) = v6 + 16;
  v8 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v6;
  if ( v8 )
    sub_18001060C(v8);
  return v7 + 40;
}
