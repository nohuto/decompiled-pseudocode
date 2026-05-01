/*
 * XREFs of ??$?5GU?$char_traits@G@std@@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x1800C52A8
 * Callers:
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x1800C5194 (_anonymous_namespace_--TimeStringToTimePoint.c)
 * Callees:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C5A20 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::operator>><unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  std::locale *v7; // rcx
  __int64 v8; // r13
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // [rsp+50h] [rbp-78h] BYREF
  char v19; // [rsp+58h] [rbp-70h]
  char v20; // [rsp+59h] [rbp-6Fh]
  __int16 v21; // [rsp+5Ah] [rbp-6Eh]
  int v22; // [rsp+5Ch] [rbp-6Ch]
  __int64 v23; // [rsp+60h] [rbp-68h] BYREF
  bool v24; // [rsp+68h] [rbp-60h]
  __int16 v25; // [rsp+6Ah] [rbp-5Eh]
  __int64 v26; // [rsp+70h] [rbp-58h]
  _BYTE v28[8]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v29; // [rsp+88h] [rbp-40h]
  _BYTE v30[16]; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+E0h] [rbp+18h] BYREF

  v3 = a1;
  v33 = 0;
  v26 = a1;
  v4 = std::basic_ios<unsigned short>::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
  v6 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, v5, v4);
  if ( (unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3, 0LL, v6) )
  {
    v7 = (std::locale *)std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v28);
    v8 = std::use_facet<std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(v7);
    if ( v29 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    v10 = a2[2];
    v11 = a2[1];
    v12 = *a2;
    v13 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
    v18 = 0LL;
    v19 = 1;
    v20 = BYTE1(v29);
    v21 = 0;
    v22 = HIDWORD(v29);
    v14 = std::basic_ios<unsigned short>::rdbuf(v13);
    try
    {
      v23 = v14;
      v24 = v14 == 0;
      v25 = 0;
      std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::get(
        v8,
        v30,
        &v23,
        &v18,
        v13,
        &v33,
        v12,
        v11,
        v10);
    }
    catch ( ... )
    {
      LOBYTE(v15) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v15);
      v3 = a1;
    }
  }
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v33, 0LL);
  v16 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v16);
  return v3;
}
