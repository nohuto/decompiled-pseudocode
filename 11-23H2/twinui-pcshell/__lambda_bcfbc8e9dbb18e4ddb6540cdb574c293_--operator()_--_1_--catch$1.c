/*
 * XREFs of __lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_::operator()_::_1_::catch$1 @ 0x1802501A1
 * Callers:
 *     <none>
 * Callees:
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1804E0BAC (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

__int64 __fastcall _lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_::operator()_::_1_::catch_1(__int64 a1, __int64 a2)
{
  const void *v3; // rax

  v3 = (const void *)std::current_exception(a2 + 32);
  __ExceptionPtrAssign(**(void ***)(a2 + 64), v3);
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}
