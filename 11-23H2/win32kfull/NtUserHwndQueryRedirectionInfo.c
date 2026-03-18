/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C01541B0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     GreGetHwndUpdateIds @ 0x1C02670A8 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, __int64 a2, __int128 *a3, ULONG64 a4)
{
  __int128 *v5; // r13
  int v6; // r15d
  int DxSharedSurface; // esi
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ecx
  struct tagWND *StyleWindow; // rax
  struct tagWND *v17; // r10
  unsigned int *v18; // rax
  unsigned int v19; // r12d
  __int64 CurrentProcess; // rax
  size_t v21; // rbx
  int v22; // r14d
  __int128 *v23; // rax
  __int128 *v24; // rax
  int v25; // r15d
  int HwndUpdateIds; // eax
  struct tagWND *v27; // r15
  _DWORD *v28; // rax
  unsigned int v30; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+34h] [rbp-C4h]
  unsigned int v32; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct tagWND *v36; // [rsp+60h] [rbp-98h]
  ULONG64 v37; // [rsp+70h] [rbp-88h]
  __int128 Src; // [rsp+98h] [rbp-60h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-50h]

  v37 = a4;
  v5 = a3;
  v6 = a2;
  DxSharedSurface = -1073741811;
  Src = 0LL;
  v39 = 0LL;
  v9 = 0;
  v34 = 0LL;
  v35[0] = 0LL;
  v33 = 0LL;
  v32 = 0;
  v30 = 0;
  EnterSharedCrit(a1, a2, a3);
  v10 = ValidateHwnd(a1);
  if ( !v10 )
    goto LABEL_54;
  if ( v6 >= 5 )
  {
LABEL_3:
    v15 = -1073741821;
LABEL_53:
    UserSetLastStatus(v15, 1);
    goto LABEL_54;
  }
  StyleWindow = (struct tagWND *)GetStyleWindow(v10, 2568);
  v17 = StyleWindow;
  v36 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(*((_QWORD *)StyleWindow + 5) + 42LL) & 0x2FFF) == 0x29D )
    goto LABEL_52;
  v18 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v18 = (unsigned int *)MmUserProbeAddress;
  v19 = *v18;
  v31 = *v18;
  if ( v6 )
  {
    v12 = (unsigned int)(v6 - 1);
    if ( v6 == 1 )
    {
      if ( !v5 )
        goto LABEL_52;
      v21 = 16LL;
      if ( v19 < 0x10 )
        goto LABEL_16;
      v22 = 16;
      v31 = 16;
    }
    else
    {
      v12 = (unsigned int)(v6 - 2);
      if ( v6 == 2 )
      {
        if ( !v5 )
          goto LABEL_52;
        v22 = 4;
        if ( v19 < 4 )
          goto LABEL_16;
        v31 = 4;
        v21 = 4LL;
      }
      else
      {
        if ( v6 != 3 )
          goto LABEL_3;
        CurrentProcess = PsGetCurrentProcess(v12, v11, v13);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          v15 = -1073741790;
          goto LABEL_53;
        }
        if ( !v5 )
          goto LABEL_52;
        v21 = 16LL;
        if ( v19 < 0x10 )
        {
LABEL_16:
          v15 = -1073741306;
          goto LABEL_53;
        }
        v22 = 16;
        v31 = 16;
        v12 = MmUserProbeAddress;
        v23 = v5;
        if ( (unsigned __int64)v5 >= MmUserProbeAddress )
          v23 = (__int128 *)MmUserProbeAddress;
        Src = *v23;
        v17 = v36;
      }
    }
  }
  else
  {
    if ( !v5 )
      goto LABEL_52;
    v21 = 32LL;
    if ( v19 < 0x20 )
      goto LABEL_16;
    v22 = 32;
    v31 = 32;
    v12 = MmUserProbeAddress;
    v24 = v5;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v24 = (__int128 *)MmUserProbeAddress;
    Src = *v24;
    v39 = v24[1];
    v30 = DWORD1(Src);
    if ( (DWORD1(Src) & 0xFFFFFFFB) != 0 )
      goto LABEL_52;
  }
  if ( !v6 )
  {
    v33 = v39;
    DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v17, v35, &v33, &v32, &v30, &v34);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v27 = v36;
      DxSharedSurface = RecreateRedirectionBitmap(v36, 0, 0, 0, 1u, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_52;
      DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v27, v35, &v33, &v32, &v30, &v34);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src = __PAIR64__(v30, v32);
      *((_QWORD *)&Src + 1) = v34;
      *(_QWORD *)&v39 = v33;
      *((_QWORD *)&v39 + 1) = v35[0];
      goto LABEL_46;
    }
LABEL_52:
    v15 = DxSharedSurface;
    goto LABEL_53;
  }
  v25 = v6 - 1;
  if ( v25 )
  {
    if ( v25 != 1 )
      goto LABEL_46;
    HwndUpdateIds = GreGetDxSharedSurface(*(HWND *)v17, v35, &v33, &v32, &v30, &v34);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_36:
      LODWORD(Src) = v30;
      goto LABEL_46;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_36;
LABEL_38:
    v15 = HwndUpdateIds;
    goto LABEL_53;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v17);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_38;
LABEL_46:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    memmove(v5, &Src, v21);
    v12 = MmUserProbeAddress;
    v28 = (_DWORD *)v37;
    if ( v37 >= MmUserProbeAddress )
      v28 = (_DWORD *)MmUserProbeAddress;
    *v28 = v22;
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}
