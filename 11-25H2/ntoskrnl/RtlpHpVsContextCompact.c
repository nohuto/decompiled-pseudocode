/*
 * XREFs of RtlpHpVsContextCompact @ 0x1403C7B4C
 * Callers:
 *     RtlpHpHeapCompact @ 0x1403C7C84 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x1404EFFFC (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404F021C (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x1404F18B8 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextCompact(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rsi
  __int64 v4; // rbp
  _SLIST_HEADER *v5; // rdi
  __int64 v6; // rcx
  _BYTE v7[256]; // [rsp+20h] [rbp-128h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v7);
  if ( (_DWORD)result )
  {
    v3 = (unsigned __int16 *)v7;
    v4 = (unsigned int)result;
    do
    {
      v5 = (_SLIST_HEADER *)(a1 + ((unsigned __int64)*v3 << 6));
      if ( RtlpInterlockedFlushSList(v5 + 4) )
        RtlpHpVsSlotFreeList(a1, v5);
      result = *(__int16 *)(a1 + 6);
      if ( (_WORD)result )
        v6 = *(_QWORD *)(result + a1 + 32);
      else
        v6 = *(_QWORD *)(a1 + 88);
      if ( v6 )
        result = RtlpHpVsSlotCompactChunks(a1, v5);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
