/*
 * XREFs of CmpInitializeNameCache @ 0x1407DB47C
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *CmpInitializeNameCache()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = (_QWORD *)ExAllocatePool2(0x100uLL, 0x8000uLL, 0x61434D43u);
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
