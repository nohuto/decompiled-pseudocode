/*
 * XREFs of sub_180053F40 @ 0x180053F40
 * Callers:
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180053F40(_Thrd_t *a1)
{
  int result; // eax
  _Thrd_t v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1->_Id || (v3 = *a1, (result = Thrd_detach(&v3)) != 0) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
    JUMPOUT(0x180053F8DLL);
  }
  *a1 = 0LL;
  return result;
}
