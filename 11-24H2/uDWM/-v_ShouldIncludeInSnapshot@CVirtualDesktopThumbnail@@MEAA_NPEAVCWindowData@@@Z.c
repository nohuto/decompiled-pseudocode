/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800BC750
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18006A350 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  struct CWindowData *v4; // rdi
  struct CWindowData *v5; // rax
  char v6; // bl
  __int64 v7; // rcx
  struct IDwmWindow *v8; // rax
  __int64 v9; // rdi
  char v10; // r11
  struct CWindowData *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)a2 + 738) & 0x40) != 0 )
    return 0;
  v12 = a2;
  v4 = a2;
  v5 = a2;
  v6 = 0;
  while ( (*((_DWORD *)a2 + 30) & 0x40000) == 0 )
  {
    v5 = (struct CWindowData *)*((_QWORD *)v5 + 75);
    if ( v5 && (*((_DWORD *)v5 + 29) & 0x10000000) != 0 )
    {
      v4 = v5;
      v12 = v5;
    }
    else
    {
      v7 = *((_QWORD *)v4 + 3);
      if ( !v7 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7) )
        break;
      v8 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 3) + 352LL))(*((_QWORD *)v4 + 3));
      if ( !v8 )
        return 0;
      v12 = 0LL;
      CWindowList::GetSyncedWindowData(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v8, 0, &v12);
      v4 = v12;
      v5 = v12;
    }
  }
  v9 = *((_QWORD *)this + 30);
  if ( (unsigned int)DynArray<CWindowData *,0>::Find(v9 + 136, &v12)
    || !(unsigned int)DynArray<CWindowData *,0>::Find(v9 + 168, &v12) && v10 )
  {
    return 1;
  }
  return v6;
}
