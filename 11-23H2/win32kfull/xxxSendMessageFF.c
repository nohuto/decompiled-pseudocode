/*
 * XREFs of xxxSendMessageFF @ 0x1C0077720
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageEx @ 0x1C0077760 (xxxSendMessageEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageFF(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( a5 )
    return xxxSendMessageEx(0xFFFFFFFFFFFFFFFFuLL, a5);
  else
    return xxxSendTransformableMessageTimeout(0xFFFFFFFFFFFFFFFFuLL, 0, 0, 0LL, 0, 1);
}
