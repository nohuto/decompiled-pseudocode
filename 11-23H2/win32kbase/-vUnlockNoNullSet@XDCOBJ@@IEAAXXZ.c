/*
 * XREFs of ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C
 * Callers:
 *     hbmSelectBitmap @ 0x1C0002FE0 (hbmSelectBitmap.c)
 *     GreSelectBitmap @ 0x1C003AF40 (GreSelectBitmap.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0156138 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 * Callees:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C003FDC4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0043AB0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall XDCOBJ::vUnlockNoNullSet(DC **this)
{
  DC *v2; // rsi
  int v3; // r9d
  BOOL v4; // ebp
  HDC v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  GdiHandleManager *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  struct OBJECT *v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+38h] [rbp-20h]

  if ( *this )
  {
    if ( *((_DWORD *)this + 2) && (*((_DWORD *)*this + 11) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(this);
      *((_DWORD *)*this + 11) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    v2 = *this;
    v3 = *((_DWORD *)this + 3);
    v4 = 0;
    v17 = 0LL;
    v18 = 0;
    v5 = *(HDC *)v2;
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)&v17,
      (unsigned __int16)*(_QWORD *)v2 | ((unsigned int)*(_QWORD *)v2 >> 8) & 0xFF0000,
      0,
      v3,
      1);
    if ( v18 )
    {
      if ( (*(_BYTE *)(v17 + 15) & 8) != 0 && !*((_DWORD *)v2 + 2) )
        v4 = *((_WORD *)v2 + 6) == 1;
      _InterlockedDecrement((volatile signed __int32 *)v2 + 3);
      v7 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
      v8 = *(GdiHandleManager **)(v7 + 8008);
      v9 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
      v10 = GdiHandleManager::DecodeIndex(v9, *(_DWORD *)v17 & 0xFFFFFF);
      v11 = *((_QWORD *)v9 + 2);
      v12 = v10;
      v13 = *(_DWORD *)(v11 + 2056);
      if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
        goto LABEL_17;
      v14 = v10 >= v13 ? ((v10 - v13) >> 16) + 1 : 0LL;
      v15 = *(_QWORD *)(v11 + 8 * v14 + 8);
      if ( (_DWORD)v14 )
        v12 = ((1 - (_DWORD)v14) << 16) - v13 + (unsigned int)v12;
      if ( (unsigned int)v12 >= *(_DWORD *)(v15 + 20) )
LABEL_17:
        v16 = 0LL;
      else
        v16 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
      GdiHandleManager::ReleaseEntryLock(v8, v16);
      v17 = 0LL;
      v18 = 0;
      KeLeaveCriticalRegion();
    }
    if ( v4 )
      GrepDeleteDC(v5, 0x2000000u);
  }
}
