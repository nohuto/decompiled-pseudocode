/*
 * XREFs of SmHwAcceleratorIssueRequest @ 0x14060DA70
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 *     SmStoreCompressBuffer @ 0x140383774 (SmStoreCompressBuffer.c)
 * Callees:
 *     AccelCompressBuffer @ 0x140663FEC (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x14066415C (AccelDecompressBuffer.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SmHwAcceleratorIssueRequest(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  __int64 result; // rax
  _QWORD v20[2]; // [rsp+28h] [rbp-91h] BYREF
  int v21; // [rsp+38h] [rbp-81h]
  int v22; // [rsp+3Ch] [rbp-7Dh]
  __int64 v23; // [rsp+40h] [rbp-79h]
  __int64 v24; // [rsp+48h] [rbp-71h]
  __int64 v25; // [rsp+50h] [rbp-69h]
  int v26; // [rsp+58h] [rbp-61h]
  __int64 v27; // [rsp+60h] [rbp-59h]
  int v28; // [rsp+68h] [rbp-51h]
  int v29; // [rsp+88h] [rbp-31h] BYREF
  __int64 v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+98h] [rbp-21h]
  int v32; // [rsp+9Ch] [rbp-1Dh]
  __int64 v33; // [rsp+A0h] [rbp-19h]
  __int64 v34; // [rsp+A8h] [rbp-11h]
  __int64 v35; // [rsp+B0h] [rbp-9h]
  int v36; // [rsp+B8h] [rbp-1h]
  __int64 v37; // [rsp+C0h] [rbp+7h]
  int v38; // [rsp+C8h] [rbp+Fh]

  memset_0(&v29, 0, 0x58uLL);
  memset_0(v20, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = a2;
  v13 = *(_QWORD *)(v11 + 32);
  v14 = *(_DWORD *)(v13 + 40) * a2;
  v15 = *(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)(v13 + 4LL * *(int *)(v11 + 60) + 56) * v12);
  v16 = v14 + a1 + 32;
  if ( a3 )
  {
    v21 = 1;
    v22 = 1;
    v25 = a6;
    v26 = a7;
    v28 = a5;
    LODWORD(v20[0]) = 5767169;
    v20[1] = v14 + a1 + 32;
    v23 = v15;
    v24 = 5LL;
    v27 = a4;
  }
  else
  {
    v31 = 1;
    v32 = 1;
    v36 = a5;
    v37 = a6;
    v38 = a7;
    v29 = 5767169;
    v30 = v14 + a1 + 32;
    v33 = v15;
    v34 = 4LL;
    v35 = a4;
  }
  do
  {
    if ( a3 )
      v17 = AccelDecompressBuffer(v20, v16);
    else
      v17 = AccelCompressBuffer(&v29, v16);
    v18 = v17;
  }
  while ( v17 == -1058078719 );
  result = 259LL;
  if ( v18 < 0 )
    return (unsigned int)v18;
  return result;
}
