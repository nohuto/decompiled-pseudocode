/*
 * XREFs of GreSfmGenerateMoveData @ 0x140330FDC
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14019C6A0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmGenerateMoveData(Gre::Base *a1)
{
  int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int)a1;
  v2 = Gre::Base::Globals(a1);
  SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v6, v2);
  *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3) + 96) + 84LL) = v1;
  if ( v6 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v6);
  return 0LL;
}
