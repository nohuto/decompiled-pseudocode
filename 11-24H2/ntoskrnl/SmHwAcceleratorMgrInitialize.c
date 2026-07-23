/*
 * XREFs of SmHwAcceleratorMgrInitialize @ 0x140A99BF4
 * Callers:
 *     SmInitSystem @ 0x140C68AC8 (SmInitSystem.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_QWORD *__fastcall SmHwAcceleratorMgrInitialize(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  memset_0((void *)a1, 0, 0x530uLL);
  v2 = 64LL;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  result = (_QWORD *)(a1 + 24);
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v2;
  }
  while ( v2 );
  *(_DWORD *)(a1 + 1308) = 1;
  *(_DWORD *)(a1 + 1312) = 2;
  return result;
}
