/*
 * XREFs of ?finish@input_archive@tson@@QEAAJXZ @ 0x18021AFC8
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803C2648 (-deserialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::input_archive::finish(tson::input_archive *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 2);
  if ( (int)result >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)this + 24LL) || *((_BYTE *)this + 32) )
      return 2147483659LL;
    else
      return 0LL;
  }
  return result;
}
