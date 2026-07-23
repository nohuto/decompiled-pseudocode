/*
 * XREFs of RtlpCopyLegacyContextArm64 @ 0x180141EBC
 * Callers:
 *     RtlCopyContext @ 0x1800D8D40 (RtlCopyContext.c)
 *     RtlpCopyLegacyContext @ 0x1800D8FF4 (RtlpCopyLegacyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyLegacyContextArm64(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r10d
  __int64 v5; // r11
  _OWORD *v6; // rcx
  __int64 v7; // r8
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int64 result; // rax

  *(_DWORD *)a2 = a3 & 0x67FFFFFF;
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)a2 = *(_DWORD *)a4 ^ (a3 ^ *(_DWORD *)a4) & 0x67FFFFFF;
  if ( (a3 & 0x400001) == 0x400001 )
  {
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a4 + 264);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a4 + 256);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(a2 + 240) = *(_QWORD *)(a4 + 240);
    *(_QWORD *)(a2 + 248) = *(_QWORD *)(a4 + 248);
  }
  if ( (a3 & 0x400002) == 0x400002 )
  {
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a4 + 8);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(a4 + 24);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(a4 + 40);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(a4 + 56);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(a4 + 72);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(a4 + 88);
    *(_OWORD *)(a2 + 104) = *(_OWORD *)(a4 + 104);
    *(_OWORD *)(a2 + 120) = *(_OWORD *)(a4 + 120);
    *(_OWORD *)(a2 + 136) = *(_OWORD *)(a4 + 136);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a4 + 160);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a4 + 176);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a4 + 192);
    *(_OWORD *)(a2 + 208) = *(_OWORD *)(a4 + 208);
    *(_OWORD *)(a2 + 224) = *(_OWORD *)(a4 + 224);
  }
  if ( (a3 & 0x400010) == 0x400010 )
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a4 + 152);
  v4 = a3 | 0x4000C0;
  if ( (a3 & 0x400004) != 0x400004 )
    v4 = a3;
  if ( (v4 & 0x400080) == 4194432 || (v4 & 0x400040) == 4194368 )
  {
    v5 = 2LL;
    if ( (v4 & 0x400040) == 0x400040 )
    {
      v6 = (_OWORD *)(a4 + 272);
      *(_DWORD *)(a2 + 784) = *(_DWORD *)(a4 + 784);
      v7 = 2LL;
      *(_DWORD *)(a2 + 788) = *(_DWORD *)(a4 + 788);
      v8 = (_OWORD *)(a2 + 272);
      do
      {
        *v8 = *v6;
        v8[1] = v6[1];
        v8[2] = v6[2];
        v8[3] = v6[3];
        v8[4] = v6[4];
        v8[5] = v6[5];
        v8[6] = v6[6];
        v8 += 8;
        v9 = v6[7];
        v6 += 8;
        *(v8 - 1) = v9;
        --v7;
      }
      while ( v7 );
    }
    if ( (v4 & 0x400080) == 0x400080 )
    {
      v10 = (_OWORD *)(a2 + 528);
      v11 = (_OWORD *)(a4 + 528);
      do
      {
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
        v10[4] = v11[4];
        v10[5] = v11[5];
        v10[6] = v11[6];
        v10 += 8;
        v12 = v11[7];
        v11 += 8;
        *(v10 - 1) = v12;
        --v5;
      }
      while ( v5 );
    }
  }
  result = 4194312LL;
  if ( (v4 & 0x400008) == 0x400008 )
  {
    *(_OWORD *)(a2 + 824) = *(_OWORD *)(a4 + 824);
    *(_OWORD *)(a2 + 840) = *(_OWORD *)(a4 + 840);
    *(_OWORD *)(a2 + 856) = *(_OWORD *)(a4 + 856);
    *(_OWORD *)(a2 + 872) = *(_OWORD *)(a4 + 872);
    *(_OWORD *)(a2 + 792) = *(_OWORD *)(a4 + 792);
    *(_OWORD *)(a2 + 808) = *(_OWORD *)(a4 + 808);
    *(_OWORD *)(a2 + 896) = *(_OWORD *)(a4 + 896);
    result = *(_QWORD *)(a4 + 888);
    *(_QWORD *)(a2 + 888) = result;
  }
  return result;
}
