/*
 * XREFs of sub_180065114 @ 0x180065114
 * Callers:
 *     sub_180062150 @ 0x180062150 (sub_180062150.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_18005E130 @ 0x18005E130 (sub_18005E130.c)
 *     sub_18006D730 @ 0x18006D730 (sub_18006D730.c)
 *     sub_1800CDD9C @ 0x1800CDD9C (sub_1800CDD9C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180065114(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // edi
  void *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  void *v12; // rdx
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int64 v22[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF

  v6 = sub_180032500(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801C5098, 0LL) )
    return 0;
  while ( _InterlockedExchange((volatile __int32 *)(a3 + 48), 1) )
    ;
  v7 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 48) = 0;
  if ( v7 )
    return 0;
  while ( _InterlockedExchange((volatile __int32 *)(a3 + 48), 1) )
    ;
  v8 = sub_18006D730(*(unsigned int *)(a3 + 44));
  *(_DWORD *)(a3 + 48) = 0;
  if ( v8 == 4 )
  {
    v9 = &unk_1801C66F8;
  }
  else
  {
    if ( v8 != 5 )
      goto LABEL_10;
    v9 = &unk_1801C6758;
  }
  sub_1800CDD9C(v6, v9);
LABEL_10:
  v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801C52D8, 2LL);
  if ( v8 == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_1801C52D8,
      (unsigned int)((v10 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_1801C7638);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &unk_1801C7638, v11, 1LL);
  switch ( v8 )
  {
    case 9:
      v12 = &unk_1801C5178;
LABEL_16:
      sub_1800CDD9C(v6, v12);
      break;
    case 11:
      v12 = &unk_1801C5298;
      goto LABEL_16;
    case 13:
      v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801C52F8, 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
        v6,
        &unk_1801C52F8,
        (unsigned int)((v13 + 1) % 22),
        1LL);
      break;
  }
  v14 = unknown_libname_81(&v23, a2);
  sub_180032310(a1, &v20, v15, v14);
  if ( v8 == 14 )
  {
    sub_18005E130(v22, &v20);
    v16 = v22[0];
    v17 = *(float *)(v22[0] + 1880) * 0.5;
    goto LABEL_23;
  }
  if ( v8 == 15 )
  {
    sub_18005E130(v22, &v20);
    v16 = v22[0];
    v17 = *(float *)(v22[0] + 1880) + *(float *)(v22[0] + 1880);
LABEL_23:
    v18 = v22[1];
    *(float *)(v16 + 1880) = v17;
    if ( v18 )
      sub_18001060C(v18);
  }
  if ( v21 )
    sub_18001060C(v21);
  return 1;
}
