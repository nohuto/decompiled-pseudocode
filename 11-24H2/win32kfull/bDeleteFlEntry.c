/*
 * XREFs of bDeleteFlEntry @ 0x14030C64C
 * Callers:
 *     GreEudcUnloadLinkW @ 0x14030C520 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B907C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1400B93D0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BFAE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     bUnloadEudcFont @ 0x1400FE308 (bUnloadEudcFont.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1401A20F0 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1401A7654 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401AEB94 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401B7374 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     vUnlinkEudcRFONTs @ 0x14030CF78 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x14030D064 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  wchar_t *v6; // rdi
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _FLENTRY *BaseFontEntry; // rax
  struct _FLENTRY *v14; // rbx
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct PFE **v16; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  bool v19; // zf
  struct PFE **v20; // rcx
  _QWORD *v21; // rcx
  void **v22; // rax
  wchar_t *Str1a; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 *v25[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h]
  unsigned __int16 *v27; // [rsp+88h] [rbp+48h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v27, 0x24Au);
  v6 = Str1a;
  if ( Str1a )
  {
    v7 = v27;
    if ( v27 )
    {
      v26 = 0LL;
      *(_OWORD *)v25 = 0LL;
      if ( (int)StringCchCopyW((char *)v27, 293LL, a2) >= 0 && ParseFontLinkEntry(v7, (struct FontLinkData *)v25) )
      {
        if ( (unsigned int)bAppendSysDirectory(v6, v7) )
        {
          v10 = *(_QWORD *)(W32GetSessionState(v9, v8) + 96);
          if ( _wcsicmp(v6, (const wchar_t *)(v10 + 13544)) )
          {
            if ( *(_QWORD *)(v10 + 14120) != v10 + 14120 )
            {
              BaseFontEntry = FindBaseFontEntry(Str1, v11, v12);
              v14 = BaseFontEntry;
              if ( BaseFontEntry )
              {
                LinkedFontEntry = FindLinkedFontEntry((struct _LIST_ENTRY *)BaseFontEntry + 1, v6, v25[1]);
                v16 = (struct PFE **)LinkedFontEntry;
                if ( LinkedFontEntry )
                {
                  if ( LODWORD(LinkedFontEntry[1].Flink) == a3 )
                  {
                    Flink = LinkedFontEntry->Flink;
                    if ( LinkedFontEntry->Flink->Blink == LinkedFontEntry )
                    {
                      Blink = LinkedFontEntry->Blink;
                      if ( (struct PFE **)Blink->Flink == v16 )
                      {
                        Blink->Flink = Flink;
                        Flink->Blink = Blink;
                        v19 = (*((_DWORD *)v14 + 25))-- == 1;
                        v20 = v16 + 4;
                        if ( !v19 )
                        {
                          vUnlinkEudcRFONTs(v20);
                          ++*((_DWORD *)v14 + 26);
                          goto LABEL_18;
                        }
                        vUnlinkEudcRFONTsAndPFEs(v20, v14);
                        v21 = *(_QWORD **)v14;
                        if ( *(struct _FLENTRY **)(*(_QWORD *)v14 + 8LL) == v14 )
                        {
                          v22 = (void **)*((_QWORD *)v14 + 1);
                          if ( *v22 == v14 )
                          {
                            *v22 = v21;
                            v21[1] = v22;
                            Win32FreePool(v14);
                            --*(_DWORD *)(v10 + 14112);
                            ++*(_DWORD *)(v10 + 14108);
LABEL_18:
                            bUnloadEudcFont(v16 + 4);
                            Win32FreePool(v16);
                            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v27);
                            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Str1a);
                            return 1LL;
                          }
                        }
                      }
                    }
                    __fastfail(3u);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v27);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Str1a);
  return 0LL;
}
