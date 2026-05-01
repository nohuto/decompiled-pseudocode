/*
 * XREFs of CCrashDetector::CLambdaHandler__lambda_92e83516b3218b4cf35de230f3d7f6be___::_scalar_deleting_destructor_ @ 0x1802FF0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler__lambda_92e83516b3218b4cf35de230f3d7f6be___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
