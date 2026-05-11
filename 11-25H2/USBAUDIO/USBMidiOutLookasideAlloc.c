/*
 * XREFs of USBMidiOutLookasideAlloc @ 0x140041E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall USBMidiOutLookasideAlloc(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  _QWORD *result; // rax
  int v4; // ebx

  result = 0LL;
  v4 = NumberOfBytes;
  if ( PoolType == 512 )
  {
    result = (_QWORD *)ExAllocatePool2(64LL, NumberOfBytes + 184, 1096972357LL);
    if ( result )
    {
      result[2] = 0LL;
      result[3] = result + 7;
      result[6] = result + 23;
      *((_DWORD *)result + 9) = v4;
    }
  }
  return result;
}
