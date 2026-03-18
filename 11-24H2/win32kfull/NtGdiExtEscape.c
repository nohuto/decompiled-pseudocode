/*
 * XREFs of NtGdiExtEscape @ 0x14025E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C2548 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401136F0 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?GreIsUMPD@@YA_NPEAUHDC__@@@Z @ 0x1401ED03C (-GreIsUMPD@@YA_NPEAUHDC__@@@Z.c)
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x140226FCC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     GreNamedEscape @ 0x14025E294 (GreNamedEscape.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14031D494 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x1403306E8 (-GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiExtEscape(
        HDC a1,
        const void *a2,
        int a3,
        unsigned int a4,
        int a5,
        struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *a6,
        int a7,
        char *a8)
{
  int v8; // r15d
  int v9; // r14d
  char *v10; // rdi
  struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // r8
  const void *v19; // rdx
  ULONG64 v20; // r8
  int v21; // eax
  char *v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  __int64 SessionState; // rax
  unsigned int v26; // eax
  unsigned int v27; // r12d
  __int64 v28; // rax
  unsigned int v29; // eax
  wchar_t *Str1; // [rsp+68h] [rbp-380h]
  HANDLE v35; // [rsp+90h] [rbp-358h]
  __int64 v36; // [rsp+98h] [rbp-350h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-348h]
  __int64 v38; // [rsp+B0h] [rbp-338h]
  __int64 v39; // [rsp+B8h] [rbp-330h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-328h]
  __int64 v41; // [rsp+D0h] [rbp-318h]
  _BYTE v42[56]; // [rsp+D8h] [rbp-310h] BYREF
  _BYTE v43[56]; // [rsp+110h] [rbp-2D8h] BYREF
  char v44; // [rsp+148h] [rbp-2A0h] BYREF
  char v45; // [rsp+168h] [rbp-280h] BYREF
  _WORD v46[264]; // [rsp+190h] [rbp-258h] BYREF

  Str1 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 < 0 || a7 < 0 || a3 < 0 || a1 && a2 )
    goto LABEL_85;
  v35 = *(HANDLE *)(W32GetUserSessionState(0LL, a2) + 63584);
  if ( v35 && v35 == PsGetCurrentProcessId() )
  {
    UmfdDispatchWinLogonEscape(a6);
    return 0LL;
  }
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(v13, v12, v14) )
  {
    UmfdDispatchEscape(a6, v16, v18);
    return 0LL;
  }
  v19 = a2;
  if ( a2 )
  {
    if ( a3 > 260 )
      goto LABEL_85;
    Str1 = v46;
    v20 = (ULONG64)a2 + 2 * a3;
    if ( v20 < (unsigned __int64)a2 || v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v46, a2, 2LL * a3);
    v46[a3] = 0;
  }
  if ( Str1 && !_wcsicmp(Str1, L"GSESC") && (int)GreScalingDispatchEscape(a6) >= 0 )
    return 0LL;
  if ( a5 )
  {
    if ( GreIsUMPD(a1) )
    {
      v21 = a5;
      if ( a5 > 32 )
      {
        v17 = (char *)a6 + a5;
        v11 = a6;
        goto LABEL_35;
      }
    }
    else
    {
      v21 = a5;
      if ( a5 > 32 )
      {
        if ( a5 <= 40960000 )
        {
          v11 = (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)PALLOCNOZ(a5, 1886221383LL);
          v21 = a5;
        }
        if ( !v11 )
          goto LABEL_85;
        v8 = 1;
        goto LABEL_31;
      }
    }
    v11 = (struct tagUMFD_WINLOGON_ESCAPE_ARGUMENT *)&v44;
LABEL_31:
    v22 = (char *)a6 + v21;
    if ( v22 < (char *)a6 || (unsigned __int64)v22 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v11, a6, v21);
  }
LABEL_35:
  if ( !a7 )
  {
LABEL_45:
    if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline(v17, v19) )
    {
      SessionState = W32GetSessionState(v24, v23);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v42,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v42) )
      {
        if ( v8 && v11 )
          PushThreadGuardedObject(&v36, v11, Win32FreePool);
        if ( v9 && v10 )
          PushThreadGuardedObject(&v39, v10, Win32FreePool);
        if ( Str1 )
          v26 = GreNamedEscape(Str1, a4, a5, v11, a7, v10);
        else
          v26 = GreExtEscape(a1, a4, a5, (char *)v11, a7, v10);
        v27 = v26;
        if ( v8 && v11 )
          PopThreadGuardedObject(&v36);
        if ( v9 && v10 )
          PopThreadGuardedObject(&v39);
      }
      else
      {
        v27 = -1;
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v42);
    }
    else
    {
      if ( v8 && v11 )
        PushThreadGuardedObject(&v36, v11, Win32FreePool);
      if ( v9 && v10 )
        PushThreadGuardedObject(&v39, v10, Win32FreePool);
      v28 = W32GetSessionState(v24, v23);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v43,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v28 + 96) + 4872LL));
      if ( Str1 )
        v29 = GreNamedEscape(Str1, a4, a5, v11, a7, v10);
      else
        v29 = GreExtEscape(a1, a4, a5, (char *)v11, a7, v10);
      v27 = v29;
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v43);
      if ( v8 && v11 )
        PopThreadGuardedObject(&v36);
      if ( v9 && v10 )
        PopThreadGuardedObject(&v39);
    }
    if ( a7 && v10 != a8 )
    {
      if ( (unsigned __int64)&a8[a7] > MmUserProbeAddress || &a8[a7] <= a8 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a8, v10, a7);
    }
    goto LABEL_86;
  }
  if ( GreIsUMPD(a1) )
  {
    v10 = a8;
    ProbeForWrite(a8, a7, 1u);
    goto LABEL_45;
  }
  if ( a7 <= 32 )
  {
    v10 = &v45;
LABEL_44:
    memset_0(v10, 0, a7);
    goto LABEL_45;
  }
  if ( a7 <= 40960000 )
    v10 = (char *)PALLOCNOZ(a7, 1886221383LL);
  if ( v10 )
  {
    v9 = 1;
    goto LABEL_44;
  }
LABEL_85:
  v27 = -1;
LABEL_86:
  if ( v9 && v10 )
    Win32FreePool(v10);
  if ( v8 )
  {
    if ( v11 )
      Win32FreePool(v11);
  }
  return v27;
}
