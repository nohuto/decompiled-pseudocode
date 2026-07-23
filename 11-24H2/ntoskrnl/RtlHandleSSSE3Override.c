/*
 * XREFs of RtlHandleSSSE3Override @ 0x140B62D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHandleSSSE3Override(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 4) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 8) - 16);
    if ( (result & 0xFFFFFFFD) == 0 )
      *a2 = 0;
  }
  return result;
}
