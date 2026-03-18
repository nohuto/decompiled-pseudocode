/*
 * XREFs of MiScrubActiveLargePage @ 0x1407EDB98
 * Callers:
 *     MiScrubLargePageRegions @ 0x1406EC948 (MiScrubLargePageRegions.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiScrubInterrupted @ 0x140489ED0 (MiScrubInterrupted.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiScrubProcessLargePage @ 0x1407EDCB0 (MiScrubProcessLargePage.c)
 */

void __fastcall MiScrubActiveLargePage(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  _KPROCESS *v8; // r9
  _OWORD v9[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( *(_QWORD *)(v3 + 64) )
  {
    do
    {
      if ( MiScrubInterrupted((__int64)a1) )
        break;
      KiStackAttachProcess(v8, 0, (__int64)v9);
      MiScrubProcessLargePage(a1, a2, a3);
      KiUnstackDetachProcess((__int64)v9, 0LL);
      ++v4;
    }
    while ( v4 < *(_QWORD *)(v3 + 64) );
  }
}
