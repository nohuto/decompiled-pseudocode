/*
 * XREFs of sub_180063A84 @ 0x180063A84
 * Callers:
 *     sub_180061B00 @ 0x180061B00 (sub_180061B00.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180039F04 @ 0x180039F04 (sub_180039F04.c)
 *     sub_18003A010 @ 0x18003A010 (sub_18003A010.c)
 *     sub_18005DFD0 @ 0x18005DFD0 (sub_18005DFD0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180063A84(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // [rsp+30h] [rbp-50h] BYREF
  __m128 v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  __int64 v38; // [rsp+68h] [rbp-18h]

  result = *a2;
  if ( *(_BYTE *)(*a2 + 116) )
  {
    v5 = unknown_libname_81(&v37, a2);
    sub_1800321B0(a1, &v35, v6, v5);
    result = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112));
    v8 = result;
    v9 = v35;
    if ( v35 && (*(_DWORD *)(v35 + 440) & 0x2000000) != 0 )
    {
      (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)result + 168LL))(
        result,
        &unk_1801C6528,
        v7,
        1LL);
      sub_180011B04(v9 + 56, &v37);
      v10 = v37;
      if ( v37 )
      {
        sub_180039F04(v37, (__int64)&v33);
        sub_18003A010(v10, &v34);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6548,
          v11,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6568,
          v12,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6588,
          v13,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C65A8,
          v14,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C65C8,
          v15,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C65E8,
          v16,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6608,
          v17,
          1LL);
      }
      result = (__int64)sub_18005DFD0((__int64 *)&v34, &v35);
      v19 = v34.m128_u64[0];
      if ( v34.m128_u64[0] )
      {
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C66C8,
          v18,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C66E8,
          v20,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6728,
          v21,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6748,
          v22,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6708,
          v23,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6768,
          v24,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C6788,
          v25,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C67A8,
          v26,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C67C8,
          v27,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C67E8,
          v28,
          1LL);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v8 + 152LL))(
          v8,
          &unk_1801C66A8,
          *(unsigned int *)(v19 + 1868),
          1LL);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v8 + 152LL))(
          v8,
          &unk_1801C6808,
          *(unsigned int *)(v19 + 1816),
          1LL);
        LOBYTE(v29) = *(_BYTE *)(v19 + 1864);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 144LL))(
          v8,
          &unk_1801C6848,
          v29,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C68E8,
          v30,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801C68C8,
          v31,
          1LL);
        result = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
                   v8,
                   &unk_1801C68A8,
                   v32,
                   1LL);
      }
      if ( v34.m128_u64[1] )
        result = sub_18001050C(v34.m128_i64[1]);
      if ( v38 )
        result = sub_18001050C(v38);
    }
    if ( v36 )
      return sub_18001050C(v36);
  }
  return result;
}
