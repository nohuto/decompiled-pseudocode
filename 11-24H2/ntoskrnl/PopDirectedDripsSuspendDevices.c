/*
 * XREFs of PopDirectedDripsSuspendDevices @ 0x140A35914
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x14074AEB0 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140A35E50 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A360B8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14049736C (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140A35A78 (PopDirectedDripsAcquireTransitionLock.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140A35AD4 (PopDirectedDripsInitializeBroadcast.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140A36088 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x140A88168 (PopDirectedDripsDestroyBroadcast.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PopDirectedDripsSuspendDevices(signed __int32 *a1)
{
  __int64 v2; // rbp
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edi
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int v11; // eax

  v2 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v3 = *a1;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(a1, v3, v3);
  }
  while ( v4 != v3 );
  if ( a1[37] || (v3 & 0x3000) == 0 || (v3 & 0x10) != 0 )
  {
    v7 = -1073741823;
  }
  else
  {
    v5 = v3 & 0x800;
    if ( (v3 & 0x800) == 0 || (v3 & 8) != 0 )
    {
      PopDirectedDripsAcquireTransitionLock(a1);
      a1[21] = 0;
      a1[15] = 1;
      a1[16] = 5;
      a1[17] = 5;
      a1[20] = a1[14];
      a1[18] = 1;
      a1[19] = 2;
      v6 = PopDirectedDripsInitializeBroadcast(a1);
      v7 = v6;
      if ( v6 >= 0 )
      {
        _InterlockedOr(a1, 0x80u);
        if ( v5 )
        {
          *((_BYTE *)a1 + 86) = 3;
          PoBroadcastSystemState(a1 + 15);
        }
        *((_BYTE *)a1 + 588) = 0;
        *((_BYTE *)a1 + 86) = 2;
        v11 = PoBroadcastSystemState(a1 + 15);
        a1[35] = v11;
        v7 = v11;
        if ( v11 >= 0 )
        {
          _InterlockedOr(a1, 0x10u);
          _InterlockedAnd(a1, 0xFFFFFFDF);
          ++a1[36];
          v7 = 0;
          goto LABEL_14;
        }
      }
      else
      {
        a1[35] = v6;
      }
    }
    else
    {
      v7 = -1073741536;
    }
  }
  _m_prefetchw(a1);
  v8 = *a1;
  do
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange(a1, v8, v8);
  }
  while ( v9 != v8 );
  if ( (v8 & 0x80u) != 0 )
  {
    PopDirectedDripsDestroyBroadcast();
    _InterlockedAnd(a1, 0xFFFFFF7F);
  }
  PopDirectedDripsReleaseTransitionLock(a1);
LABEL_14:
  PopDirectedDripsDiagTraceNotifyDevices(1u, v7, (MEMORY[0xFFFFF78000000008] - v2) / 0x989680uLL);
  return v7;
}
