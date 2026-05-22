/*
 * XREFs of ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800A4B6C
 * Callers:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800A4D24 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x1800A5748 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800A5E3C (-search@input_archive@tson@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall tson::read_buffer::advance(tson::read_buffer *this)
{
  unsigned __int8 *result; // rax

  result = (unsigned __int8 *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)result >= *((_QWORD *)this + 2) )
  {
    *((_BYTE *)this + 24) = 1;
    return 0LL;
  }
  else
  {
    *((_QWORD *)this + 1) = result + 1;
  }
  return result;
}
