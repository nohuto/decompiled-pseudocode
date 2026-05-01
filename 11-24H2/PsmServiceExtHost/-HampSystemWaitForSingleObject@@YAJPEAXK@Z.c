/*
 * XREFs of ?HampSystemWaitForSingleObject@@YAJPEAXK@Z @ 0x180066B70
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EF4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x18007F218 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall HampSystemWaitForSingleObject(void *a1)
{
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+18h] BYREF

  Timeout.QuadPart = 0LL;
  return NtWaitForSingleObject(a1, 0, &Timeout);
}
