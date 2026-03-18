/*
 * XREFs of ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _anonymous_namespace_::MoveCursor @ 0x140092650 (_anonymous_namespace_--MoveCursor.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140076B48 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizesIndexFromDpi @ 0x140078FDC (GetCursorSizesIndexFromDpi.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140094688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?ChangeSize@Cursor@InputTraceLogging@@SAXII@Z @ 0x14027109C (-ChangeSize@Cursor@InputTraceLogging@@SAXII@Z.c)
 *     ?UnLock@CEResourceLock@@QEAAXXZ @ 0x14027156C (-UnLock@CEResourceLock@@QEAAXXZ.c)
 */

void __fastcall CCursorSizes::zzzUpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  char *v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // bp
  __int128 v9; // xmm6
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  bool v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = (char *)this + 64;
  if ( !a3 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v6 = (unsigned __int64)*a2;
    if ( a2->x >= *((_DWORD *)this + 2) && (int)v6 < *((_DWORD *)this + 4) )
    {
      v7 = HIDWORD(v6);
      if ( (int)v7 >= *((_DWORD *)this + 3) && (int)v7 < *((_DWORD *)this + 5) )
      {
        if ( PsGetCurrentThreadId() == *((HANDLE *)v4 + 1) )
        {
          *((_QWORD *)v4 + 1) = 0LL;
          W32ReleasePushLockExclusive((struct W32_PUSH_LOCK *)v4);
        }
        else
        {
          ExReleasePushLockSharedEx(v4, 0LL);
          KeLeaveCriticalRegion();
        }
        return;
      }
    }
    CPushLock::ReleaseLock((CPushLock *)v4);
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  CLockedInputSpaceRegion::CLockedInputSpaceRegion((CLockedInputSpaceRegion *)v18);
  if ( (unsigned __int8)InputConfig::Mouse::RegionFromPoint(*a2, v18, 0LL) )
  {
    v8 = 1;
    v9 = *(_OWORD *)v18[0];
    v10 = *(unsigned __int16 *)(v18[0] + 20LL);
  }
  CEResourceLock::UnLock((CEResourceLock *)v18[1]);
  if ( v8 )
  {
    CPushLock::AcquireLockExclusive((CPushLock *)v4);
    *(_OWORD *)((char *)this + 8) = v9;
    v11 = *((_DWORD *)this + 2 * (unsigned int)GetCursorSizesIndexFromDpi(v10) + 7);
    if ( v11 == *(_DWORD *)this )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      InputTraceLogging::Cursor::ChangeSize(v11, *(_DWORD *)this);
      *(_DWORD *)this = v11;
    }
    CPushLock::ReleaseLock((CPushLock *)v4);
    if ( v12 )
    {
      v19 = IS_USERCRIT_OWNED_EXCLUSIVE(v14, v13, v15);
      if ( !v19 )
        EnterCrit(1LL, 0LL);
      zzzUpdateCursorImage(v17, v16);
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
    }
  }
}
