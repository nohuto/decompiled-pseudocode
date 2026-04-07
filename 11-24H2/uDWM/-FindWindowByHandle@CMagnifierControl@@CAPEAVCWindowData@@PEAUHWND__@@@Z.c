/*
 * XREFs of ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800C8B2C
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800C8B70 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CWindowData *__fastcall CMagnifierControl::FindWindowByHandle(HWND a1)
{
  __int64 v1; // rdx
  struct CWindowData *result; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         a1);
  result = 0LL;
  if ( v1 )
    return (struct CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
