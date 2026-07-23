/*
 * XREFs of RtlpCopyLegacyContextArm64 @ 0x1405E7A98
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     RtlpCopyLegacyContext @ 0x1403D5530 (RtlpCopyLegacyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyLegacyContextArm64(char a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // r10d
  __int64 v6; // r11
  _OWORD *v7; // rcx
  __int64 v8; // r8
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm1

  result = a3 & 0x67FFFFFF;
  *(_DWORD *)a2 = result;
  if ( a1 )
  {
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
    v5 = a3 | 0x4000C0;
    if ( (a3 & 0x400004) != 0x400004 )
      v5 = a3;
    if ( (v5 & 0x400080) == 4194432 || (v5 & 0x400040) == 4194368 )
    {
      v6 = 2LL;
      if ( (v5 & 0x400040) == 0x400040 )
      {
        v7 = (_OWORD *)(a4 + 272);
        *(_DWORD *)(a2 + 784) = *(_DWORD *)(a4 + 784);
        v8 = 2LL;
        *(_DWORD *)(a2 + 788) = *(_DWORD *)(a4 + 788);
        v9 = (_OWORD *)(a2 + 272);
        do
        {
          *v9 = *v7;
          v9[1] = v7[1];
          v9[2] = v7[2];
          v9[3] = v7[3];
          v9[4] = v7[4];
          v9[5] = v7[5];
          v9[6] = v7[6];
          v9 += 8;
          v10 = v7[7];
          v7 += 8;
          *(v9 - 1) = v10;
          --v8;
        }
        while ( v8 );
      }
      if ( (v5 & 0x400080) == 0x400080 )
      {
        v11 = (_OWORD *)(a2 + 528);
        v12 = (_OWORD *)(a4 + 528);
        do
        {
          *v11 = *v12;
          v11[1] = v12[1];
          v11[2] = v12[2];
          v11[3] = v12[3];
          v11[4] = v12[4];
          v11[5] = v12[5];
          v11[6] = v12[6];
          v11 += 8;
          v13 = v12[7];
          v12 += 8;
          *(v11 - 1) = v13;
          --v6;
        }
        while ( v6 );
      }
    }
    result = 4194312LL;
    if ( (v5 & 0x400008) == 0x400008 )
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
  }
  return result;
}
