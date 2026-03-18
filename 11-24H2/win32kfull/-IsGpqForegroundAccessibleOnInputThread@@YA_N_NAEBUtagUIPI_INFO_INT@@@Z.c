/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x140094D88
 * Callers:
 *     EditionLLMouseWheelHook @ 0x140094C70 (EditionLLMouseWheelHook.c)
 *     EditionLLMouseButtonHook @ 0x140095CD0 (EditionLLMouseButtonHook.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1401D22A0 (EditionxxxReportMouseBreakToAccessibility.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsGpqForegroundAccessibleOnInputThread(__int64 a1, const struct tagUIPI_INFO_INT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v7; // r8

  if ( !(_BYTE)a1 || !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) || *((_DWORD *)a2 + 3) )
    return 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  return UIPrivilegeIsolation::CheckAccess(
           a2,
           (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18944) + 472LL),
           v7);
}
