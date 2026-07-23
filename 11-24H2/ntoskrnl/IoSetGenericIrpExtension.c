/*
 * XREFs of IoSetGenericIrpExtension @ 0x14045EE30
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1406A0000 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  __int64 v5; // rcx
  char v6; // al
  __int64 v8; // rax

  if ( a3 > 4u )
    return 3221225485LL;
  if ( !a4 )
  {
    v8 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v8 && (*(_BYTE *)(v8 + 2) & 4) != 0 )
      return 3221225505LL;
  }
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_BYTE *)(a1 + 71);
  if ( v5 )
  {
    if ( v6 >= 0 )
    {
      *(_WORD *)(v5 + 2) |= 4u;
LABEL_8:
      memmove((void *)(v5 + 4), a2, a3);
      return 0LL;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 71) = v6 | 0x80;
  }
  v5 = a1 + 196;
  if ( a1 != -196 )
    goto LABEL_8;
  return 3221225626LL;
}
