/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x14000D8C0
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x14000DABC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x14000D050 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 */

void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  char *v4; // rsi
  __int64 v5; // r15
  struct _ENTRY *EntryFromObject; // r14
  unsigned __int64 v7; // rax

  v4 = (char *)this + 976;
  if ( *(_DWORD *)(*((_QWORD *)this + 122) + 136LL) != a2 )
  {
    v5 = *(_QWORD *)(W32GetSessionState() + 88);
    EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(v5 + 5672), this);
    if ( EntryFromObject )
    {
      if ( v5 != -2176 )
        RIMLockShared(v5 + 2176);
      if ( ((*((_DWORD *)EntryFromObject + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v7 = GreDecodeUserModePointer(*((void **)EntryFromObject + 2));
        if ( v7 )
          *(_DWORD *)(v7 + 136) = a2;
      }
      if ( v5 != -2176 )
        W32ReleasePushLockShared((struct W32_PUSH_LOCK *)(v5 + 2176));
    }
    *(_DWORD *)(*(_QWORD *)v4 + 136LL) = a2;
  }
}
