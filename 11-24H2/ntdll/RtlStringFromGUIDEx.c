/*
 * XREFs of RtlStringFromGUIDEx @ 0x1800EA050
 * Callers:
 *     RtlpCreateIFEOKeyFilterKey @ 0x18008B48C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlStringFromGUID @ 0x1800F9450 (RtlStringFromGUID.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014375C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     swprintf_s @ 0x18012DDD0 (swprintf_s.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 Atom; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    Atom = RtlpAllocateAtom(78LL);
    *(_QWORD *)(a2 + 8) = Atom;
    if ( Atom )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t *const *)(a2 + 8),
        v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
