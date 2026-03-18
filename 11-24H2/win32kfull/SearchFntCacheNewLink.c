/*
 * XREFs of SearchFntCacheNewLink @ 0x140302818
 * Callers:
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x140114890 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z @ 0x1401EB334 (-PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z.c)
 *     EngFntCacheAllocInternal @ 0x1402687A8 (EngFntCacheAllocInternal.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1401AE9F0 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x1403028F4 (bFntCacheCreateHLink.c)
 */

unsigned int *__fastcall SearchFntCacheNewLink(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r8
  unsigned int *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = *(_QWORD *)(v3 + 19600);
  SearchFNTCacheHlink(a1, &v11, *(_QWORD *)v4);
  v6 = v11;
  if ( !v11 )
  {
    if ( *(_DWORD *)(v4 + 8) < *(_DWORD *)(v5 + 16) && (unsigned int)bFntCacheCreateHLink(a1) )
    {
      v7 = *(__int64 **)(v3 + 19600);
      v8 = *v7;
      v9 = 80LL * *((unsigned int *)v7 + 2);
      v6 = (unsigned int *)(v9 + *v7 + 320);
      *v6 = a1;
      *(_DWORD *)(v9 + v8 + 324) = 0;
      *(_DWORD *)(v9 + v8 + 328) = -1;
      *(_QWORD *)(v9 + v8 + 336) = 0LL;
      *(_DWORD *)(v9 + v8 + 344) = 0;
      *(_DWORD *)(v9 + v8 + 332) = 0;
      ++*(_DWORD *)(*(_QWORD *)(v3 + 19600) + 8LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(v3 + 19600) + 16LL) |= 2u;
    }
  }
  return v6;
}
