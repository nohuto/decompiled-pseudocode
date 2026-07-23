/*
 * XREFs of RtlpHpLfhContextTlsCleanup @ 0x1800D5FC0
 * Callers:
 *     RtlpHpSegTlsCleanup @ 0x1800D5F50 (RtlpHpSegTlsCleanup.c)
 * Callees:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 */

__int64 __fastcall RtlpHpLfhContextTlsCleanup(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _WORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int8 v8; // [rsp+4Ch] [rbp+14h]

  v8 = BYTE4(a2);
  RtlpHpLfhContextMetadataFree(a1, a1 + ((unsigned __int64)WORD1(a2) << 6), 1LL);
  result = a1 + ((unsigned __int64)v8 << 8) + 1472;
  if ( a1 + ((unsigned __int16)a2 << 6) != result )
  {
    v5 = (_WORD *)(a1 + ((unsigned __int16)a2 << 6));
    v6 = 128LL;
    do
    {
      if ( *v5 )
      {
        v7 = a1 + ((unsigned __int64)(unsigned __int16)*v5 << 6);
        if ( *(_WORD *)(v7 + 4) )
          RtlpHpLfhPrivateSlotShutdown(a1, v7, a2, 0);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    return RtlpHpLfhContextMetadataFree(a1, a1 + ((unsigned __int16)a2 << 6), 0LL);
  }
  return result;
}
