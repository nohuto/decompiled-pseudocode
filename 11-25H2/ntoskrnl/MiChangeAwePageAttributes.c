/*
 * XREFs of MiChangeAwePageAttributes @ 0x140675F48
 * Callers:
 *     MiResolveAwePageConflict @ 0x1406776E8 (MiResolveAwePageConflict.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 */

__int64 __fastcall MiChangeAwePageAttributes(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned __int8 v6; // dl
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 LinkedListPte; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  v6 = MiLockPageInline(a2);
  if ( (unsigned __int16)*(_DWORD *)(v5 + 32) > 2u
    || (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
    || (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) != 0 )
  {
    MiUnlockPage(v5, v6);
    return 3221225496LL;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 16);
    MiUnlockPage(v5, v6);
    v8 = 0LL;
    v15 = 0x7FFFFFFFFFLL;
    while ( v8 < v3 )
    {
      if ( (unsigned __int16)*(_DWORD *)(v5 + 32) > 2u || (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) != 0 )
        return 3221225496LL;
      v5 += 48LL;
      ++v8;
    }
    v9 = v5 + 16;
    if ( v3 )
    {
      v10 = (__int64 *)(-48LL * v3 + v9);
      v11 = v15;
      do
      {
        LinkedListPte = MiMakeLinkedListPte(v11);
        *v10 = LinkedListPte;
        v7 = LinkedListPte;
        v11 = v13;
        v15 = v13;
        v10 += 6;
        --v3;
      }
      while ( v3 );
    }
    MiChangePageAttributeBatch(&v15, a3, v7, 0);
    return 0LL;
  }
}
