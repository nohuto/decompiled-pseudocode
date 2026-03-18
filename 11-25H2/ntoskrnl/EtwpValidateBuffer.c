/*
 * XREFs of EtwpValidateBuffer @ 0x14045BE30
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpValidateBuffer(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( *(_DWORD *)(a1 + 4) != (_DWORD)result )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, *(unsigned int *)(a1 + 4), *a2);
  return result;
}
