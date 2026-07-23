/*
 * XREFs of MiChangeAwePageAttributes @ 0x140682958
 * Callers:
 *     MiResolveAwePageConflict @ 0x1406840F8 (MiResolveAwePageConflict.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 */

__int64 __fastcall MiChangeAwePageAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rdi
  unsigned __int8 v7; // dl
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 LinkedListPte; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v6 = a2;
  v7 = MiLockPageInline(a2, a2, a3, a4);
  if ( (unsigned __int16)*(_DWORD *)(v6 + 32) > 2u
    || (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
    || (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 )
  {
    MiUnlockPage(v6, v7);
    return 3221225496LL;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 16);
    MiUnlockPage(v6, v7);
    v9 = 0LL;
    v16 = 0x7FFFFFFFFFLL;
    while ( v9 < v4 )
    {
      if ( (unsigned __int16)*(_DWORD *)(v6 + 32) > 2u || (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 )
        return 3221225496LL;
      v6 += 48LL;
      ++v9;
    }
    v10 = v6 + 16;
    if ( v4 )
    {
      v11 = (__int64 *)(-48LL * v4 + v10);
      v12 = v16;
      do
      {
        LinkedListPte = MiMakeLinkedListPte(v12);
        *v11 = LinkedListPte;
        v8 = LinkedListPte;
        v12 = v14;
        v16 = v14;
        v11 += 6;
        --v4;
      }
      while ( v4 );
    }
    MiChangePageAttributeBatch(&v16, v5, v8, 0);
    return 0LL;
  }
}
