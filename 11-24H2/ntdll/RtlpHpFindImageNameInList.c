/*
 * XREFs of RtlpHpFindImageNameInList @ 0x1800094E4
 * Callers:
 *     RtlpHpOptIntoSegmentHeap @ 0x180009E48 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     _wcsnicmp @ 0x180120FE0 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpFindImageNameInList(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v4; // edi
  _WORD *i; // rcx
  const wchar_t *v6; // rsi
  unsigned int j; // ebx
  __int64 v9; // rax

  v2 = *((_QWORD *)a1 + 1);
  v4 = 0;
  for ( i = (_WORD *)(v2 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v2; --i )
  {
    if ( *i == 92 )
    {
      if ( v4 )
      {
        v6 = i + 1;
        if ( i != (_WORD *)-2LL )
        {
          for ( j = 0; j < 0x18; ++j )
          {
            if ( !wcsnicmp(v6, *(const wchar_t **)(a2 + 8LL * j), v4) )
            {
              v9 = -1LL;
              do
                ++v9;
              while ( *(_WORD *)(*(_QWORD *)(a2 + 8LL * j) + 2 * v9) );
              if ( v4 == v9 )
                return 1LL;
            }
          }
        }
      }
      return 0LL;
    }
    ++v4;
  }
  return 0LL;
}
