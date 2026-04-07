/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x180008E80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  char v4; // bl
  struct CWindowData *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // al
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  struct CWindowData **v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  struct CWindowData **v15; // rdx
  struct IDwmWindow *v17; // rdx
  struct CWindowData *v18; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)a2 + 674) & 0x40) == 0 )
  {
    v4 = 0;
    v5 = a2;
    while ( (*((_DWORD *)a2 + 30) & 0x40000) == 0 )
    {
      v6 = *((_QWORD *)v5 + 75);
      if ( v6 && (*(_DWORD *)(v6 + 116) & 0x10000000) != 0 )
      {
        v5 = (struct CWindowData *)*((_QWORD *)v5 + 75);
      }
      else
      {
        v7 = *((_QWORD *)v5 + 3);
        if ( !v7 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7) )
          break;
        v17 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 3) + 360LL))(*((_QWORD *)v5 + 3));
        if ( !v17 )
          return 0;
        v18 = 0LL;
        if ( (int)CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                    v17,
                    0,
                    &v18) < 0 )
          break;
        v5 = v18;
      }
    }
    v8 = *((_QWORD *)this + 36);
    if ( *(_BYTE *)(v8 + 200) )
      v9 = (*((_BYTE *)a2 + 676) & 1) == 0;
    else
      v9 = 0;
    v10 = *(_DWORD *)(v8 + 160);
    v11 = 0;
    v12 = *(struct CWindowData ***)(v8 + 136);
    if ( v10 )
    {
      while ( v5 != *v12 )
      {
        ++v11;
        ++v12;
        if ( v11 >= v10 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v13 = *(_DWORD *)(v8 + 192);
      v14 = 0;
      v15 = *(struct CWindowData ***)(v8 + 168);
      if ( v13 )
      {
        while ( v5 != *v15 )
        {
          ++v14;
          ++v15;
          if ( v14 >= v13 )
            goto LABEL_10;
        }
        return v4;
      }
LABEL_10:
      if ( !v9 )
        return v4;
    }
    return 1;
  }
  return 0;
}
