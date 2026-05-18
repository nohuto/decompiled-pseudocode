/*
 * XREFs of sub_18007365C @ 0x18007365C
 * Callers:
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 *     sub_18007386C @ 0x18007386C (sub_18007386C.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180073058 @ 0x180073058 (sub_180073058.c)
 *     sub_180073154 @ 0x180073154 (sub_180073154.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18007365C(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h]

  v13 = a2;
  if ( dword_1801C9A40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C9A40);
    if ( dword_1801C9A40 == -1 )
    {
      v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
      *(_QWORD *)v3 = v3;
      *(_QWORD *)(v3 + 8) = v3;
      *(_QWORD *)(v3 + 16) = v3;
      *(_WORD *)(v3 + 24) = 257;
      qword_1801C9A48 = v3;
      atexit(sub_1800E8DA0);
      Init_thread_footer(&dword_1801C9A40);
    }
  }
  v4 = sub_18001B1F8(48LL);
  v6 = v4;
  v14 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    sub_180073058(v4 + 16, &v13);
  }
  else
  {
    v6 = 0LL;
  }
  v10 = v6 + 16;
  v11 = v6;
  sub_180073154(v5, (__int64)v12, &v13, (__int64)&v10);
  v7 = v12[0];
  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 48);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *(_QWORD *)(v7 + 40);
  a1[1] = *(_QWORD *)(v7 + 48);
  if ( v11 )
    sub_18001060C(v11);
  return a1;
}
