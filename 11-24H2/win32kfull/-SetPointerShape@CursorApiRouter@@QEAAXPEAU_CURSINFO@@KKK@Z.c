/*
 * XREFs of ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC
 * Callers:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     GreMovePointer @ 0x1400240B0 (GreMovePointer.c)
 *     GreSetPointer @ 0x1400285BC (GreSetPointer.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1401BB918 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140219AE8 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402D9D08 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x1402D9D6C (-DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402D9E20 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402D9E74 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1402DA510 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x1402DA5E0 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1402DAFA0 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 */

void __fastcall CursorApiRouter::SetPointerShape(
        CursorApiRouter *this,
        struct _CURSINFO *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebp
  unsigned int updated; // eax
  unsigned int v15; // r13d
  unsigned int v16; // edi
  CursorApiRouter *v17; // rcx
  CursorApiRouter *v18; // rcx
  char v19; // di
  bool v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-38h]
  int v27; // [rsp+28h] [rbp-30h]

  InputTraceLogging::Cursor::Api::SetPointerShape(a2, a3, a4);
  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0);
  *(_DWORD *)this = a3;
  *((_BYTE *)this + 13) = a2 == 0LL;
  if ( a2 && (a3 & 0x10) != 0 )
    *((_DWORD *)this + 1) |= 1u;
  else
    *((_DWORD *)this + 1) &= ~1u;
  v9 = *((_DWORD *)this + 1);
  v10 = v9 | 2;
  v11 = v9 & 0xFFFFFFFD;
  if ( !a4 )
    v10 = v11;
  v12 = a3 >> 5;
  *((_DWORD *)this + 1) = v10;
  LOBYTE(v12) = (a3 & 0x20) != 0;
  v13 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 2) = a4;
  updated = CursorApiRouter::UpdateRoutingState(this, v12);
  v15 = *((_DWORD *)this + 8);
  v16 = updated;
  W32ReleasePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0LL);
  CursorApiRouter::HandleRoutingStateAction(this, v16);
  if ( v15 == 1 )
  {
    if ( v13 == 2 )
    {
      CursorApiRouter::DestroyGreTrailsTimerIfExists((CursorApiRouter *)(v15 - 1));
      GreSetPointer(0LL, *(_DWORD *)this, 0, 0);
      CursorApiRouter::DwmMovePointer(this, *((unsigned int *)this + 6), *((unsigned int *)this + 7), 1LL, 0LL, 0LL);
    }
    if ( !*((_BYTE *)this + 12) )
      CursorApiRouter::DwmSetPointer(this, a2);
  }
  else if ( v15 == 2 )
  {
    if ( v13 == 1 )
    {
      CursorApiRouter::DwmSetPointer(this, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v17) )
        CursorApiRouter::EnsureGreTrailsTimer(v18);
      GreMovePointer(*((_QWORD *)this + 2), *((unsigned int *)this + 6), *((_DWORD *)this + 7), 1);
    }
    GreSetPointer(a2, a3, a4, a5);
  }
  if ( v15 != v13 )
  {
    v19 = IsInputProcessingActivated();
    v20 = (unsigned int)IsRemoteConnection() != 0;
    UserSessionState = W32GetUserSessionState(v22, v21);
    LOBYTE(v27) = v19;
    LOBYTE(v26) = v20;
    LOBYTE(v24) = 1;
    LOBYTE(v25) = *(_DWORD *)(UserSessionState + 19152) != 0;
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(v24, v13, v15, v25, v26, v27);
  }
}
