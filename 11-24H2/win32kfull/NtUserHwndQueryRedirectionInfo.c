/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x14015E100
 * Callers:
 *     <none>
 * Callees:
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     GreGetDxSharedSurface @ 0x14015E6B0 (GreGetDxSharedSurface.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GreGetHwndUpdateIds @ 0x140321B48 (GreGetHwndUpdateIds.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, ULONG64 a3, ULONG64 a4)
{
  int DxSharedSurface; // esi
  int v9; // edi
  __int64 v10; // rax
  ULONG64 v11; // rcx
  struct tagWND *v12; // r14
  NTSTATUS v13; // ecx
  unsigned int *v15; // rax
  unsigned int v16; // r13d
  size_t v17; // rbx
  int v18; // r15d
  void *v19; // r13
  const void *v20; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rax
  const void *v23; // rdx
  int v24; // r12d
  int HwndUpdateIds; // eax
  __int64 UserSessionState; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // [rsp+30h] [rbp-D8h] BYREF
  int v31; // [rsp+34h] [rbp-D4h]
  unsigned int v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  ULONG64 v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v36[3]; // [rsp+58h] [rbp-B0h] BYREF
  ULONG64 v37; // [rsp+70h] [rbp-98h]
  _BYTE v38[40]; // [rsp+78h] [rbp-90h] BYREF
  __int128 Src; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-58h]

  v37 = a4;
  v34 = a3;
  DxSharedSurface = -1073741811;
  Src = 0LL;
  v40 = 0LL;
  v9 = 0;
  v35 = 0LL;
  v36[0] = 0LL;
  v33 = 0LL;
  v32 = 0;
  v30 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v38, 1LL);
  v10 = ValidateHwnd(a1);
  if ( !v10 )
    goto LABEL_11;
  if ( a2 >= 5 )
  {
    v13 = -1073741821;
    goto LABEL_10;
  }
  v12 = (struct tagWND *)v10;
  do
  {
    if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 8) != 0 )
      break;
    v12 = (struct tagWND *)*((_QWORD *)v12 + 13);
  }
  while ( v12 );
  if ( !v12 )
    goto LABEL_9;
  if ( v12 != (struct tagWND *)v10 && (*(_WORD *)(*((_QWORD *)v12 + 5) + 42LL) & 0x2FFF) == 0x29D )
    v12 = 0LL;
  if ( !v12 || (*(_WORD *)(*((_QWORD *)v12 + 5) + 42LL) & 0x2FFF) == 0x29D )
    goto LABEL_9;
  v15 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v15 = (unsigned int *)MmUserProbeAddress;
  v16 = *v15;
  v31 = *v15;
  if ( a2 )
  {
    v11 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_9;
      v17 = 16LL;
      if ( v16 < 0x10 )
        goto LABEL_49;
      v18 = 16;
      v31 = 16;
    }
    else
    {
      v11 = (unsigned int)(a2 - 2);
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          v13 = -1073741821;
          goto LABEL_10;
        }
        if ( !(unsigned int)IsCurrentProcessDwm() )
        {
          v13 = -1073741790;
          goto LABEL_10;
        }
        if ( !a3 )
          goto LABEL_9;
        v17 = 16LL;
        if ( v16 >= 0x10 )
        {
          v18 = 16;
          v31 = 16;
          v19 = (void *)v34;
          v23 = (const void *)v34;
          if ( v34 >= MmUserProbeAddress )
            v23 = (const void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(&Src, v23, 0x10uLL);
          goto LABEL_23;
        }
LABEL_49:
        v13 = -1073741306;
        goto LABEL_10;
      }
      if ( !a3 )
        goto LABEL_9;
      v18 = 4;
      if ( v16 < 4 )
        goto LABEL_49;
      v31 = 4;
      v17 = 4LL;
    }
    v19 = (void *)v34;
    goto LABEL_23;
  }
  if ( !a3 )
    goto LABEL_9;
  v17 = 32LL;
  if ( v16 < 0x20 )
    goto LABEL_49;
  v18 = 32;
  v31 = 32;
  v19 = (void *)v34;
  v20 = (const void *)v34;
  if ( v34 >= MmUserProbeAddress )
    v20 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v20, 0x20uLL);
  v30 = DWORD1(Src);
  if ( (DWORD1(Src) & 0xFFFFFFFB) != 0 )
    goto LABEL_9;
LABEL_23:
  if ( !a2 )
  {
    v33 = v40;
    DxSharedSurface = GreGetDxSharedSurface(
                        *(_QWORD *)v12,
                        (unsigned int)v36,
                        (unsigned int)&v33,
                        (unsigned int)&v32,
                        (__int64)&v30,
                        (__int64)&v35);
    if ( DxSharedSurface != -1071775484 )
      goto LABEL_25;
    UserSessionState = W32GetUserSessionState(v11, v21);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    DxSharedSurface = RecreateRedirectionBitmap(v12, 0, 0, 0, 1, 0LL);
    v29 = W32GetUserSessionState(v28, v27);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v29 + 57008) + 48LL));
    if ( DxSharedSurface >= 0 )
    {
      DxSharedSurface = GreGetDxSharedSurface(
                          *(_QWORD *)v12,
                          (unsigned int)v36,
                          (unsigned int)&v33,
                          (unsigned int)&v32,
                          (__int64)&v30,
                          (__int64)&v35);
LABEL_25:
      if ( DxSharedSurface >= 0 )
      {
        *(_QWORD *)&Src = __PAIR64__(v30, v32);
        *((_QWORD *)&Src + 1) = v35;
        *(_QWORD *)&v40 = v33;
        *((_QWORD *)&v40 + 1) = v36[0];
        goto LABEL_27;
      }
    }
LABEL_9:
    v13 = DxSharedSurface;
LABEL_10:
    UserSetLastStatus(v13);
    goto LABEL_11;
  }
  v24 = a2 - 1;
  if ( v24 )
  {
    if ( v24 != 1 )
      goto LABEL_27;
    HwndUpdateIds = GreGetDxSharedSurface(
                      *(_QWORD *)v12,
                      (unsigned int)v36,
                      (unsigned int)&v33,
                      (unsigned int)&v32,
                      (__int64)&v30,
                      (__int64)&v35);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_57:
      LODWORD(Src) = v30;
      goto LABEL_27;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_57;
LABEL_59:
    v13 = HwndUpdateIds;
    goto LABEL_10;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v12);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_59;
LABEL_27:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    if ( (unsigned __int64)v19 >= MmUserProbeAddress )
      v19 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v19, &Src, v17);
    v11 = MmUserProbeAddress;
    v22 = (_DWORD *)v37;
    if ( v37 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = v18;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
