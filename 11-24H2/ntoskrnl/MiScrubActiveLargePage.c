/*
 * XREFs of MiScrubActiveLargePage @ 0x1407FE198
 * Callers:
 *     MiScrubLargePageRegions @ 0x1406F60D4 (MiScrubLargePageRegions.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiScrubInterrupted @ 0x1404845F4 (MiScrubInterrupted.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiScrubProcessLargePage @ 0x1407FE2B0 (MiScrubProcessLargePage.c)
 */

void __fastcall MiScrubActiveLargePage(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  _KPROCESS *v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v11[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( *(_QWORD *)(v3 + 64) )
  {
    do
    {
      if ( MiScrubInterrupted((__int64)a1) )
        break;
      KiStackAttachProcess(v8, 0, (__int64)v11);
      MiScrubProcessLargePage(a1, a2, a3);
      KiUnstackDetachProcess((__int64)v11, 0, v9, v10);
      ++v4;
    }
    while ( v4 < *(_QWORD *)(v3 + 64) );
  }
}
