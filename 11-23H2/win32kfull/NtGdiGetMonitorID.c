/*
 * XREFs of NtGdiGetMonitorID @ 0x1C0010750
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // esi
  _BYTE v17[8]; // [rsp+50h] [rbp-3D8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-3D0h] BYREF
  _QWORD v19[7]; // [rsp+68h] [rbp-3C0h] BYREF
  _DWORD v20[82]; // [rsp+A0h] [rbp-388h] BYREF
  _WORD Src[260]; // [rsp+1E8h] [rbp-240h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset_0(v20, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v7 = *(_QWORD *)(v19[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
    v8 = *(_DWORD *)(v7 + 40);
    if ( (v8 & 0x20000) != 0 )
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1768) + 40LL) + 2552LL);
    else
      v9 = *(_QWORD *)(v7 + 2552);
    if ( v9 == -4 )
    {
      DbgkWerCaptureLiveKernelDump(
        L"win32kfull.sys",
        356LL,
        46LL,
        *(_QWORD *)&v8 & 0x20000LL,
        v8 & 0x400,
        0LL,
        0LL,
        0LL,
        0);
      v9 = 0LL;
    }
    if ( v9 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v9 + 64));
      v20[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v20, 0, 0) >= 0 )
        v6 = 1;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  if ( v6 )
  {
    v11 = Src;
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
    v15 = 2 * v14 + 2;
    if ( v15 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, Src, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
