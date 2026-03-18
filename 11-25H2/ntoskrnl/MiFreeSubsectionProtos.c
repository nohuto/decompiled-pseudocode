/*
 * XREFs of MiFreeSubsectionProtos @ 0x140A85348
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(_QWORD **a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 )
      break;
    *a1 = (_QWORD *)*v5;
    result = MiDeletePerSessionProtos(v5, a2, a3, a4);
  }
  return result;
}
