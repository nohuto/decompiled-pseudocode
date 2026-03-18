/*
 * XREFs of TextCopy @ 0x14018D23C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall TextCopy(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // r9
  __int64 v6; // rbx

  v3 = a3;
  if ( a3 )
  {
    v5 = *(_DWORD *)a1 >> 1;
    if ( (unsigned int)v5 >= a3 - 1 )
      v5 = a3 - 1;
    v3 = v5;
    v6 = 2 * v5;
    memmove(a2, *(const void **)(a1 + 8), 2 * v5);
    *(_WORD *)&a2[v6] = 0;
  }
  return v3;
}
