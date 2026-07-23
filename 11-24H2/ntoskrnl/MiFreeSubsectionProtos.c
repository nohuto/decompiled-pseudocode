/*
 * XREFs of MiFreeSubsectionProtos @ 0x140A86254
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
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
