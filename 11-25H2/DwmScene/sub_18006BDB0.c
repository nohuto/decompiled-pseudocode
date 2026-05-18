/*
 * XREFs of sub_18006BDB0 @ 0x18006BDB0
 * Callers:
 *     sub_18002B220 @ 0x18002B220 (sub_18002B220.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18006BDB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // r15d
  bool v8; // cl
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  int v11; // r15d
  __int64 v12; // rcx
  _QWORD *i; // rbx
  __int64 v14; // rcx
  __int64 *v15; // r13
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  bool v19; // cl
  int v20; // r13d
  __int64 *v21; // rax
  __int64 **v22; // r15
  __int64 *v23; // rbx
  _QWORD *v24; // rax
  __int64 *v25; // r15
  __int64 v26; // rcx
  unsigned int v27; // r12d
  __int64 *v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // rsi
  _QWORD *v33; // rax
  __int64 v34[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+40h]
  __int64 *v36; // [rsp+C0h] [rbp+50h]

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)a3
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a3 + 8)
    || *(_DWORD *)(a1 + 20) != *(_DWORD *)(a3 + 12)
    || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a3 + 16)
    || (result = *(unsigned int *)(a3 + 20), *(_DWORD *)(a1 + 28) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 16);
    v7 = *(_DWORD *)(a3 + 20);
    v36 = *(__int64 **)(a2 + 3648);
    v8 = (*(_BYTE *)(a2 + 328) & 1) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 8LL);
    v9 = (_QWORD *)(a1 + 80);
    v10 = v7 & 0xFFFFFFBF;
    v11 = v7 | 0x40;
    if ( !v8 )
      v11 = v10;
    while ( v9 != (_QWORD *)(a1 + 176) )
    {
      *v9 = 0LL;
      v12 = v9[1];
      v9[1] = 0LL;
      if ( v12 )
        sub_18001050C(v12);
      v9 += 2;
    }
    for ( i = (_QWORD *)(a1 + 176); i != (_QWORD *)(a1 + 272); i += 2 )
    {
      *i = 0LL;
      v14 = i[1];
      i[1] = 0LL;
      if ( v14 )
        sub_18001050C(v14);
    }
    sub_1800107FC((__int64)v36, v34);
    v15 = (__int64 *)(a1 + 456);
    sub_180011010((_QWORD *)(a1 + 456), v34);
    if ( v34[1] )
      sub_18001050C(v34[1]);
    v16 = *v15;
    v17 = std::string::string(v34, "ImageProcessing Input FrameBuffer");
    sub_180027C24(v16, (__int64)v17);
    sub_180026858(*v15, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), v11, a2);
    v18 = sub_1800323A0((__int64)v36, 1);
    v19 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, &unk_1801C43A8, 0LL)
       && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 6LL);
    v20 = v11 | 0x100;
    v35 = v19 + 1;
    if ( !v19 )
      v20 = v11;
    v21 = sub_180023410(v36, v34);
    v22 = (__int64 **)(a1 + 472);
    sub_180011010((_QWORD *)(a1 + 472), v21);
    if ( v34[1] )
      sub_18001050C(v34[1]);
    v23 = *v22;
    v24 = std::string::string(v34, "ImageProcessing Input DepthBuffer)");
    sub_180027C24((__int64)v23, (__int64)v24);
    sub_180068E10(*v22, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), v35, v20, a2);
    v25 = (__int64 *)(a1 + 64);
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 136LL);
    if ( v26 && (unsigned int)sub_18002A5E8(v26, *(_DWORD *)(a2 + 244)) > 1 )
    {
      v27 = *(_DWORD *)(a3 + 20) & 0xFFFFFFBC | 3;
      v28 = sub_180015E64((__int64)v36, v34);
      sub_180011010((_QWORD *)(a1 + 64), v28);
      if ( v34[1] )
        sub_18001050C(v34[1]);
      v29 = *v25;
      v30 = std::string::string(v34, "ImageProcessing Input Texture");
      sub_180027C24(v29, (__int64)v30);
      result = sub_180051A28(*v25, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), 0, *(_DWORD *)(a3 + 8), 0, v27, 0LL, 0, a2);
    }
    else
    {
      *(_OWORD *)v34 = 0LL;
      result = (__int64)sub_180011010((_QWORD *)(a1 + 64), v34);
      if ( v34[1] )
        result = sub_18001050C(v34[1]);
    }
    v31 = *(_QWORD **)(a1 + 40);
    v32 = *(_QWORD **)(a1 + 48);
    while ( v31 != v32 )
    {
      v33 = unknown_libname_81(v34, v31);
      sub_18006CC9C(a1, v33);
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v31 + 8LL))(
                 *v31,
                 a2,
                 *(unsigned int *)(a1 + 8),
                 *(unsigned int *)(a1 + 12),
                 *(_DWORD *)(a1 + 20),
                 *(_DWORD *)(a1 + 28));
      v31 += 2;
    }
  }
  return result;
}
