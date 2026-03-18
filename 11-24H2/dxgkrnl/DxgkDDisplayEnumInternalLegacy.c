/*
 * XREFs of DxgkDDisplayEnumInternalLegacy @ 0x1401C5D60
 * Callers:
 *     DxgkDDisplayEnum @ 0x1403C90D0 (DxgkDDisplayEnum.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A1380 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1401C39E8 (-DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1401C3AD8 (-DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1403B4440 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1403B67C0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ?IsMismatchedKernelAbiSession@@YA_NXZ @ 0x1403C46BC (-IsMismatchedKernelAbiSession@@YA_NXZ.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternalLegacy(struct _D3DKMT_DDISPLAY_ENUM *a1, char a2)
{
  struct _D3DKMT_DDISPLAY_ENUM *v4; // rdx
  PVOID v5; // rcx
  PVOID v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // edx
  void *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  void *v15; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  volatile void *Address[2]; // [rsp+50h] [rbp-6F8h] BYREF
  volatile void *v19[2]; // [rsp+60h] [rbp-6E8h]
  void *Src[2]; // [rsp+70h] [rbp-6D8h] BYREF
  void *v21[2]; // [rsp+80h] [rbp-6C8h]
  PVOID v22; // [rsp+90h] [rbp-6B8h] BYREF
  _BYTE v23[568]; // [rsp+98h] [rbp-6B0h] BYREF
  int v24; // [rsp+2D0h] [rbp-478h]
  PVOID P; // [rsp+2E0h] [rbp-468h] BYREF
  _BYTE v26[1088]; // [rsp+2E8h] [rbp-460h] BYREF
  int v27; // [rsp+728h] [rbp-20h]

  if ( a2 )
  {
    *(_OWORD *)Address = 0LL;
    *(_OWORD *)v19 = 0LL;
    if ( IsMismatchedKernelAbiSession() )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DxgkDDisplayEnum is called from container with different OS version.");
      WdLogSingleEntry1(2LL, -1073741735LL);
      WdLogGlobalForLineNumber = 10739;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkDDisplayEnum is called from container with different OS version., returning 0x%I64x",
        -1073741735LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225561LL;
    }
    else
    {
      v4 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v4 = (struct _D3DKMT_DDISPLAY_ENUM *)MmUserProbeAddress;
      RtlCopyVolatileMemory(Address, v4, 0x20uLL);
      ProbeForWrite(Address[1], 568LL * HIDWORD(Address[0]), 4u);
      ProbeForWrite(v19[1], 1088LL * HIDWORD(v19[0]), 4u);
      v5 = 0LL;
      v22 = 0LL;
      v24 = 0;
      v6 = 0LL;
      P = 0LL;
      v27 = 0;
      v7 = HIDWORD(Address[0]);
      if ( HIDWORD(Address[0]) )
      {
        PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(&v22, HIDWORD(Address[0]));
        v7 = HIDWORD(Address[0]);
        v5 = v22;
        v6 = P;
      }
      v8 = HIDWORD(v19[0]);
      if ( HIDWORD(v19[0]) )
      {
        PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, HIDWORD(v19[0]));
        v8 = HIDWORD(v19[0]);
        v7 = HIDWORD(Address[0]);
        v5 = v22;
        v6 = P;
      }
      if ( (!v7 || v5) && (!(_DWORD)v8 || v6) )
      {
        Src[0] = (void *)Address[0];
        v21[0] = (void *)v19[0];
        Src[1] = v5;
        v21[1] = v6;
        if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
          v9 = DxgkDDisplayEnumCoreTranslate((struct _D3DKMT_DDISPLAY_ENUM *)Src);
        else
          v9 = DxgkDDisplayEnumCoreLegacy((struct _D3DKMT_DDISPLAY_ENUM *)Src);
        v10 = v9;
        v11 = (unsigned int)Src[0];
        LODWORD(Address[0]) = Src[0];
        LODWORD(v19[0]) = v21[0];
        if ( (unsigned __int64)a1 + 32 > MmUserProbeAddress || (struct _D3DKMT_DDISPLAY_ENUM *)((char *)a1 + 32) <= a1 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v11 = (unsigned int)Address[0];
        }
        *(_OWORD *)a1 = *(_OWORD *)Address;
        *((_OWORD *)a1 + 1) = *(_OWORD *)v19;
        if ( v9 >= 0 )
        {
          v12 = (void *)Address[1];
          if ( Address[1] )
          {
            v13 = 568LL * v11;
            v14 = Src[1];
            if ( (char *)Address[1] + v13 > (volatile void *)MmUserProbeAddress
              || (char *)Address[1] + v13 <= Address[1] )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(v12, v14, v13);
          }
          v15 = (void *)v19[1];
          if ( v19[1] )
          {
            v16 = 1088LL * LODWORD(v19[0]);
            v17 = v21[1];
            if ( (char *)v19[1] + v16 > (volatile void *)MmUserProbeAddress || (char *)v19[1] + v16 <= v19[1] )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v15, v17, v16);
          }
        }
        if ( P != v26 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v27 = 0;
        if ( v22 != v23 && v22 )
          ExFreePoolWithTag(v22, 0);
        return v10;
      }
      else
      {
        WdLogSingleEntry2(2LL, v7, v8);
        WdLogGlobalForLineNumber = 10772;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
          HIDWORD(Address[0]),
          HIDWORD(v19[0]),
          0LL,
          0LL,
          0LL);
        if ( P != v26 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v27 = 0;
        if ( v22 != v23 && v22 )
          ExFreePoolWithTag(v22, 0);
        return 3221225495LL;
      }
    }
  }
  else if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
  {
    return DxgkDDisplayEnumCoreTranslate(a1);
  }
  else
  {
    return DxgkDDisplayEnumCoreLegacy(a1);
  }
}
