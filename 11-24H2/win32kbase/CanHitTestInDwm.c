/*
 * XREFs of CanHitTestInDwm @ 0x1400C5050
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C3C98 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

char __fastcall CanHitTestInDwm(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int CurrentThreadId; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v11; // rcx
  char v12; // al
  char v13; // cl

  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 18824) )
    return 0;
  v2 = *(_QWORD *)(W32GetUserSessionState(v1) + 18808);
  v3 = v2 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  LODWORD(v2) = *(_DWORD *)(v2 + 40);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != (_DWORD)v2 )
    return 0;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6) + 18808);
  v8 = v7 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7 + 8, 0LL);
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v7 != 2 )
    return 0;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v9);
  v11 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0);
  v13 = 1;
  if ( (v12 & 1) != 0 )
    return 0;
  return v13;
}
