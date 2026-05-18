/*
 * XREFs of sub_180053DE0 @ 0x180053DE0
 * Callers:
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180053DE0(_Thrd_t *a1)
{
  int result; // eax
  _Thrd_t v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1->_Id || (v3 = *a1, (result = Thrd_detach(&v3)) != 0) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
    JUMPOUT(0x180053E2DLL);
  }
  *a1 = 0LL;
  return result;
}
