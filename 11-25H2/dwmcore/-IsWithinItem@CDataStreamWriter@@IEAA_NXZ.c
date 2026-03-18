/*
 * XREFs of ?IsWithinItem@CDataStreamWriter@@IEAA_NXZ @ 0x180183CA8
 * Callers:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180183BC8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDataStreamWriter::IsWithinItem(CDataStreamWriter *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 6) || *((_DWORD *)this + 14) )
    return 1;
  return result;
}
