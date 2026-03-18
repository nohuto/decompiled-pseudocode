/*
 * XREFs of ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x140199764
 * Callers:
 *     NtGdiRemoveFontResourceW @ 0x140198E10 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FDAC0 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1400FDD28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FDDF8 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

_BOOL8 __fastcall GrepRemoveFontResource(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  BOOL v7; // esi
  unsigned int v10; // r14d
  __int64 *v12; // rbx
  __int64 v13; // rax
  struct PFF *v14; // rax
  struct PFF **v16; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-30h] BYREF

  v16 = 0LL;
  v7 = 0;
  v10 = a2;
  if ( (a4 & 4) != 0 && a5 != (unsigned int)PsGetCurrentThreadId() )
    return 0LL;
  if ( (a4 & 8) != 0 && a5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    return 0LL;
  v12 = *(__int64 **)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v13 = (a4 & 0x1C) != 0 ? v12[2551] : v12[2552];
  v17[0] = v13;
  if ( !v13 )
    return 0LL;
  GreAcquireSemaphore<17,>((__int64)(v12 + 609));
  v14 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v17, a1, v10, a3, a6, a7, &v16, 0);
  if ( v14 )
  {
    v7 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v17, v14, v16, a4);
    if ( v7 )
      GreQuerySystemTime(v12 + 2554);
  }
  else
  {
    GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v12[2543]);
  }
  return v7;
}
