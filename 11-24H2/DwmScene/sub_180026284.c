/*
 * XREFs of sub_180026284 @ 0x180026284
 * Callers:
 *     sub_180026284 @ 0x180026284 (sub_180026284.c)
 *     sub_180026614 @ 0x180026614 (sub_180026614.c)
 *     sub_180027E9C @ 0x180027E9C (sub_180027E9C.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180026284 @ 0x180026284 (sub_180026284.c)
 */

__int64 __fastcall sub_180026284(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180026284(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_180010234(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
