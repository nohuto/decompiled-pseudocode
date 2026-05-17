/*
 * XREFs of RtlTlsFree @ 0x1800B8370
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x1800B8168 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpEnvTlsAlloc @ 0x1800F2190 (RtlpHpEnvTlsAlloc.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlClearBits @ 0x1800B8440 (RtlClearBits.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlTlsFree(unsigned int a1)
{
  struct _PEB *v1; // rsi
  unsigned int v2; // ebx
  _RTL_BITMAP *TlsExpansionBitmap; // rsi
  unsigned int v4; // edi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = NtCurrentPeb();
  v2 = a1;
  if ( a1 >= 0x40 )
  {
    v2 = a1 - 64;
    if ( a1 - 64 >= 0x400 )
      return 3221225485LL;
    TlsExpansionBitmap = v1->TlsExpansionBitmap;
  }
  else
  {
    TlsExpansionBitmap = v1->TlsBitmap;
  }
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( v2 < TlsExpansionBitmap->SizeOfBitMap
    && (v4 = 0, _bittest((const signed __int32 *)&TlsExpansionBitmap->Buffer[(unsigned __int64)v2 >> 5], v2 & 0x1F))
    && (int)NtSetInformationThread(-2LL, 10LL, &v6) >= 0 )
  {
    RtlClearBits(TlsExpansionBitmap, v2, 1LL);
  }
  else
  {
    v4 = -1073741811;
  }
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  return v4;
}
