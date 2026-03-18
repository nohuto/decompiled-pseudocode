/*
 * XREFs of xxxPrintWindow @ 0x14023A30C
 * Callers:
 *     NtUserPrintWindow @ 0x140244450 (NtUserPrintWindow.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     GetRedirectionFlags @ 0x140036778 (GetRedirectionFlags.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14010A148 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14026E514 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, int a3)
{
  struct tagWND *v3; // rdi
  unsigned int v4; // r15d
  int v5; // ebx
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  _DWORD *v10; // rdx
  int v11; // r12d
  int v12; // eax
  int v13; // r13d
  int v14; // esi
  int v15; // r14d
  int v16; // r14d
  __int64 StyleWindow; // rax
  struct tagWND *v18; // rbx
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdx
  struct tagWND *v24; // r12
  int v25; // r12d
  float *v26; // rax
  float v27; // xmm2_4
  HDC DCEx; // rbx
  __int128 v30; // [rsp+70h] [rbp-21h] BYREF
  __int64 v31; // [rsp+80h] [rbp-11h] BYREF
  int v32; // [rsp+88h] [rbp-9h]
  int v33; // [rsp+8Ch] [rbp-5h]
  __int128 v34; // [rsp+90h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+Fh] BYREF
  struct tagWND *v36; // [rsp+A8h] [rbp+17h]
  int v38; // [rsp+108h] [rbp+77h] BYREF
  int v39; // [rsp+110h] [rbp+7Fh]

  v38 = a3;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v34 = 0LL;
  v6 = a3;
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&BugCheckParameter3, (__int64)a1);
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = PtiCurrent(v8, v7);
    if ( !(unsigned __int8)Win32ProcessCapability::CheckAccess(*((_QWORD *)v9 + 58), 2LL) )
    {
      v39 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4948LL);
    }
  }
  v10 = (_DWORD *)*((_QWORD *)v3 + 5);
  v11 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    v12 = v10[27];
    v13 = v10[26] - v10[22];
    v14 = v10[28] - v10[26];
    v15 = v10[29];
    v39 = v12 - v10[23];
    v16 = v15 - v12;
  }
  else
  {
    v13 = 0;
    v14 = v10[24] - v10[22];
    v39 = 0;
    v16 = v10[25] - v10[23];
  }
  if ( (v38 & 2) != 0 && (unsigned int)IsWindowDesktopComposed(v3) )
  {
    StyleWindow = GetStyleWindow((__int64)v3, 2568);
    v18 = (struct tagWND *)StyleWindow;
    if ( StyleWindow )
    {
      if ( (struct tagWND *)StyleWindow != v3 )
      {
        v19 = *((_QWORD *)v3 + 5);
        if ( v11 )
          v20 = *(_OWORD *)(v19 + 104);
        else
          v20 = *(_OWORD *)(v19 + 88);
        v21 = *((_QWORD *)v18 + 5);
        v30 = v20;
        v22 = *(__m128i *)(v21 + 88);
        LODWORD(v21) = _mm_cvtsi128_si32(v22);
        HIDWORD(v30) -= v22.m128i_i32[1];
        DWORD1(v30) -= v22.m128i_i32[1];
        LODWORD(v30) = v30 - v21;
        DWORD2(v30) -= v21;
        v32 = v22.m128i_i32[2] - v21;
        v33 = v22.m128i_i32[3] - v22.m128i_i32[1];
        v31 = 0LL;
        v4 = IntersectRect(&v34, (int *)&v31, (int *)&v30);
        if ( !v4 )
          goto LABEL_37;
        v24 = v36;
        v3 = v18;
        v13 = v34;
        v16 = HIDWORD(v34) - DWORD1(v34);
        v14 = DWORD2(v34) - v34;
        v39 = DWORD1(v34);
        v36 = v18;
        HMLockObject(v18);
        if ( v24 )
          HMUnlockObject(v24);
      }
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (GetRedirectionFlags((__int64)v3, (__int64)v10) & 8) != 0 )
  {
    v25 = 0;
LABEL_28:
    v4 = 1;
    xxxInternalUpdateWindow(v3, 1u);
    if ( v5 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v38, 1);
      v26 = (float *)*((_QWORD *)v3 + 27);
      v27 = FLOAT_1_0;
      if ( v26 )
        v27 = *v26;
      v4 = GreSpDwmSyncCaptureSurfaceBits(*(Gre::Base **)v3, a2, v27, v13, v39, v14, v16);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v38);
    }
    else
    {
      DCEx = (HDC)_GetDCEx(v3, 0LL, 3LL);
      GreBitBltInternal(a2, 0, 0, v14, v16, DCEx, v13, v39, 0x80CC0020, 0, 0);
      _ReleaseDC(DCEx);
    }
    if ( v25 && ((*(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) & 1) != 0 || (*((_DWORD *)v3 + 95) & 0x20000000) != 0) )
    {
      UnsetRedirectedWindow(v3, 8);
      *(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) &= ~1u;
      *((_DWORD *)v3 + 95) &= ~0x20000000u;
    }
    goto LABEL_37;
  }
  if ( (int)SetRedirectedWindow(v3, 8LL) >= 0 )
  {
    if ( v5 )
      *((_DWORD *)v3 + 95) |= 0x20000000u;
    else
      *(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) |= 1u;
    v25 = 1;
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 26LL) & 0x20) != 0 )
    v4 = 1;
LABEL_37:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, v23);
  return v4;
}
