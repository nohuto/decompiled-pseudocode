/*
 * XREFs of ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402DAF28
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DA830 (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CursorApiRouter::StoreNewCursorShape(
        CursorApiRouter *this,
        struct _MIT_CURSOR_MANAGEMENT_SHAPEHEADER *a2,
        int a3)
{
  void *v6; // rcx
  unsigned int v7; // edi

  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 48), 0);
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 )
    Win32FreePool(v6);
  *((_DWORD *)this + 16) = a3;
  v7 = *((_DWORD *)this + 17) + 1;
  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 17) = v7;
  W32ReleasePushLockExclusiveEx((CursorApiRouter *)((char *)this + 48), 0LL);
  return v7;
}
