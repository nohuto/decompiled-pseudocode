/*
 * XREFs of sub_18002EA28 @ 0x18002EA28
 * Callers:
 *     sub_18003113C @ 0x18003113C (sub_18003113C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002C34C @ 0x18002C34C (sub_18002C34C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002EA28(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx

  v6 = sub_18001B1F8(184LL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::JsonConfigurationManager>::`vftable';
    sub_18002C34C(v6 + 16, a2, a3);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7 + 16;
  *a1 = v7 + 16;
  a1[1] = v7;
  if ( v7 != -16 )
  {
    v9 = *(_QWORD *)(v7 + 32);
    if ( !v9 || !*(_DWORD *)(v9 + 8) )
    {
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v10 = a1[1];
      v11 = 0LL;
      v12 = 0LL;
      if ( v10 )
      {
        v11 = v8;
        v12 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
      }
      *(_QWORD *)(v8 + 8) = v11;
      v13 = *(volatile signed __int32 **)(v8 + 16);
      *(_QWORD *)(v8 + 16) = v12;
      if ( v13 )
        sub_180010644(v13);
      if ( v10 )
        sub_18001060C(v10);
    }
  }
  return a1;
}
