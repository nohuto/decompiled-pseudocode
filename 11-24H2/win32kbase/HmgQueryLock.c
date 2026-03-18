/*
 * XREFs of HmgQueryLock @ 0x1401C23E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgQueryLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return *((unsigned __int16 *)GdiHandleManager::GetEntryObject(
                                 *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL),
                                 (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000)
         + 6);
}
