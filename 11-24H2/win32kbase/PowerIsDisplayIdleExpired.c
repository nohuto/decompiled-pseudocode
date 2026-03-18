/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1400EDFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z @ 0x1400EE0C0 (-IsTimeFromLastInputEvent@CInputGlobals@@QEBA_NK@Z.c)
 *     PowerIsDisplayRequired @ 0x1400EE150 (PowerIsDisplayRequired.c)
 *     PowerIsDisplayBurstActive @ 0x1400EE240 (PowerIsDisplayBurstActive.c)
 */

_BOOL8 __fastcall PowerIsDisplayIdleExpired(__int64 a1, _DWORD *a2)
{
  int v3; // r14d
  __int64 UserSessionState; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  BOOL v10; // edx
  int v11; // r8d
  int IsDisplayBurstActive; // eax
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 3064);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v7 = *(_QWORD *)(v6 + 80);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 <= *(_QWORD *)(UserSessionState + 2856) )
  {
    IsDisplayBurstActive = PowerIsDisplayBurstActive(&v14);
    v11 = v14;
    v10 = IsDisplayBurstActive == 0;
  }
  else
  {
    v10 = 0;
    if ( *(_DWORD *)(UserSessionState + 2680) > v3 )
    {
      v9 = W32GetUserSessionState(v8);
      if ( CInputGlobals::IsTimeFromLastInputEvent(
             *(CInputGlobals **)(v9 + 3064),
             *(_DWORD *)(UserSessionState + 2680) - v3)
        && !(unsigned int)PowerIsDisplayRequired()
        && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
      {
        v10 = 1;
      }
    }
    v11 = 12;
  }
  if ( a2 )
    *a2 = v10 ? v11 : 0;
  return v10;
}
