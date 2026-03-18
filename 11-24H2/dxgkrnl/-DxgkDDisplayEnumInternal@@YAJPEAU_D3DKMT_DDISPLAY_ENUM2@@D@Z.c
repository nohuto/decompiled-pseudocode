/*
 * XREFs of ?DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z @ 0x1401C3DFC
 * Callers:
 *     DxgkDDisplayEnum2 @ 0x1401C5D30 (DxgkDDisplayEnum2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A1380 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@I@Z @ 0x1401C3250 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@$00@@QEAAPEAU_D3DKMT_D.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET2@@I@Z @ 0x1401C32D4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z @ 0x1401C38F4 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z.c)
 *     ?IsMismatchedKernelAbiSession@@YA_NXZ @ 0x1403C46BC (-IsMismatchedKernelAbiSession@@YA_NXZ.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternal(struct _D3DKMT_DDISPLAY_ENUM2 *a1)
{
  struct _D3DKMT_DDISPLAY_ENUM2 *v3; // rdx
  size_t v4; // rdi
  size_t v5; // r14
  char *v6; // rcx
  char *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // r15d
  char *v11; // rdx
  int v12; // ecx
  unsigned int i; // ebx
  char *v14; // r9
  char *v15; // rcx
  char *v16; // rdx
  int v17; // ecx
  unsigned int j; // ebx
  char *v19; // r9
  char *v20; // rcx
  __int128 v21; // [rsp+50h] [rbp-748h] BYREF
  volatile void *Address[2]; // [rsp+60h] [rbp-738h]
  volatile void *v23[2]; // [rsp+70h] [rbp-728h]
  unsigned int v24; // [rsp+80h] [rbp-718h]
  unsigned int v25; // [rsp+84h] [rbp-714h]
  __int128 v26; // [rsp+88h] [rbp-710h] BYREF
  char *v27; // [rsp+98h] [rbp-700h]
  volatile void *v28; // [rsp+A0h] [rbp-6F8h]
  volatile void *v29; // [rsp+A8h] [rbp-6F0h]
  char *v30; // [rsp+B0h] [rbp-6E8h]
  PVOID v31; // [rsp+C0h] [rbp-6D8h] BYREF
  _BYTE v32[572]; // [rsp+C8h] [rbp-6D0h] BYREF
  int v33; // [rsp+304h] [rbp-494h]
  PVOID P; // [rsp+310h] [rbp-488h] BYREF
  _BYTE v35[1096]; // [rsp+318h] [rbp-480h] BYREF
  int v36; // [rsp+760h] [rbp-38h]

  v21 = 0LL;
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( IsMismatchedKernelAbiSession() )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DxgkDDisplayEnum is called from container with different OS version.");
    WdLogSingleEntry1(2LL, -1073741735LL);
    WdLogGlobalForLineNumber = 10847;
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
    v3 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v3 = (struct _D3DKMT_DDISPLAY_ENUM2 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v21, v3, 0x30uLL);
    ProbeForWrite(Address[0], 572LL * DWORD2(v21), 4u);
    ProbeForWrite(v23[1], 1096LL * HIDWORD(Address[1]), 4u);
    v4 = 572LL;
    if ( ((int)v21 < 1 || HIDWORD(v21) >= 0x23C) && ((v5 = 1096LL, (int)v21 < 1) || LODWORD(v23[0]) >= 0x448) )
    {
      v6 = 0LL;
      v31 = 0LL;
      v33 = 0;
      v7 = 0LL;
      P = 0LL;
      v36 = 0;
      v8 = DWORD2(v21);
      if ( DWORD2(v21) )
      {
        PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER2,1>::AllocateElements((__int64 *)&v31, DWORD2(v21));
        v8 = DWORD2(v21);
        v6 = (char *)v31;
        v7 = (char *)P;
      }
      v9 = HIDWORD(Address[1]);
      if ( HIDWORD(Address[1]) )
      {
        PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET2,1>::AllocateElements((__int64 *)&P, HIDWORD(Address[1]));
        v9 = HIDWORD(Address[1]);
        v8 = DWORD2(v21);
        v6 = (char *)v31;
        v7 = (char *)P;
      }
      if ( (!v8 || v6) && (!(_DWORD)v9 || v7) )
      {
        v26 = v21;
        v28 = Address[1];
        v29 = v23[0];
        v27 = v6;
        v30 = v7;
        v10 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM2 *)&v26);
        DWORD1(v21) = DWORD1(v26);
        LODWORD(Address[1]) = (_DWORD)v28;
        LODWORD(v21) = 1;
        if ( (unsigned __int64)a1 + 48 > MmUserProbeAddress || (struct _D3DKMT_DDISPLAY_ENUM2 *)((char *)a1 + 48) <= a1 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = v21;
        *((_OWORD *)a1 + 1) = *(_OWORD *)Address;
        *((_OWORD *)a1 + 2) = *(_OWORD *)v23;
        if ( v10 >= 0 )
        {
          v11 = (char *)Address[0];
          if ( Address[0] )
          {
            v12 = HIDWORD(v21);
            if ( HIDWORD(v21) < 0x23C )
              v4 = HIDWORD(v21);
            for ( i = 0; ; ++i )
            {
              v24 = i;
              if ( i >= DWORD1(v26) )
                break;
              v14 = &v27[572 * i];
              v15 = &v11[i * v12];
              if ( (unsigned __int64)&v15[v4] > MmUserProbeAddress || &v15[v4] <= v15 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v15, v14, v4);
              v11 = (char *)Address[0];
              v12 = HIDWORD(v21);
            }
          }
          v16 = (char *)v23[1];
          if ( v23[1] )
          {
            v17 = (int)v23[0];
            if ( LODWORD(v23[0]) < 0x448 )
              v5 = LODWORD(v23[0]);
            for ( j = 0; ; ++j )
            {
              v25 = j;
              if ( j >= (unsigned int)v28 )
                break;
              v19 = &v30[1096 * j];
              v20 = &v16[j * v17];
              if ( (unsigned __int64)&v20[v5] > MmUserProbeAddress || &v20[v5] <= v20 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v20, v19, v5);
              v16 = (char *)v23[1];
              v17 = (int)v23[0];
            }
          }
        }
        if ( P != v35 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v36 = 0;
        if ( v31 != v32 && v31 )
          ExFreePoolWithTag(v31, 0);
        return (unsigned int)v10;
      }
      else
      {
        WdLogSingleEntry2(2LL, v8, v9);
        WdLogGlobalForLineNumber = 10891;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
          DWORD2(v21),
          HIDWORD(Address[1]),
          0LL,
          0LL,
          0LL);
        if ( P != v35 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v36 = 0;
        if ( v31 != v32 )
        {
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
        }
        return 3221225495LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
}
