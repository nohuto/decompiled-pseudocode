/*
 * XREFs of zzzResetSharedDesktops @ 0x14024E3F0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     CalcVisRgn @ 0x1400437F0 (CalcVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetPhysicalScreenRect @ 0x1401DA3D0 (GetPhysicalScreenRect.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140270EA0 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall zzzResetSharedDesktops(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v8; // r14d
  __int128 *PhysicalScreenRect; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  HRGN v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // kr10_8
  _DWORD *v37; // r8
  int v38; // edi
  unsigned __int64 v40; // [rsp+20h] [rbp-38h]
  HRGN EmptyRgn; // [rsp+28h] [rbp-30h] BYREF
  __int128 v42; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v8 = a2;
  PhysicalScreenRect = GetPhysicalScreenRect(&v42, a2);
  v14 = *(_QWORD *)(v4 + 16);
  v42 = *PhysicalScreenRect;
  if ( v14 )
  {
    v15 = DWORD2(v42);
    v13 = v42;
    v10 = DWORD1(v42);
    v12 = HIDWORD(*((_QWORD *)&v42 + 1));
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 88LL) = v13;
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 92LL) = v10;
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 96LL) = v15;
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 100LL) = v12;
      v11 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 104LL) = v13;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 108LL) = v10;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 112LL) = v15;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 116LL) = v12;
      v14 = *(_QWORD *)(v14 + 32);
    }
    while ( v14 );
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(v11, v10, v12, v13);
  CalcVisRgn(
    &EmptyRgn,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    *(const struct tagWND **)(*(_QWORD *)(a1 + 8) + 24LL),
    1u);
  UserSessionState = W32GetUserSessionState(v18, v17);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v20 = EmptyRgn;
  v23 = W32GetUserSessionState(v22, v21);
  GreSelectVisRgn(*(_QWORD *)(*(_QWORD *)(v23 + 57008) + 64LL), v20, 1LL);
  v26 = W32GetUserSessionState(v25, v24);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v26 + 57008) + 48LL));
  zzzUpdateWindowsAfterModeChange(v8, a3);
  v27 = *(__int64 **)(a1 + 8);
  v28 = *(unsigned int *)(*v27 + 64);
  if ( (v28 & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v27[3], 0LL, 0LL);
  v29 = W32GetUserSessionState(v27, v28);
  CCursorClip::ClearClip(*(CCursorClip **)(v29 + 36296));
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline(v30)
    && a4
    && (v33 = W32GetUserSessionState(v32, v31),
        MonitorFromPoint(*(_QWORD *)(*(_QWORD *)(v33 + 19928) + 4960LL), 0, 0x12u)) )
  {
    v35 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 19928);
    v40 = *(_QWORD *)(v35 + 4960);
    v36 = v40;
  }
  else
  {
    v35 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 57008);
    v37 = *(_DWORD **)(*(_QWORD *)(v35 + 104) + 40LL);
    v38 = (v37[9] - v37[7]) / 2;
    LODWORD(v40) = v38;
    v34 = (unsigned int)((v37[10] - v37[8]) >> 31);
    HIDWORD(v40) = (v37[10] - v37[8]) / 2;
    v36 = __PAIR64__(HIDWORD(v40), v38);
  }
  *(_QWORD *)(W32GetUserSessionState(v35, v34) + 36280) = v40;
  return zzzInternalSetCursorPos((unsigned int)v36, HIDWORD(v36), 2, 0);
}
