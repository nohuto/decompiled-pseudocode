/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x140022BF0
 * Callers:
 *     ACPIIoctlAcquireGlobalLock @ 0x140021EC8 (ACPIIoctlAcquireGlobalLock.c)
 *     GlobalLockEventHandler @ 0x140022BB0 (GlobalLockEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  KIRQL v2; // di
  volatile signed __int32 *v3; // r8
  signed __int32 v4; // ecx
  bool v5; // zf
  signed __int32 v6; // eax
  void **i; // rcx
  _QWORD *v9; // rcx
  char *v10; // rax
  void **v11; // rdx
  void **v12; // rsi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      10,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        11,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        a1,
        *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  if ( *((_UNKNOWN **)AcpiInformation + 6) == (_UNKNOWN *)((char *)AcpiInformation + 48) )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
    if ( *((_BYTE *)AcpiInformation + 84) )
      goto LABEL_9;
    v4 = *v3;
    do
    {
      v6 = _InterlockedCompareExchange(v3, ((v4 & 2 | 4u) >> 1) | v4, v4);
      v5 = v4 == v6;
      v4 = v6;
    }
    while ( !v5 );
    if ( (v6 & 2) == 0 )
    {
LABEL_9:
      *((_QWORD *)AcpiInformation + 9) = a1;
      *((_DWORD *)AcpiInformation + 20) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          3,
          12,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      return 0LL;
    }
  }
  for ( i = (void **)*((_QWORD *)AcpiInformation + 6); ; i = (void **)*i )
  {
    if ( i == (void **)((char *)AcpiInformation + 48) )
    {
      *(_WORD *)(a1 + 10) = 1;
      v9 = (_QWORD *)(a1 + 16);
      v10 = (char *)AcpiInformation + 48;
      v11 = (void **)*((_QWORD *)AcpiInformation + 7);
      if ( *v11 != (char *)AcpiInformation + 48 )
        __fastfail(3u);
      *v9 = v10;
      *(_QWORD *)(a1 + 24) = v11;
      *v11 = v9;
      *((_QWORD *)v10 + 1) = v9;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          3,
          14,
          (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
          a1);
      goto LABEL_17;
    }
    v12 = i - 2;
    if ( i - 2 == (void **)a1 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      13,
      (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
      a1,
      *(_WORD *)(a1 + 10));
  ++*((_WORD *)v12 + 5);
LABEL_17:
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
  return 259LL;
}
