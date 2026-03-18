/*
 * XREFs of DxgkDDisplayEnumInternal @ 0x14039E730
 * Callers:
 *     DxgkDDisplayEnum @ 0x14039E710 (DxgkDDisplayEnum.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14009F020 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?IsMismatchedKernelAbiSession@@YA_NXZ @ 0x14039ECD0 (-IsMismatchedKernelAbiSession@@YA_NXZ.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x14039ED68 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternal(ULONG64 a1, char a2)
{
  const void *v3; // rdx
  PVOID Pool2; // r8
  PVOID v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  int v8; // edi
  unsigned int v9; // edx
  void *v10; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  void *v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  volatile void *Address[2]; // [rsp+50h] [rbp-6F8h] BYREF
  volatile void *v18[2]; // [rsp+60h] [rbp-6E8h]
  void *Src[2]; // [rsp+70h] [rbp-6D8h] BYREF
  void *v20[2]; // [rsp+80h] [rbp-6C8h]
  PVOID v21; // [rsp+90h] [rbp-6B8h]
  _BYTE v22[568]; // [rsp+98h] [rbp-6B0h] BYREF
  unsigned int v23; // [rsp+2D0h] [rbp-478h]
  PVOID P; // [rsp+2E0h] [rbp-468h]
  _BYTE v25[1088]; // [rsp+2E8h] [rbp-460h] BYREF
  unsigned int v26; // [rsp+728h] [rbp-20h]

  if ( !a2 )
    return DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)a1);
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v18 = 0LL;
  if ( IsMismatchedKernelAbiSession() )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DxgkDDisplayEnum is called from container with different OS version.");
    WdLogSingleEntry1(2LL, -1073741735LL);
    WdLogGlobalForLineNumber = 10302;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkDDisplayEnum is called from container with different OS version., returning 0x%I64x",
      -1073741735LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225561LL;
  }
  v3 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Address, v3, 0x20uLL);
  ProbeForWrite(Address[1], 568LL * HIDWORD(Address[0]), 4u);
  ProbeForWrite(v18[1], 1088LL * HIDWORD(v18[0]), 4u);
  Pool2 = 0LL;
  v21 = 0LL;
  v23 = 0;
  v5 = 0LL;
  P = 0LL;
  v26 = 0;
  v6 = HIDWORD(Address[0]);
  if ( HIDWORD(Address[0]) )
  {
    if ( HIDWORD(Address[0]) <= 1 )
    {
      v21 = v22;
      memset(v22, 0, 568LL * HIDWORD(Address[0]));
      Pool2 = v21;
LABEL_8:
      v23 = v6;
      v6 = HIDWORD(Address[0]);
      v5 = P;
      goto LABEL_9;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Address[0]) >= 0x238 )
    {
      Pool2 = (PVOID)ExAllocatePool2(256LL, 568LL * HIDWORD(Address[0]), 1265072196LL, HIDWORD(Address[0]));
      v21 = Pool2;
      goto LABEL_8;
    }
  }
LABEL_9:
  v7 = HIDWORD(v18[0]);
  if ( !HIDWORD(v18[0]) )
    goto LABEL_14;
  if ( HIDWORD(v18[0]) <= 1 )
  {
    P = v25;
    memset(v25, 0, 1088LL * HIDWORD(v18[0]));
    v5 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v18[0]) < 0x440 )
      goto LABEL_14;
    v5 = (PVOID)ExAllocatePool2(256LL, 1088LL * HIDWORD(v18[0]), 1265072196LL, HIDWORD(v18[0]));
    P = v5;
  }
  v26 = v7;
  v7 = HIDWORD(v18[0]);
  v6 = HIDWORD(Address[0]);
  Pool2 = v21;
LABEL_14:
  if ( v6 && !Pool2 || v7 && !v5 )
  {
    WdLogSingleEntry2(2LL, v6, v7);
    WdLogGlobalForLineNumber = 10335;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
      HIDWORD(Address[0]),
      HIDWORD(v18[0]),
      0LL,
      0LL,
      0LL);
    if ( P != v25 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v26 = 0;
    if ( v21 != v22 && v21 )
      ExFreePoolWithTag(v21, 0);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)Address[0];
    v20[0] = (void *)v18[0];
    Src[1] = Pool2;
    v20[1] = v5;
    v8 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v9 = (unsigned int)Src[0];
    LODWORD(Address[0]) = Src[0];
    LODWORD(v18[0]) = v20[0];
    if ( a1 + 32 < a1 || a1 + 32 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v9 = (unsigned int)Address[0];
    }
    *(_OWORD *)a1 = *(_OWORD *)Address;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v18;
    if ( v8 >= 0 )
    {
      v10 = (void *)Address[1];
      if ( Address[1] )
      {
        v11 = 568LL * v9;
        v12 = Src[1];
        if ( (char *)Address[1] + v11 <= Address[1] || (char *)Address[1] + v11 > (volatile void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v10, v12, v11);
      }
      v13 = (void *)v18[1];
      if ( v18[1] )
      {
        v14 = 1088LL * LODWORD(v18[0]);
        v15 = v20[1];
        if ( (char *)v18[1] + v14 <= v18[1] || (char *)v18[1] + v14 > (volatile void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, v15, v14);
      }
    }
    if ( P != v25 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v26 = 0;
    if ( v21 != v22 )
    {
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
    return (unsigned int)v8;
  }
}
