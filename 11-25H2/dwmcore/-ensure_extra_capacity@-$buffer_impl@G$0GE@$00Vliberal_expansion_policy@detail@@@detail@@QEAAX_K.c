/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180169C04
 * Callers:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x180169B0C (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAG@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAG@stdext@@_J@Z @ 0x18016A0C0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAG@stdext@@_J@std@@YA-A_TAEAV-$checked_array_.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  const void *v8; // rax
  const void *v9; // rbx
  signed __int64 v10; // rdi
  const void *v11; // rsi
  void *v12; // rax
  void *v13; // rcx
  bool v14; // zf
  const void *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 1;
  if ( result < a2 )
  {
    v6 = (v4 - (_BYTE *)*a1) >> 1;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180169D2DLL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 1),
           (v3 - (_BYTE *)*a1) >> 1,
           v6 + a2);
    v8 = operator new[](saturated_mul(v7, 2uLL));
    v9 = *a1;
    *(_QWORD *)&v16 = v8;
    v10 = (_BYTE *)a1[1] - (_BYTE *)*a1;
    *((_QWORD *)&v16 + 1) = v6;
    v11 = v8;
    v17 = v16;
    v18 = 0LL;
    v12 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(&v17, v10 >> 1);
    memmove_0(v12, v9, v10);
    v13 = (void *)*a1;
    v14 = *a1 == a1 + 3;
    *a1 = v11;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = *a1;
    a1[1] = (char *)*a1 + 2 * v6;
    result = (unsigned __int64)v15 + 2 * v7;
    a1[2] = (const void *)result;
  }
  return result;
}
