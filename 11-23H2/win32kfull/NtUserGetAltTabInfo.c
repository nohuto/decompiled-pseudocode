/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01CF2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _GetAltTabInfo @ 0x1C01C9874 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, __int64 a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
{
  int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  int AltTabInfo; // esi
  __int64 v16; // rax
  _BYTE *v17; // rdx
  SIZE_T v18; // rdx
  __int64 v19; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v21; // rax
  unsigned __int16 v22; // di
  __int64 v23; // rcx
  unsigned __int16 v24; // dx
  INT v25; // ebx
  __int128 v27; // [rsp+68h] [rbp-60h] BYREF
  INT a[4]; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+88h] [rbp-40h] BYREF

  v8 = a2;
  v27 = 0LL;
  *(_OWORD *)a = 0LL;
  v29 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      AltTabInfo = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 || v14 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12) )
      v16 = 0LL;
    else
      v16 = 3LL;
    if ( (v16 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[39] = v17[39];
    v18 = a5;
    if ( !a6 )
      v18 = 2LL * a5;
    ProbeForWrite(a4, v18, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      LODWORD(v27) = 40;
      AltTabInfo = GetAltTabInfo(v8, (__int64)&v27, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v19);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v14, CurrentThreadDpiAwarenessContext) )
      {
        v21 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 256LL));
        if ( v21 )
        {
          v22 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
          v23 = v21 + 40;
          if ( !v22 )
            v22 = *(_WORD *)(*(_QWORD *)v23 + 60LL);
          v24 = (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) >> 8) & 0x1FF;
          if ( !v24 )
            v24 = *(_WORD *)(*(_QWORD *)v23 + 60LL);
          v25 = v24;
          a[2] = EngMulDiv(a[2], v22, v24);
          a[3] = EngMulDiv(a[3], v22, v25);
        }
        TransformPointBetweenCoordinateSpaces(&v29, &v29, 0LL, v14);
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = v27;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)a;
        *(_QWORD *)(a3 + 32) = v29;
      }
    }
    else
    {
      UserSetLastError(87);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400);
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return AltTabInfo;
}
