/*
 * XREFs of GrepReleasePublicPFTSemaphoreEx @ 0x14015CA30
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FDAC0 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepReleasePublicPFTSemaphoreEx(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = W32GetSessionState(a1, a2);
  v3 = *(_QWORD *)(*(_QWORD *)(result + 96) + 20344LL);
  if ( v3 )
    return GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
             v3);
  return result;
}
