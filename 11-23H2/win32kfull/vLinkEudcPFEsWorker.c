/*
 * XREFs of vLinkEudcPFEsWorker @ 0x1C00CAE30
 * Callers:
 *     vLinkEudcPFEs @ 0x1C00CBCE0 (vLinkEudcPFEs.c)
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00CBA10 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00CBD9C (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vLinkEudcPFEsWorker(__int64 a1, struct PFF *a2)
{
  struct PFF *result; // rax
  unsigned int v4; // esi
  __int64 v5; // rbx
  int v6; // eax
  struct _FLENTRY *BaseFontEntry; // rcx
  struct PFF *v8; // rdi
  __int64 v9; // rax
  wchar_t *v10; // rbp
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  for ( result = SkipInvalidPff(a2); ; result = SkipInvalidPff(*((struct PFF **)v8 + 1)) )
  {
    v8 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = 0;
      if ( *((_DWORD *)result + 52) )
      {
        do
        {
          v5 = *((_QWORD *)v8 + v4 + 27);
          v13 = v5;
          if ( v5 )
          {
            if ( a1 )
            {
              v6 = PFEOBJ::bCheckFamilyName((PFEOBJ *)&v13, (const unsigned __int16 *)(a1 + 32), 0, 0LL);
              BaseFontEntry = (struct _FLENTRY *)a1;
              if ( !v6 )
                goto LABEL_17;
            }
            else
            {
              v9 = *(_QWORD *)(v5 + 32);
              v10 = (wchar_t *)(v9 + *(int *)(v9 + 8));
              v11 = *(_DWORD *)(v9 + 48) & 0x8000000;
              BaseFontEntry = FindBaseFontEntry(v10);
              if ( !BaseFontEntry )
              {
                if ( !v11 )
                  goto LABEL_17;
                v12 = -1LL;
                do
                  ++v12;
                while ( v10[v12] );
                BaseFontEntry = FindBaseFontEntry(&v10[v12 + 1]);
                if ( !BaseFontEntry )
                {
LABEL_17:
                  *(_QWORD *)(v5 + 120) = 0LL;
                  goto LABEL_8;
                }
              }
            }
            *(_QWORD *)(v5 + 120) = BaseFontEntry;
          }
LABEL_8:
          ++v4;
        }
        while ( v4 < *((_DWORD *)v8 + 52) );
      }
    }
  }
  return result;
}
