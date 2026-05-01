/*
 * XREFs of ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1801834DC
 * Callers:
 *     ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x1801833A4 (--0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z.c)
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x180183458 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18028E47C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
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
