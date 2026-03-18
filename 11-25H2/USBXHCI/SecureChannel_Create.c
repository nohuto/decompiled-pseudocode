/*
 * XREFs of SecureChannel_Create @ 0x14007F8F8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SecureChannel_Create(union _LARGE_INTEGER a1, union _LARGE_INTEGER **a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // edx
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-20h]
  void *v14; // [rsp+60h] [rbp-10h]
  union _LARGE_INTEGER *v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v4 = *(_QWORD *)(a1.QuadPart + 88);
  DWORD1(v11) = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01033 + 3584))(
         WdfDriverGlobals,
         v4,
         &v16);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v11 = 0LL;
    v14 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v11) = -1;
      else
        LODWORD(v11) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v11) = 56;
    }
    *((_QWORD *)&v12 + 1) = 0x100000001LL;
    v14 = off_14006B0D8;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, union _LARGE_INTEGER **))(WdfFunctions_01033 + 1624))(
           WdfDriverGlobals,
           v16,
           &v11,
           &v15);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v7;
      v8 = 11;
      goto LABEL_4;
    }
    v15->QuadPart = v16;
    v15[1] = a1;
    KeQueryPerformanceCounter(v15 + 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a1.QuadPart + 16),
        v9,
        19,
        12,
        (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
        v16);
    }
    *a2 = v15;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 10;
LABEL_4:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1.QuadPart + 16),
      v6,
      19,
      v8,
      (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
      v5);
  }
  return v7;
}
