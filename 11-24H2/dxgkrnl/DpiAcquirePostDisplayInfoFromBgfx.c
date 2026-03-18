/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F34AC
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 *     DpiFdoDetectPostDevice @ 0x1403F3100 (DpiFdoDetectPostDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1401B4A1C (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(__int64 a1, char a2, char a3)
{
  char v3; // r15
  char v4; // di
  __int64 v7; // rax
  char v8; // r13
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  NTSTATUS v15; // eax
  __int64 v16; // r14
  char v17; // r14
  void *Pool2; // rsi
  void *v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // r12
  __int64 v23; // rax
  _BYTE v24[4]; // [rsp+20h] [rbp-88h] BYREF
  NTSTATUS v25; // [rsp+24h] [rbp-84h]
  __int128 v26; // [rsp+28h] [rbp-80h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h]
  __int128 v28; // [rsp+48h] [rbp-60h]
  __int128 SystemInformation; // [rsp+58h] [rbp-50h] BYREF
  __int128 v30; // [rsp+68h] [rbp-40h]

  v24[0] = a2;
  v3 = 0;
  v4 = 0;
  SystemInformation = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( a3 )
  {
    if ( qword_140160FC0 )
    {
      v7 = *(_QWORD *)(qword_140160FC0 + 64);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v3 = *(_BYTE *)(v7 + 2845);
          if ( v3 )
            v4 = *(_BYTE *)(v7 + 2846);
        }
      }
    }
  }
  v8 = 0;
  v25 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v25 >= 0 )
  {
    v9 = HIDWORD(SystemInformation);
    v8 = 1;
    v10 = SystemInformation;
    v11 = DWORD2(SystemInformation);
    *(_DWORD *)(a1 + 24) = -1;
    *(_DWORD *)(a1 + 28) = 0;
    *(_QWORD *)(a1 + 16) = v10;
    LODWORD(v10) = DWORD2(v30);
    *(_DWORD *)(a1 + 4) = v9;
    DWORD2(v27) = v9;
    v12 = v30;
    *(_DWORD *)a1 = v11;
    HIDWORD(v27) = v11;
    LODWORD(v28) = v12;
    v13 = v10 - 3;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v8 = 0;
        goto LABEL_15;
      }
      *(_DWORD *)(a1 + 12) = 22;
      v14 = 4 * v12;
      DWORD1(v28) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 12) = 20;
      v14 = 3 * v12;
      DWORD1(v28) = 4;
    }
    *(_DWORD *)(a1 + 8) = v14;
LABEL_15:
    v15 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, (PVOID)(a1 + 32), 0x80u, 0LL);
    v16 = v15;
    if ( v15 < 0 )
    {
      memset((void *)(a1 + 32), 0, 0x80uLL);
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 2721;
    }
  }
  if ( !v24[0] )
    goto LABEL_22;
  v17 = 0;
  v24[0] = 0;
  if ( v4 )
  {
    DxgDetermineBootImageMode(a1, 0LL, v4, v24);
    if ( !v24[0] || (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) < 0 )
      goto LABEL_21;
  }
  else
  {
    if ( !a3 )
    {
LABEL_21:
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      goto LABEL_22;
    }
    Pool2 = 0LL;
    v20 = 0LL;
    if ( !v8 )
      goto LABEL_36;
    v21 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    v22 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 8));
    if ( v21 >= 0 )
      goto LABEL_36;
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)v22, 1953656900LL);
    v23 = ExAllocatePool2(64LL, 32LL, 1953656900LL);
    v20 = (void *)v23;
    if ( !Pool2 || !v23 )
      goto LABEL_36;
    KeInitializeSpinLock((PKSPIN_LOCK)(v23 + 24));
    *(_QWORD *)&v27 = v20;
    *(_QWORD *)&v26 = Pool2;
    *((_QWORD *)&v26 + 1) = v22;
    if ( !v3 || DWORD2(SystemInformation) > 0xBB8 || (BYTE8(v28) = 0, HIDWORD(SystemInformation) > 0x7D0) )
      BYTE8(v28) = 1;
    if ( (int)InbvSetVirtualFrameBuffer(&v26, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode(a1, &v26, 0, v24);
      v17 = v24[0];
    }
    else
    {
LABEL_36:
      DxgDetermineBootImageMode(a1, 0LL, 0, 0LL);
    }
    if ( !v17 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x74727044u);
      if ( v20 )
        ExFreePoolWithTag(v20, 0x74727044u);
    }
  }
LABEL_22:
  if ( !v8 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = -1;
    memset((void *)(a1 + 32), 0, 0x80uLL);
  }
  return (unsigned int)v25;
}
