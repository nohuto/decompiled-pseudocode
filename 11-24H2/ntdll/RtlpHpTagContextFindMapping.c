/*
 * XREFs of RtlpHpTagContextFindMapping @ 0x1800A1F60
 * Callers:
 *     RtlpHpTagQueryTags @ 0x1800A1A5C (RtlpHpTagQueryTags.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1D38 (RtlpHpTagContextAllocateTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpTagContextFindMapping(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rcx

  v3 = *(_DWORD *)(a1 + 12);
  result = 0LL;
  v6 = a3 & (-1LL << (v3 & 0x1F));
LABEL_2:
  if ( result )
    goto LABEL_5;
  if ( v3 >> 5 )
  {
    result = *(_QWORD *)(a1 + 16)
           + 8LL
           * ((HIBYTE(v6)
             + 37
             * (BYTE6(v6)
              + 37
              * (BYTE5(v6)
               + 37
               * (BYTE4(v6)
                + 37
                * ((((unsigned int)a3 & (-1 << (v3 & 0x1F))) >> 24)
                 + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((v3 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      result = *(_QWORD *)result;
      if ( (result & 1) != 0 )
        break;
      if ( v6 == ((-1LL << (v3 & 0x1F)) & *(_QWORD *)(result + 8)) )
      {
        v7 = *a2 - *(_QWORD *)(result + 16);
        if ( *a2 == *(_QWORD *)(result + 16) )
          v7 = a2[1] - *(_QWORD *)(result + 24);
        if ( v7 )
          goto LABEL_2;
        if ( result )
          return result;
        return 0LL;
      }
    }
  }
  return 0LL;
}
