/*
 * XREFs of RtlpCreateUserProcess @ 0x140C25808
 * Callers:
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x14069CB60 (ZwCreateUserProcess.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4, int a5, _DWORD *a6)
{
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v15[5]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int128 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  _BYTE v23[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  __int64 v27; // [rsp+140h] [rbp+40h]
  _DWORD *v28; // [rsp+148h] [rbp+48h]
  _QWORD v29[5]; // [rsp+150h] [rbp+50h]
  _QWORD v30[37]; // [rsp+178h] [rbp+78h] BYREF

  memset_0(v30, 0, 0x120uLL);
  v17 = 48LL;
  v20 = 512LL;
  v14 = 0LL;
  v15[1] = 48LL;
  v15[4] = 512LL;
  memset_0(a6 + 1, 0, 0x64uLL);
  *a6 = 104;
  v18 = 0LL;
  v19 = 0LL;
  v15[2] = 0LL;
  v21 = 0LL;
  v15[3] = 0LL;
  v16 = 0LL;
  v15[0] = 0LL;
  memset_0(v23, 0, 0x50uLL);
  v24 |= 4u;
  v28 = a6 + 6;
  v29[3] = a6 + 10;
  v9 = 2;
  v22 = 88LL;
  v26 = 65539LL;
  v27 = 16LL;
  v29[0] = 0LL;
  v29[1] = 6LL;
  v29[2] = 64LL;
  v29[4] = 0LL;
  if ( a1 )
  {
    v30[1] = *a1;
    v30[2] = *((_QWORD *)a1 + 1);
    LODWORD(v14) = 2;
    v9 = 4;
    v30[6] = &v14;
    v30[0] = 131077LL;
    v30[3] = 0LL;
    v30[4] = 131082LL;
    v30[5] = 8LL;
    v30[7] = 0LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v10 = 4LL * v9++;
    *(__int64 *)((char *)&v26 + v10 * 8) = 393233LL;
    *(__int64 *)((char *)&v27 + v10 * 8) = 1LL;
    v29[v10] = 0LL;
    v29[v10 - 1] = 97LL;
  }
  if ( a2 )
  {
    v11 = *(_DWORD *)(a2 + 8);
    if ( v11 < 0 )
    {
      *(_DWORD *)(a2 + 8) = v11 & 0x7FFFFFFF;
      v12 = 4LL * v9++;
      *(__int64 *)((char *)&v26 + v12 * 8) = 131090LL;
      *(__int64 *)((char *)&v27 + v12 * 8) = 8LL;
      v29[v12] = 0LL;
      v29[v12 - 1] = v15;
    }
  }
  v25 = 32LL * v9 + 8;
  return ZwCreateUserProcess((__int64)(a6 + 2), (__int64)(a6 + 4));
}
