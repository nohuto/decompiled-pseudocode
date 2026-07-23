/*
 * XREFs of EncloseSubCondition @ 0x140864EB8
 * Callers:
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall EncloseSubCondition(wchar_t **a1)
{
  unsigned int v2; // ebx
  wchar_t *v3; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  size_t v7; // rcx
  unsigned __int64 v8; // rbp
  wchar_t *v9; // rax
  wchar_t *v10; // rsi

  v2 = 0;
  v3 = *a1;
  if ( *v3 != 40 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v3[v5] );
    v6 = 2LL * (unsigned int)v5;
    if ( v6 > 0xFFFFFFFF )
      return 534;
    v7 = (unsigned int)(v6 + 6);
    if ( (unsigned int)v7 < (unsigned int)v6 )
    {
      return 534;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = (wchar_t *)SddlpAlloc(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( RtlStringCchPrintfW(v9, v8 >> 1, L"(%ls)", *a1) >= 0 )
        {
          SddlpFree(*a1);
          *a1 = v10;
        }
        else
        {
          SddlpFree(v10);
          return 50;
        }
      }
      else
      {
        return 8;
      }
    }
  }
  return v2;
}
