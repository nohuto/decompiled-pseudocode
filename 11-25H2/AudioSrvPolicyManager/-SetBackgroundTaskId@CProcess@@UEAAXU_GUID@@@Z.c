/*
 * XREFs of ?SetBackgroundTaskId@CProcess@@UEAAXU_GUID@@@Z @ 0x180036E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetBackgroundTaskId(CProcess *this, struct _GUID *a2)
{
  *(struct _GUID *)((char *)this + 520) = *a2;
}
