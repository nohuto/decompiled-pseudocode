/*
 * XREFs of CmpGetNodeName @ 0x140C4BE6C
 * Callers:
 *     CmpAddDriverToList @ 0x140C4AC68 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140C4C108 (CmpIsLoadType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpCopyCompressedName @ 0x14087E8A0 (CmpCopyCompressedName.c)
 */

_WORD *__fastcall CmpGetNodeName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v5; // r9
  __int16 v6; // bx
  unsigned __int16 v7; // bx
  unsigned __int64 v8; // rax
  _WORD *v9; // rdi
  _WORD *v10; // rax

  if ( a3 )
    *a3 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
  {
    v7 = v6 + 2;
    v10 = (_WORD *)guard_dispatch_icall_no_overrides(v7, 0LL, 540167491LL, v5);
    v9 = v10;
    if ( v10 )
    {
      memmove(v10, (const void *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
      v9[((unsigned __int64)v7 >> 1) - 1] = 0;
      goto LABEL_9;
    }
    return 0LL;
  }
  v7 = 2 * (v6 + 1);
  v8 = guard_dispatch_icall_no_overrides(v7, 0LL, 540167491LL, v5);
  v9 = (_WORD *)v8;
  if ( !v8 )
    return 0LL;
  CmpCopyCompressedName(v8, v7, a2 + 76, *(unsigned __int16 *)(a2 + 72));
  v9[((unsigned __int64)v7 >> 1) - 1] = 0;
LABEL_9:
  if ( a3 )
    *a3 = v7;
  return v9;
}
