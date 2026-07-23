/*
 * XREFs of RtlpCopyLegacyContextArm @ 0x1405E7934
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     RtlpCopyLegacyContext @ 0x1403D5530 (RtlpCopyLegacyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyLegacyContextArm(char a1, __int64 a2, int a3, __int64 a4)
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
    if ( (a3 & 0x200001) == 0x200001 )
    {
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(a4 + 64);
      *(_DWORD *)(a2 + 56) = *(_DWORD *)(a4 + 56);
      *(_DWORD *)(a2 + 60) = *(_DWORD *)(a4 + 60);
      *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 68);
    }
    if ( (a3 & 0x200002) == 0x200002 )
    {
      *(_OWORD *)(a2 + 4) = *(_OWORD *)(a4 + 4);
      *(_OWORD *)(a2 + 20) = *(_OWORD *)(a4 + 20);
      *(_OWORD *)(a2 + 36) = *(_OWORD *)(a4 + 36);
      *(_DWORD *)(a2 + 52) = *(_DWORD *)(a4 + 52);
    }
    if ( (a3 & 0x200004) == 0x200004 )
    {
      v5 = (_OWORD *)(a4 + 80);
      v6 = 2LL;
      *(_DWORD *)(a2 + 72) = *(_DWORD *)(a4 + 72);
      v7 = (_OWORD *)(a2 + 80);
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
    result = 2097160LL;
    if ( (a3 & 0x200008) == 0x200008 )
    {
      *(_OWORD *)(a2 + 336) = *(_OWORD *)(a4 + 336);
      *(_OWORD *)(a2 + 352) = *(_OWORD *)(a4 + 352);
      *(_OWORD *)(a2 + 368) = *(_OWORD *)(a4 + 368);
      *(_OWORD *)(a2 + 384) = *(_OWORD *)(a4 + 384);
      *(_DWORD *)(a2 + 400) = *(_DWORD *)(a4 + 400);
      result = *(unsigned int *)(a4 + 404);
      *(_DWORD *)(a2 + 404) = result;
    }
  }
  return result;
}
