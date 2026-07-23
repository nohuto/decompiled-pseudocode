/*
 * XREFs of ViFindMappedRegisterInFile @ 0x140B8A9AC
 * Callers:
 *     ViFlushDoubleBuffer @ 0x140B8A9E0 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegistersToFile @ 0x140B8AD14 (ViFreeMapRegistersToFile.c)
 *     ViSwap @ 0x140B8BE64 (ViSwap.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ViFindMappedRegisterInFile(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *result; // rax
  unsigned int i; // r9d

  result = (_QWORD *)(a1 + 88);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 28) )
      return 0LL;
    if ( a2 == *result )
      break;
    result += 4;
  }
  if ( a3 )
    *a3 = i;
  return result;
}
