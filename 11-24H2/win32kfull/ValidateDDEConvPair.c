/*
 * XREFs of ValidateDDEConvPair @ 0x1401D3900
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x140085AB8 (_PostMessageCheckIL.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140140F70 (NtUserPostMessage.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401D3948 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

struct tagWND *__fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *result; // rax
  unsigned int v4; // ebx

  result = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = FindDdeConv(result, a2) != 0LL;
    return (struct tagWND *)v4;
  }
  return result;
}
