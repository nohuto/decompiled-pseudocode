/*
 * XREFs of RtlpCopyLegacyContextArm64 @ 0x1405DE3F8
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14025F9E0 (RtlpCopyExtendedContext.c)
 *     RtlpCopyLegacyContext @ 0x1402600D0 (RtlpCopyLegacyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyLegacyContextArm64(char a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _OWORD *v5; // rcx
  __int64 v6; // r10
  _OWORD *v7; // rax
  __int128 v8; // xmm1

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
    if ( (a3 & 0x400004) == 0x400004 )
    {
      v5 = (_OWORD *)(a4 + 272);
      *(_DWORD *)(a2 + 784) = *(_DWORD *)(a4 + 784);
      v6 = 4LL;
      *(_DWORD *)(a2 + 788) = *(_DWORD *)(a4 + 788);
      v7 = (_OWORD *)(a2 + 272);
      do
      {
        *v7 = *v5;
        v7[1] = v5[1];
        v7[2] = v5[2];
        v7[3] = v5[3];
        v7[4] = v5[4];
        v7[5] = v5[5];
        v7[6] = v5[6];
        v7 += 8;
        v8 = v5[7];
        v5 += 8;
        *(v7 - 1) = v8;
        --v6;
      }
      while ( v6 );
    }
    result = 4194312LL;
    if ( (a3 & 0x400008) == 0x400008 )
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
