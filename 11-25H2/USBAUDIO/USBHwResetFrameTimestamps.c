/*
 * XREFs of USBHwResetFrameTimestamps @ 0x14000390C
 * Callers:
 *     USBType1CompleteCallback @ 0x140003520 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x140003A50 (USBCaptureCompleteCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwResetFrameTimestamps(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 152);
  if ( !*(_BYTE *)(result + 12) )
  {
    *(_DWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0LL;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 48) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
  }
  return result;
}
