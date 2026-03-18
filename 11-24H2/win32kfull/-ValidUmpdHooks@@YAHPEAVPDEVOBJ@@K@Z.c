/*
 * XREFs of ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x14026CAA8
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x140210A60 (NtGdiEngAssociateSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidUmpdHooks(struct PDEVOBJ *a1, int a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  if ( ((a2 & 1) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2824LL))
    && ((a2 & 2) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2840LL))
    && ((a2 & 4) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3240LL))
    && ((a2 & 8) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2864LL))
    && ((a2 & 0x20) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2792LL))
    && ((a2 & 0x40) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2800LL))
    && ((a2 & 0x80u) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2808LL))
    && ((a2 & 0x400) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2832LL))
    && ((a2 & 0x100) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2928LL))
    && ((a2 & 0x2000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3232LL))
    && ((a2 & 0x8000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3272LL))
    && ((a2 & 0x10000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3248LL))
    && ((a2 & 0x20000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3224LL)) )
  {
    return 1;
  }
  return v2;
}
