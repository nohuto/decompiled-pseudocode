/*
 * XREFs of CmpGetNodeName @ 0x140C4E008
 * Callers:
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140C4E2A4 (CmpIsLoadType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 */

_WORD *__fastcall CmpGetNodeName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int16 v5; // bx
  unsigned __int16 v6; // bx
  unsigned __int64 v7; // rax
  _WORD *v8; // rdi
  _WORD *v9; // rax

  if ( a3 )
    *a3 = 0;
  v5 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
  {
    v6 = v5 + 2;
    v9 = (_WORD *)guard_dispatch_icall_no_overrides(v6, 0LL);
    v8 = v9;
    if ( v9 )
    {
      memmove(v9, (const void *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
      v8[((unsigned __int64)v6 >> 1) - 1] = 0;
      goto LABEL_9;
    }
    return 0LL;
  }
  v6 = 2 * (v5 + 1);
  v7 = guard_dispatch_icall_no_overrides(v6, 0LL);
  v8 = (_WORD *)v7;
  if ( !v7 )
    return 0LL;
  CmpCopyCompressedName(v7, v6, a2 + 76, *(unsigned __int16 *)(a2 + 72));
  v8[((unsigned __int64)v6 >> 1) - 1] = 0;
LABEL_9:
  if ( a3 )
    *a3 = v6;
  return v8;
}
