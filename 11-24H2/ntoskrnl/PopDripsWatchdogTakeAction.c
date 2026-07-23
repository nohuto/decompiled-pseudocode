/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x140765E80
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075EF20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x14048AB44 (PopFxBuildDripsBlockingDeviceList.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     PopDeviceConstraintsEnforced @ 0x1404BEB74 (PopDeviceConstraintsEnforced.c)
 *     PpmIdlePrevetoWatchdog @ 0x1405CC040 (PpmIdlePrevetoWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1405D1EE8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405D20D8 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopCheckTestsigningEnabled @ 0x140747620 (PopCheckTestsigningEnabled.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074BEEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopDripsWatchdogTakeAction(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // rax
  int v6; // r13d
  char v7; // r12
  __int64 result; // rax
  __int64 v9; // rcx
  __int128 *v10; // rdi
  char v11; // r15
  unsigned __int16 *v12; // r14
  __int64 v13; // r12
  char v14; // r13
  int v15; // eax
  ULONG_PTR v16; // rdi
  ULONG_PTR v17; // r14
  ULONG_PTR *v18; // r12
  ULONG_PTR v19; // r12
  __int64 v20; // rcx
  __int128 v21; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+B0h] [rbp+40h] BYREF
  int v23; // [rsp+C0h] [rbp+50h]
  __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v23 = a3;
  v3 = *(unsigned int *)(a1 + 8);
  v6 = 0;
  v24 = 0LL;
  v7 = a3;
  v21 = 0LL;
  v22 = 0;
  result = PopFxBuildDripsBlockingDeviceList(10000 * v3, (__int64 **)&v21);
  if ( (int)result >= 0 )
  {
    v10 = (__int128 *)v21;
    v11 = (_QWORD)v21 != (_QWORD)&v21;
    if ( (__int128 *)v21 != &v21 )
    {
      do
      {
        v12 = (unsigned __int16 *)(*((_QWORD *)v10 - 108) + 56LL);
        if ( *((_DWORD *)v10 + 8) )
        {
          v13 = 0LL;
          v14 = v23;
          do
          {
            PopDiagTraceCsDripsWatchdog(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 8),
              *(_BYTE *)(a1 + 24) != 0,
              *(_DWORD *)(a1 + 20),
              1u,
              a2,
              v12,
              (unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v10 + 3) + 8 * v13) + 56LL),
              0,
              v14);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *((_DWORD *)v10 + 8) );
          v7 = v23;
        }
        else
        {
          PopDiagTraceCsDripsWatchdog(
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 12),
            *(_DWORD *)(a1 + 8),
            *(_BYTE *)(a1 + 24) != 0,
            *(_DWORD *)(a1 + 20),
            1u,
            a2,
            v12,
            0LL,
            0,
            v7);
        }
        v10 = *(__int128 **)v10;
      }
      while ( v10 != &v21 );
      v10 = (__int128 *)v21;
      v6 = v22;
    }
    if ( !v11 )
    {
      PpmIdlePrevetoWatchdog(10000LL * *(unsigned int *)(a1 + 8), &v22, &v24);
      v6 = v22;
      PopDiagTraceCsDripsWatchdog(
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 8),
        *(_BYTE *)(a1 + 24) != 0,
        *(_DWORD *)(a1 + 20),
        0,
        a2,
        0LL,
        0LL,
        v22,
        v7);
      v10 = (__int128 *)v21;
    }
    v15 = *(unsigned __int8 *)(a1 + 24);
    if ( !(_BYTE)v15 || (a2 & 1) != 0 )
    {
      if ( (a2 & 2) != 0 )
      {
        PopDiagTraceCsDripsWatchdogPerfTrack(
          *(_DWORD *)a1,
          *(_DWORD *)(a1 + 12),
          *(_DWORD *)(a1 + 8),
          v15,
          *(_DWORD *)(a1 + 20),
          v11,
          a2);
        v10 = (__int128 *)v21;
      }
      if ( v11 )
      {
        v16 = (ULONG_PTR)(v10 - 57);
        v17 = v16 + 912;
        v18 = (ULONG_PTR *)(v16 + 48);
        if ( *(_DWORD *)(v16 + 944) )
          v18 = *(ULONG_PTR **)(v16 + 936);
        v19 = *v18;
      }
      else
      {
        v19 = 0LL;
        v16 = 0LL;
        v17 = 0LL;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( ((unsigned int)VfIsVerifierEnabled() || PopCheckTestsigningEnabled()) && v11 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v16, *(unsigned int *)(v17 + 16), v19);
      }
      else if ( (a2 & 8) != 0 )
      {
        if ( *(_DWORD *)(a1 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( v11 )
      {
        if ( (a2 & 0x40) != 0 )
          NT_ASSERT(
            "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromi"
            "sed. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idl"
            "e platform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of conn"
            "ected standby without
    activators active.

    Run !platformidle to identify the device with an
    unsat"
            "isifed DRIPS constraint.
");
        if ( (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v16, *(unsigned int *)(v17 + 16), v19);
      }
      if ( PopDeviceConstraintsEnforced(v9) && (a2 & 4) != 0 )
      {
        if ( v11 )
        {
          DbgkWerCaptureLiveKernelDump(
            (unsigned int)L"DripsWatchdog",
            351,
            2,
            v16,
            *(unsigned int *)(v17 + 16),
            v19,
            0LL,
            0LL,
            0);
        }
        else if ( v6 )
        {
          if ( PopFxProcessorPlugin )
            v20 = *(_QWORD *)(PopFxProcessorPlugin + 104);
          else
            v20 = 0LL;
          DbgkWerCaptureLiveKernelDump((unsigned int)L"DripsWatchdog", 351, 3, v6, v24, v20, 0LL, 0LL, 0);
        }
      }
    }
    return PopFxDestroyDripsBlockingDeviceList(&v21);
  }
  return result;
}
