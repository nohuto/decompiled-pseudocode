/*
 * XREFs of sub_180064FB4 @ 0x180064FB4
 * Callers:
 *     sub_180061FF0 @ 0x180061FF0 (sub_180061FF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18005DFD0 @ 0x18005DFD0 (sub_18005DFD0.c)
 *     sub_18006D5D0 @ 0x18006D5D0 (sub_18006D5D0.c)
 *     sub_1800CDC3C @ 0x1800CDC3C (sub_1800CDC3C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180064FB4(__int64 a1, _QWORD *a2, __int64 a3)
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

  v6 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801C4088, 0LL) )
    return 0;
  while ( _InterlockedExchange((volatile __int32 *)(a3 + 48), 1) )
    ;
  v7 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 48) = 0;
  if ( v7 )
    return 0;
  while ( _InterlockedExchange((volatile __int32 *)(a3 + 48), 1) )
    ;
  v8 = sub_18006D5D0(*(unsigned int *)(a3 + 44));
  *(_DWORD *)(a3 + 48) = 0;
  if ( v8 == 4 )
  {
    v9 = &unk_1801C56E8;
  }
  else
  {
    if ( v8 != 5 )
      goto LABEL_10;
    v9 = &unk_1801C5748;
  }
  sub_1800CDC3C(v6, v9);
LABEL_10:
  v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801C42C8, 2LL);
  if ( v8 == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_1801C42C8,
      (unsigned int)((v10 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_1801C6628);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &unk_1801C6628, v11, 1LL);
  switch ( v8 )
  {
    case 9:
      v12 = &unk_1801C4168;
LABEL_16:
      sub_1800CDC3C(v6, v12);
      break;
    case 11:
      v12 = &unk_1801C4288;
      goto LABEL_16;
    case 13:
      v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801C42E8, 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
        v6,
        &unk_1801C42E8,
        (unsigned int)((v13 + 1) % 22),
        1LL);
      break;
  }
  v14 = unknown_libname_81(&v23, a2);
  sub_1800321B0(a1, &v20, v15, v14);
  if ( v8 == 14 )
  {
    sub_18005DFD0(v22, &v20);
    v16 = v22[0];
    v17 = *(float *)(v22[0] + 1880) * 0.5;
    goto LABEL_23;
  }
  if ( v8 == 15 )
  {
    sub_18005DFD0(v22, &v20);
    v16 = v22[0];
    v17 = *(float *)(v22[0] + 1880) + *(float *)(v22[0] + 1880);
LABEL_23:
    v18 = v22[1];
    *(float *)(v16 + 1880) = v17;
    if ( v18 )
      sub_18001050C(v18);
  }
  if ( v21 )
    sub_18001050C(v21);
  return 1;
}
