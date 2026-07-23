/*
 * XREFs of sub_1409DAA1C @ 0x1409DAA1C
 * Callers:
 *     sub_1409DA984 @ 0x1409DA984 (sub_1409DA984.c)
 * Callees:
 *     sub_140400310 @ 0x140400310 (sub_140400310.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     sub_1409DABCC @ 0x1409DABCC (sub_1409DABCC.c)
 *     sub_1409DABF4 @ 0x1409DABF4 (sub_1409DABF4.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409DAA1C(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edi
  _BYTE *v5; // rdi
  int UserDataPagesKernelWritable; // ebx
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  char v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  char *v22; // [rsp+48h] [rbp-B8h] BYREF
  PMDL Mdl[2]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN **v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+78h] [rbp-88h]
  __int128 v27; // [rsp+88h] [rbp-78h]
  __int128 v28; // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-58h]
  __int128 v30; // [rsp+B8h] [rbp-48h]
  __int128 v31; // [rsp+C8h] [rbp-38h]
  __int128 v32; // [rsp+D8h] [rbp-28h]
  __int128 v33; // [rsp+E8h] [rbp-18h]
  __int128 v34; // [rsp+F8h] [rbp-8h]

  v2 = a2[1];
  v22 = 0LL;
  v5 = (_BYTE *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl[0] = 0LL;
  UserDataPagesKernelWritable = sub_1409DABF4(v5);
  if ( UserDataPagesKernelWritable >= 0 )
  {
    v7 = a2[2] & 0xFFFFFFF;
    if ( (*a2 & 2) != 0 )
    {
      UserDataPagesKernelWritable = WbMakeUserDataPagesKernelWritable(v5, v7);
    }
    else
    {
      UserDataPagesKernelWritable = WbMakeUserExecutablePagesKernelWritable(v5, v7, Mdl, &v22);
      if ( UserDataPagesKernelWritable >= 0 )
        goto LABEL_7;
    }
    if ( UserDataPagesKernelWritable >= 0 )
    {
LABEL_7:
      v8 = *(_QWORD *)(a1 + 56);
      v9 = a2[1];
      v10 = a2[2];
      v24 = &off_140002D00;
      v11 = *(_OWORD *)(v8 + 96);
      v12 = *(_QWORD *)(v8 + 72);
      v25 = *(_OWORD *)(v8 + 80);
      v13 = *(_OWORD *)(v8 + 112);
      v26 = v11;
      v21[0] = 0;
      v14 = *(_OWORD *)(v8 + 128);
      v27 = v13;
      v15 = *(_OWORD *)(v8 + 144);
      v28 = v14;
      v16 = *(_OWORD *)(v8 + 160);
      v29 = v15;
      v17 = *(_OWORD *)(v8 + 176);
      v30 = v16;
      v18 = *(_OWORD *)(v8 + 208);
      v31 = v17;
      v32 = *(_OWORD *)(v8 + 192);
      v19 = *(_OWORD *)(v8 + 224);
      v33 = v18;
      v34 = v19;
      sub_140400310((__int64)&v24, v5, v22, v10 & 0xFFFFFFF, v12, v9 & 0xFFFFFFF, v21);
      UserDataPagesKernelWritable = 0;
      *a2 = *a2 & 0xFFFFFC03 | (4 * (unsigned __int8)v21[0]);
    }
  }
  sub_1409DABCC(Mdl[0]);
  return (unsigned int)UserDataPagesKernelWritable;
}
