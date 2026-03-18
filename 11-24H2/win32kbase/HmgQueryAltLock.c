/*
 * XREFs of HmgQueryAltLock @ 0x140084650
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140086380 (vDynamicConvertNewSurfaceDCs.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgQueryAltLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return *((unsigned int *)GdiHandleManager::GetEntryObject(
                             *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL),
                             (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000)
         + 2);
}
