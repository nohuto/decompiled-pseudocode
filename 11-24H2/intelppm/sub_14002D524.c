/*
 * XREFs of sub_14002D524 @ 0x14002D524
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140002014 @ 0x140002014 (sub_140002014.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140006020 @ 0x140006020 (sub_140006020.c)
 *     sub_140008ECC @ 0x140008ECC (sub_140008ECC.c)
 *     sub_140009304 @ 0x140009304 (sub_140009304.c)
 *     sub_140009398 @ 0x140009398 (sub_140009398.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029B24 @ 0x140029B24 (sub_140029B24.c)
 *     sub_14002A228 @ 0x14002A228 (sub_14002A228.c)
 *     sub_14002D368 @ 0x14002D368 (sub_14002D368.c)
 *     sub_14002DD48 @ 0x14002DD48 (sub_14002DD48.c)
 *     sub_140031188 @ 0x140031188 (sub_140031188.c)
 *     sub_140034144 @ 0x140034144 (sub_140034144.c)
 */

__int64 __fastcall sub_14002D524(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rdx
  void (__fastcall *v4)(__int64, __int64, _QWORD); // rax
  int v5; // eax
  int v6; // ebx
  _QWORD *v7; // rdx
  unsigned __int16 v8; // r9
  __int64 v9; // rsi
  unsigned __int16 v10; // r9
  unsigned int i; // ebp
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // xmm1_8
  char v15; // bp
  char *v16; // rcx
  unsigned int *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v22; // [rsp+28h] [rbp-30h]
  int v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  v1 = (_QWORD *)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 208);
  v26 = 0LL;
  v4 = *(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504);
  v25 = 0;
  v4(qword_140019128, v2, 0LL);
  v5 = sub_140031188(a1, a1 + 592);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 592);
    v6 = sub_14002DD48(v9, *(_QWORD *)(a1 + 64));
    if ( v6 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
      v7 = v1;
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_47;
      v8 = 12;
LABEL_8:
      v22 = v6;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, v8, (__int64)&unk_140014550, v22);
      goto LABEL_5;
    }
    sub_140034144(v9);
    sub_140009398(v9, &v26, &v25);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    v24 = 0;
    v6 = sub_14002D368(a1, v9, v26, v25, &v24);
    if ( v6 >= 0 )
    {
      if ( *(_QWORD *)(v9 + 536) )
      {
        for ( i = 0; ; ++i )
        {
          v12 = *(unsigned int **)(v9 + 536);
          if ( i >= *v12 )
            break;
          v6 = sub_14002D368(a1, (__int64)&v12[26 * i + 2], (__int64)&unk_140012340, 4u, &v24);
          if ( v6 < 0 )
          {
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_46;
            v10 = 14;
            goto LABEL_15;
          }
        }
      }
      if ( !sub_140006020(v9 + 440) || *(_BYTE *)v13 == 126 && !*(_QWORD *)(v9 + 444) )
      {
        v14 = *(_QWORD *)(v9 + 48);
        *(_OWORD *)v13 = *(_OWORD *)(v9 + 32);
        *(_QWORD *)(v13 + 16) = v14;
      }
      v15 = v24;
      if ( v24 )
      {
        v6 = sub_140029B24(*(_QWORD *)(a1 + 256));
        if ( v6 < 0 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_46;
          v10 = 15;
          goto LABEL_15;
        }
      }
      if ( sub_140006020(v9 + 344) )
        sub_140008ECC(a1, v16, 1LL);
      v17 = *(unsigned int **)(v9 + 536);
      if ( v17 )
        sub_140009304(a1, v17);
      if ( !v15 )
        goto LABEL_41;
      v18 = sub_14002A228(*(_QWORD *)(a1 + 256));
      v6 = 0;
      if ( v18 != -1073741435 )
        v6 = v18;
      if ( v6 >= 0 )
      {
LABEL_41:
        *(_QWORD *)(a1 + 384) = sub_140002014(a1, v9 + 8);
        *(_QWORD *)(a1 + 392) = sub_140002014(a1, v9 + 32);
        *(_QWORD *)(a1 + 400) = sub_140002014(a1, v9 + 56);
        if ( sub_140006020(v9 + 488) )
          *(_QWORD *)(a1 + 416) = sub_140002014(a1, v19);
        v20 = *(_QWORD *)(a1 + 392);
        if ( *(_QWORD *)(a1 + 400) > v20 )
          *(_QWORD *)(a1 + 400) = v20;
        *(_QWORD *)(a1 + 408) = sub_140002014(a1, v9 + 80);
        goto LABEL_46;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v10 = 16;
        goto LABEL_15;
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v10 = 13;
LABEL_15:
      v23 = v6;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, v10, (__int64)&unk_140014550, v23);
    }
LABEL_46:
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
    v7 = (_QWORD *)(a1 + 208);
    goto LABEL_47;
  }
  if ( v5 != -1073741772 )
  {
    v7 = v1;
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_47;
    v8 = 11;
    goto LABEL_8;
  }
  v7 = v1;
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v7) = 4;
    sub_140003D28(off_140018050->DeviceExtension, (_DWORD)v7, 2, 10, (__int64)&unk_140014550);
LABEL_5:
    v7 = v1;
  }
LABEL_47:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *v7);
  return (unsigned int)v6;
}
