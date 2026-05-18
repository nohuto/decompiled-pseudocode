/*
 * XREFs of sub_1800734FC @ 0x1800734FC
 * Callers:
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_18007370C @ 0x18007370C (sub_18007370C.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180072EF8 @ 0x180072EF8 (sub_180072EF8.c)
 *     sub_180072FF4 @ 0x180072FF4 (sub_180072FF4.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800734FC(_QWORD *a1, int a2)
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
  if ( dword_1801C8A30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8A30);
    if ( dword_1801C8A30 == -1 )
    {
      v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
      *(_QWORD *)v3 = v3;
      *(_QWORD *)(v3 + 8) = v3;
      *(_QWORD *)(v3 + 16) = v3;
      *(_WORD *)(v3 + 24) = 257;
      qword_1801C8A38 = v3;
      atexit(sub_1800E8C40);
      Init_thread_footer(&dword_1801C8A30);
    }
  }
  v4 = sub_18001B098(48LL);
  v6 = v4;
  v14 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    sub_180072EF8(v4 + 16, &v13);
  }
  else
  {
    v6 = 0LL;
  }
  v10 = v6 + 16;
  v11 = v6;
  sub_180072FF4(v5, (__int64)v12, &v13, (__int64)&v10);
  v7 = v12[0];
  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 48);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *(_QWORD *)(v7 + 40);
  a1[1] = *(_QWORD *)(v7 + 48);
  if ( v11 )
    sub_18001050C(v11);
  return a1;
}
