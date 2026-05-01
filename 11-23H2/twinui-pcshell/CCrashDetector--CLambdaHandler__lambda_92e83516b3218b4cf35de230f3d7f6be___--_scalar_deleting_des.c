/*
 * XREFs of CCrashDetector::CLambdaHandler__lambda_92e83516b3218b4cf35de230f3d7f6be___::_scalar_deleting_destructor_ @ 0x1803BB1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler__lambda_92e83516b3218b4cf35de230f3d7f6be___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
