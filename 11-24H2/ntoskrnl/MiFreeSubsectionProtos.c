/*
 * XREFs of MiFreeSubsectionProtos @ 0x140A89E54
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(_QWORD **a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = (_QWORD *)*v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
