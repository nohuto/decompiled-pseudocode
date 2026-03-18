/*
 * XREFs of ?GetLastInputType@CInputGlobals@@QEBA?AW4_LINP_SOURCE@@XZ @ 0x14014CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CInputGlobals::GetLastInputType(__int64 a1)
{
  unsigned int v2; // ebx

  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)a1, 0);
  v2 = *(_DWORD *)(a1 + 136);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
