/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1400748D0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1401ED8D0 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r14
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+4Ch] [rbp+14h]

  v15 = HIDWORD(a2);
  v4 = (__int64 *)(W32GetUserSessionState(a1, a2) + 36320);
  if ( *v4
    && (unsigned int)IsToplevelWindowDesktopComposed(*v4)
    && (a1 != *v4 || PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2)) )
  {
    v12 = (void *)ReferenceDwmApiPort(v11, v10);
    DwmAsyncTopLevelMouseLeave(v12);
  }
  v5 = *(_DWORD **)(a1 + 40);
  if ( (int)a2 < v5[26] || (int)a2 >= v5[28] || v15 < v5[27] || v15 >= v5[29] )
  {
    v13 = v4;
    v14 = a1;
    HMAssignmentLock(&v13, 1LL);
  }
  else
  {
    HMAssignmentUnlock(v4);
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  v14 = a1;
  v13 = (__int64 *)(UserSessionState + 36312);
  return HMAssignmentLock(&v13, 1LL);
}
