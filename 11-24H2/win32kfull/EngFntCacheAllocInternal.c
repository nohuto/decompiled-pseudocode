/*
 * XREFs of EngFntCacheAllocInternal @ 0x1402687A8
 * Callers:
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1401A1708 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     EngFntCacheAlloc @ 0x140302ED0 (EngFntCacheAlloc.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0x140302818 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x140302B78 (bReAllocCacheFile.c)
 *     EngCloseFNTCache @ 0x140302DE4 (EngCloseFNTCache.c)
 */

__int64 __fastcall EngFntCacheAllocInternal(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r14d
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  v3 = 0LL;
  *a3 = 0;
  v5 = a2;
  v8 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v9 = *(_QWORD *)(v8 + 19600);
  if ( !v9 || !a1 )
    return 0LL;
  if ( (*(_DWORD *)(v8 + 19592) & 2) != 0 )
  {
    v10 = (v5 + 7) & 0xFFFFFFF8;
    if ( (unsigned __int64)(v10 + *(_QWORD *)(v9 + 32)) < *(_QWORD *)(v9 + 40) || (unsigned int)bReAllocCacheFile(v5) )
    {
      v11 = (_DWORD *)SearchFntCacheNewLink(a1);
      v7 = v11;
      if ( v11 )
      {
        if ( v11[4] || v11[5] )
        {
          v11[6] |= 1u;
        }
        else
        {
          v12 = *(_QWORD *)(v8 + 19600);
          v3 = *(_QWORD *)(v12 + 32);
          *(_QWORD *)(v12 + 32) = v3 + v10;
          v11[4] = v5;
          v11[5] = v3 - *(_DWORD *)(*(_QWORD *)(v8 + 19600) + 24LL);
        }
        *(_DWORD *)(*(_QWORD *)(v8 + 19600) + 20LL) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(v9 + 16) |= 2u;
  }
  v13 = *(unsigned int *)(*(_QWORD *)(v8 + 19600) + 16LL);
  if ( (v13 & 1) != 0 )
  {
    EngCloseFNTCache(v13, v7);
    v3 = 0LL;
    *a3 = 1;
  }
  return v3;
}
