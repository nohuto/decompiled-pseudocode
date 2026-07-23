/*
 * XREFs of RtlpWow64CtxFromAmd64 @ 0x1800D85C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFxToFnFrame @ 0x1800D88C0 (RtlFxToFnFrame.c)
 *     RtlpCopyXStateChunk @ 0x1800D9290 (RtlpCopyXStateChunk.c)
 */

__int64 __fastcall RtlpWow64CtxFromAmd64(int a1, _DWORD *a2, int *a3)
{
  int v3; // r15d
  unsigned int v4; // ebp
  int v5; // edi
  _DWORD *v9; // rdx
  bool v10; // r8
  __int64 v11; // r9
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  unsigned int v15; // eax
  __int64 result; // rax

  v3 = a2[12];
  v4 = 0;
  v5 = *a3;
  if ( (v3 & 0x100001) == 1048577 && (a1 & 0x10001) == 65537 )
  {
    v5 |= 0x10001u;
    a3[45] = a2[40];
    a3[47] = 35;
    a3[46] = a2[62];
    a3[50] = 43;
    a3[49] = a2[38];
    a3[48] = a2[17];
  }
  if ( (v3 & 0x100002) == 1048578 && (a1 & 0x10002) == 65538 )
  {
    v5 |= 0x10002u;
    a3[39] = a2[44];
    a3[40] = a2[42];
    a3[41] = a2[36];
    a3[42] = a2[34];
    a3[43] = a2[32];
    a3[44] = a2[30];
  }
  if ( (v3 & 0x100004) == 1048580 && (a1 & 0x10004) == 65540 )
  {
    a3[35] = 43;
    v5 |= 0x10004u;
    a3[37] = 43;
    a3[38] = 43;
    a3[36] = 83;
  }
  v9 = a2 + 64;
  v10 = (v3 & 0x100008) == 1048584;
  if ( (a1 & 0x10020) == 65568 && v10 )
  {
    v11 = 2LL;
    v12 = a3 + 51;
    v13 = a2 + 64;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    v5 |= 0x10020u;
    *v12 = *v13;
    v12[1] = v13[1];
  }
  if ( (a1 & 0x10008) == 65544 && v10 )
  {
    a3[34] = 0;
    RtlFxToFnFrame(a3 + 7, v9);
    v5 |= 0x10008u;
  }
  if ( (a1 & 0x10010) == 65552 && (v3 & 0x100010) == 1048592 )
  {
    if ( (a2[28] & 0x355LL) != 0 )
    {
      a3[1] = a2[18];
      a3[2] = a2[20];
      a3[3] = a2[22];
      a3[4] = a2[24];
      a3[5] = a2[26];
      v15 = a2[28] & 0xFFFF0155;
    }
    else
    {
      *(_QWORD *)(a3 + 1) = 0LL;
      v15 = 0;
      *(_QWORD *)(a3 + 3) = 0LL;
      a3[5] = 0;
    }
    a3[6] = v15;
    v5 |= 0x10010u;
  }
  if ( (a1 & 0x10040) == 0x10040 && (v3 & 0x100040) == 0x100040 && (v5 & 0x10040) == 0x10040 )
    v4 = RtlpCopyXStateChunk(1048640, (int)a3 + 716, (int)a3 + 716, (int)a2 + 1232, (__int64)(a2 + 308));
  if ( (a1 & 0x40000000) != 0 )
    v5 = v3 ^ (v3 ^ v5) & 0x67FFFFFF;
  result = v4;
  *a3 = v5;
  return result;
}
