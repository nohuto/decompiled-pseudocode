/*
 * XREFs of RtlpWow64CtxToAmd64 @ 0x140A47CC4
 * Callers:
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x1403D5270 (RtlpCopyXStateChunk.c)
 *     RtlFnToFxFrame @ 0x14045F168 (RtlFnToFxFrame.c)
 */

__int64 __fastcall RtlpWow64CtxToAmd64(unsigned int a1, _DWORD *a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // r15d
  int v5; // ebp
  unsigned int v8; // esi
  _QWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int *v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int128 v17; // xmm1

  v3 = *a2;
  v4 = 0;
  v5 = *(_DWORD *)(a3 + 48);
  v8 = a1;
  if ( *(_WORD *)(a3 + 56) != 35 )
    v8 = a1 & 0xFFFEFFF8 | 0x10000;
  if ( (v8 & 0x10001) == 0x10001 && (v3 & 0x10001) == 0x10001 )
  {
    *(_WORD *)(a3 + 56) = 35;
    v5 |= 0x100001u;
    *(_WORD *)(a3 + 66) = 43;
    *(_QWORD *)(a3 + 248) = (unsigned int)a2[46];
    *(_QWORD *)(a3 + 160) = (unsigned int)a2[45];
    *(_QWORD *)(a3 + 152) = (unsigned int)a2[49];
    *(_DWORD *)(a3 + 68) = a2[48];
  }
  if ( (v8 & 0x10002) == 0x10002 && (v3 & 0x10002) == 0x10002 )
  {
    v5 |= 0x100002u;
    *(_QWORD *)(a3 + 176) = (unsigned int)a2[39];
    *(_QWORD *)(a3 + 168) = (unsigned int)a2[40];
    *(_QWORD *)(a3 + 144) = (unsigned int)a2[41];
    *(_QWORD *)(a3 + 136) = (unsigned int)a2[42];
    *(_QWORD *)(a3 + 128) = (unsigned int)a2[43];
    *(_QWORD *)(a3 + 120) = (unsigned int)a2[44];
  }
  if ( (v8 & 0x10020) == 0x10020 && (v3 & 0x10020) == 0x10020 )
  {
    v14 = 2LL;
    v15 = (_OWORD *)(a3 + 256);
    v16 = a2 + 51;
    do
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      v15 += 8;
      v17 = v16[7];
      v16 += 8;
      *(v15 - 1) = v17;
      --v14;
    }
    while ( v14 );
    v5 |= 0x100008u;
    *v15 = *v16;
    v15[1] = v16[1];
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a3 + 280);
  }
  if ( (v8 & 0x10008) == 0x10008 && (v3 & 0x10008) == 0x10008 )
  {
    RtlFnToFxFrame(a3 + 256, (__int64)(a2 + 7));
    v5 |= 0x100008u;
  }
  if ( (v8 & v3 & 0x10010) == 0x10010 )
  {
    v9 = (_QWORD *)(a3 + 72);
    v10 = 6LL;
    v11 = a2 + 1;
    do
    {
      v12 = *v11++;
      *v9++ = v12;
      --v10;
    }
    while ( v10 );
    if ( (a2[6] & 0x55) == 0 && (a2[1] || a2[2] || a2[3] || a2[4]) )
      *(_QWORD *)(a3 + 112) |= 0x100uLL;
    v5 |= 0x100010u;
  }
  if ( (v8 & 0x10040) == 0x10040 && (v5 & 0x100040) == 1048640 && (v3 & 0x10040) == 65600 )
    v4 = RtlpCopyXStateChunk(1, a3 + 1232, a3 + 1232, (__int64)(a2 + 179), (__int64)(a2 + 179));
  result = v4;
  *(_DWORD *)(a3 + 48) = v5;
  return result;
}
