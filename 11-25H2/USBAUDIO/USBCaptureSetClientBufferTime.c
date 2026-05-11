/*
 * XREFs of USBCaptureSetClientBufferTime @ 0x14000B710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBCaptureSetClientBufferTime(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v2 = -1073741637;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  if ( !*(_BYTE *)(v3 + 128) && !*(_BYTE *)(v3 + 112) && (unsigned int)(a2 - 3) <= 7 )
  {
    *(_DWORD *)(v3 + 124) = a2;
    return 0;
  }
  return v2;
}
