/*
 * XREFs of ?Clear@LastWokenThread@@YAXXZ @ 0x14006ADA0
 * Callers:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x14006A99C (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 */

void __fastcall LastWokenThread::Clear(LastWokenThread *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)GetCurrentProcessUserGlobals((__int64)this) + 382);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)v1, 0);
  if ( *(_BYTE *)(v1 + 17) )
  {
    ForegroundBoost::SetForegroundPriority(*(_QWORD *)(v1 + 8), 0LL, 16LL);
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_BYTE *)(v1 + 17) = 0;
  }
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_BYTE *)(v1 + 16) = 0;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v1, 0);
}
