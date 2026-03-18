/*
 * XREFs of ?PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z @ 0x1401EB334
 * Callers:
 *     UmfdLoadFontFileView @ 0x1400B76D4 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0x140302818 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFntCacheDrvAndFileInfo(
        unsigned int a1,
        HDEV a2,
        __int16 a3,
        struct FONTFILEVIEW **a4,
        unsigned int a5)
{
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int i; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax

  v9 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v10 = *(_DWORD *)(v9 + 19592);
  if ( (v10 & 3) != 0 )
  {
    v11 = *(_QWORD *)(v9 + 19600);
    if ( v11 )
    {
      if ( a1 )
      {
        for ( i = 0; i < 7; ++i )
        {
          if ( a2 == *(HDEV *)(v9 + 8LL * i + 19624) )
          {
            if ( i )
            {
              if ( (v10 & 2) != 0 )
              {
                v13 = SearchFntCacheNewLink(a1);
                if ( v13 )
                {
                  if ( *(_WORD *)(v13 + 14) )
                  {
                    *(_DWORD *)(v13 + 24) |= 1u;
                  }
                  else
                  {
                    *(_WORD *)(v13 + 12) = i;
                    *(_WORD *)(v13 + 14) = a3;
                    if ( a5 )
                    {
                      v14 = (_QWORD *)(v13 + 40);
                      v15 = a5;
                      do
                      {
                        *((_DWORD *)v14 - 2) = *((_DWORD *)*a4 + 6);
                        v16 = *a4++;
                        *v14 = *v16;
                        v14 += 2;
                        --v15;
                      }
                      while ( v15 );
                    }
                  }
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)(v9 + 19600) + 16LL) |= 2u;
                }
                *(_DWORD *)(*(_QWORD *)(v9 + 19600) + 20LL) = 1;
              }
              else
              {
                *(_DWORD *)(v11 + 16) |= 2u;
              }
            }
            return;
          }
        }
      }
    }
  }
}
