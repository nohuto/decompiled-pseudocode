/*
 * XREFs of ACPIBuildDockExtension @ 0x140058480
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140029280 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildDeviceExtension @ 0x140047880 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  char *Pool2; // rax
  const char *v5; // rsi
  char *v6; // r15
  int v7; // ebp
  __int64 v8; // rax
  const char *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // rcx
  const char *v12; // rax
  const char *v13; // rsi
  const char *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  v16 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v16);
  if ( (int)result >= 0 )
  {
    v3 = v16;
    if ( v16 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 21LL, 1399874369LL);
      v5 = byte_140075488;
      v6 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0x15uLL, "ACPI\\DockDevice");
        v3[76] = v6;
        v7 = ACPIAmliBuildObjectPathname(a1, &P, 0);
        if ( v7 >= 0 )
        {
          v3[77] = P;
          v3[23] = *(_QWORD *)(*a1 + 104);
          *((_DWORD *)v3 + 48) = 4;
          *((_DWORD *)v3 + 50) = 0;
          _InterlockedOr64(v3 + 1, 0x209E00000020008uLL);
          v13 = byte_140075488;
          v14 = byte_140075488;
          v15 = v16[1];
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v13 = (const char *)v3[76];
            if ( (v15 & 0x400000000000LL) != 0 )
              v14 = (const char *)v16[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x55u,
              (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
              v7,
              (char)v16,
              v13,
              v14);
          return (unsigned int)v7;
        }
        v8 = v3[1];
        v9 = byte_140075488;
        v10 = byte_140075488;
        if ( (v8 & 0x200000000000LL) != 0 )
        {
          v9 = (const char *)v3[76];
          if ( (v8 & 0x400000000000LL) != 0 )
            v10 = (const char *)v3[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0x53u,
            (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
            v7,
            (char)v3,
            v9,
            v10);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x52u,
            (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
            21);
        v7 = -1073741670;
      }
      v11 = v3[1];
      v12 = byte_140075488;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v5 = (const char *)v3[76];
        if ( (v11 & 0x400000000000LL) != 0 )
          v12 = (const char *)v3[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x54u,
          (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
          v7,
          (char)v3,
          v5,
          v12);
      if ( P )
      {
        _InterlockedAnd64(v3 + 1, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        v16[77] = 0LL;
      }
      if ( v6 )
      {
        _InterlockedAnd64(v3 + 1, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v6, 0);
        v16[76] = 0LL;
      }
      _InterlockedOr64(v3 + 1, 0x2000000000000uLL);
      return (unsigned int)v7;
    }
  }
  return result;
}
