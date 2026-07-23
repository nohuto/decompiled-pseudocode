/*
 * XREFs of RtlpHpLfhContextTlsCleanup @ 0x1800FCC00
 * Callers:
 *     RtlpHpSegTlsCleanup @ 0x1800FCB90 (RtlpHpSegTlsCleanup.c)
 * Callees:
 *     RtlpHpLfhContextMetadataFree @ 0x180009A2C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4 (RtlpHpLfhPrivateSlotShutdown.c)
 */

void __fastcall RtlpHpLfhContextTlsCleanup(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int8 v7; // [rsp+4Ch] [rbp+14h]

  v7 = BYTE4(a2);
  RtlpHpLfhContextMetadataFree(a1, (unsigned __int64 *)&a1[8 * (unsigned __int64)WORD1(a2)], 1);
  if ( &a1[8 * (unsigned __int16)a2] != &a1[32 * (unsigned __int64)v7 + 184] )
  {
    v4 = &a1[8 * (unsigned __int16)a2];
    v5 = 128LL;
    do
    {
      if ( v4->0 )
      {
        v6 = (__int64)&a1[8 * (unsigned __int64)LOWORD(v4->Value)];
        if ( *(_WORD *)(v6 + 4) )
          RtlpHpLfhPrivateSlotShutdown(a1, v6, a2, 0);
      }
      v4 = (_RTL_SRWLOCK *)((char *)v4 + 2);
      --v5;
    }
    while ( v5 );
    RtlpHpLfhContextMetadataFree(a1, (unsigned __int64 *)&a1[8 * (unsigned __int16)a2], 0);
  }
}
