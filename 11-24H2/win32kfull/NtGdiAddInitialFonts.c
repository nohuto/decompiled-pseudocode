/*
 * XREFs of NtGdiAddInitialFonts @ 0x140151310
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401513A0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 NtGdiAddInitialFonts()
{
  __int64 CSRSSProcess; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  CSRSSProcess = UserGetCSRSSProcess();
  if ( PsGetCurrentProcess(v1) != CSRSSProcess )
    return 3221225506LL;
  *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 24208LL) = KeGetCurrentThread();
  v6 = !UmfdHostLifeTimeManager::AddInitialFonts() ? 0xC0000017 : 0;
  v10 = *(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96);
  result = v6;
  *(_QWORD *)(v10 + 24208) = KeGetCurrentThread();
  return result;
}
