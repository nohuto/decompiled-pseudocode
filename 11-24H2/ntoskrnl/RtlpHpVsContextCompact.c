/*
 * XREFs of RtlpHpVsContextCompact @ 0x1402B3A2C
 * Callers:
 *     RtlpHpHeapCompact @ 0x1402B39E4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x1402B3510 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1402B3AF0 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x1402B48AC (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextCompact(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rsi
  __int64 v4; // rbp
  union _SLIST_HEADER *v5; // rdi
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rcx
  _BYTE v8[256]; // [rsp+20h] [rbp-128h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v8);
  if ( (_DWORD)result )
  {
    v3 = (unsigned __int16 *)v8;
    v4 = (unsigned int)result;
    do
    {
      v5 = (union _SLIST_HEADER *)(a1 + ((unsigned __int64)*v3 << 6));
      v6 = RtlpInterlockedFlushSList(v5 + 4);
      if ( v6 )
        RtlpHpVsSlotFreeList(a1, (__int64)v5, v6);
      result = *(__int16 *)(a1 + 6);
      if ( (_WORD)result )
        v7 = *(_QWORD *)(result + a1 + 32);
      else
        v7 = *(_QWORD *)(a1 + 88);
      if ( v7 )
        result = RtlpHpVsSlotCompactChunks(a1, v5);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
