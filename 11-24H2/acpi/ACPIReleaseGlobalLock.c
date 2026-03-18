/*
 * XREFs of ACPIReleaseGlobalLock @ 0x140022EA0
 * Callers:
 *     GlobalLockEventHandler @ 0x140022BB0 (GlobalLockEventHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x14004A868 (ACPIIoctlReleaseGlobalLock.c)
 * Callees:
 *     WRITE_PM1_CONTROL @ 0x140023028 (WRITE_PM1_CONTROL.c)
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1400233C0 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1400236D4 (ACPIStartNextGlobalLockRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x140023BC4 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdx
  bool v6; // zf
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // ecx
  signed __int32 v9; // eax

  v4 = a1;
  v5 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v5 )
  {
    v6 = (*((_DWORD *)AcpiInformation + 20))-- == 1;
    if ( v6 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      v7 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
      v8 = *v7;
      if ( !*((_BYTE *)AcpiInformation + 84) )
      {
        do
        {
          v9 = _InterlockedCompareExchange(v7, v8 & 0xFFFFFFFC, v8);
          v6 = v8 == v9;
          v8 = v9;
        }
        while ( !v6 );
        if ( (v9 & 1) != 0 )
          WRITE_PM1_CONTROL(4LL, 0LL);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v7,
          3,
          17,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          v4);
      }
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
      {
        if ( (unsigned __int8)ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v7, a3, a4) )
          ACPIStartNextGlobalLockRequest();
      }
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      3,
      16,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      *((_QWORD *)AcpiInformation + 9),
      *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        3,
        15,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        a1);
    }
    return 3222536215LL;
  }
}
