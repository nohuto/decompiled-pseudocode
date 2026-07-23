/*
 * XREFs of MiTbFlushSort @ 0x140690150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
