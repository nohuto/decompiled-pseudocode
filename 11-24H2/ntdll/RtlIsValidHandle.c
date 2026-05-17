/*
 * XREFs of RtlIsValidHandle @ 0x1800AEF30
 * Callers:
 *     RtlpFreeHandleForAtom @ 0x1800AEEC8 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsValidHandle(__int64 a1, _BYTE *a2)
{
  if ( !a2
    || (unsigned __int64)a2 < *(_QWORD *)(a1 + 24)
    || (unsigned __int64)a2 >= *(_QWORD *)(a1 + 32)
    || ((*(_DWORD *)(a1 + 4) - 1) & (unsigned int)a2) != 0 )
  {
    return 0;
  }
  else
  {
    return *a2 & 1;
  }
}
