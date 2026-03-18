/*
 * XREFs of CmpInitializeNameCache @ 0x1407CB768
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_QWORD *CmpInitializeNameCache()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = (_QWORD *)ExAllocatePool2(0x100uLL);
  CmpNameCacheTable = result;
  if ( !result )
    KeBugCheckEx(0x67u, 3uLL, 2uLL, 0LL, 0LL);
  v1 = 2048LL;
  do
  {
    *result = 0LL;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
