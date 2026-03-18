/*
 * XREFs of ?CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z @ 0x1401FBC0C
 * Callers:
 *     CreatePhysicalMonitorWrap @ 0x1403226A0 (CreatePhysicalMonitorWrap.c)
 *     NtGdiGetPhysicalMonitorFromTarget @ 0x140322840 (NtGdiGetPhysicalMonitorFromTarget.c)
 * Callees:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1401FBC60 (-CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePhysicalMonitor(struct _LUID *a1, __int64 a2, void **a3)
{
  unsigned int v4; // edi
  __int64 SessionState; // rax

  v4 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  return CMonitorAPI::CreatePhysicalMonitor(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1, v4, a3);
}
