/*
 * XREFs of PopDirectedDripsBuildPs4BroadcastTree @ 0x140764840
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764520 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsVisitDevice @ 0x1406F760C (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140763F0C (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsFindPs4RootDevice @ 0x140764994 (PopDirectedDripsFindPs4RootDevice.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1407649B4 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1407649D8 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsRemoveQueueDevice @ 0x140764A60 (PopDirectedDripsRemoveQueueDevice.c)
 *     PopDirectedDripsVisitPs4Device @ 0x140764A90 (PopDirectedDripsVisitPs4Device.c)
 */

__int64 __fastcall PopDirectedDripsBuildPs4BroadcastTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 Ps4RootDevice; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int v18; // r9d
  _QWORD v20[3]; // [rsp+20h] [rbp-18h] BYREF

  v20[1] = v20;
  v20[0] = v20;
  PopDirectedDripsInsertQueueDevice(v20);
  while ( (_QWORD *)v20[0] != v20 )
  {
    v5 = PopDirectedDripsRemoveQueueDevice(v20);
    v6 = v5;
    v7 = v5 - 728;
    if ( (*(_DWORD *)(v5 + 32) & 0x20000) == 0 )
    {
      PopDirectedDripsVisitDevice(a2, v5, a3, 4u);
      Ps4RootDevice = PopDirectedDripsFindPs4RootDevice(v7);
      v9 = (_QWORD *)Ps4RootDevice;
      if ( !Ps4RootDevice )
      {
        *(_DWORD *)(v6 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v7, a3, 3u);
        v13 = 3221225659LL;
LABEL_16:
        PopDirectedDripsFlushDeviceQueue(v20, v11, v12, v13);
        return v18;
      }
      v10 = PopDirectedDripsVisitPs4Device(Ps4RootDevice, v20, a2, a3);
      v13 = (unsigned int)v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v14 = (_QWORD *)v9[1];
      v15 = v9;
      while ( v14 )
      {
        v15 = v14;
        v14 = (_QWORD *)v14[1];
      }
      while ( v15 != v9 )
      {
        v16 = PopDirectedDripsVisitPs4Device(v15, v20, a2, a3);
        v13 = (unsigned int)v16;
        if ( v16 < 0 )
          goto LABEL_16;
        v17 = (_QWORD *)*v15;
        if ( *v15 )
        {
          do
          {
            v15 = v17;
            v17 = (_QWORD *)v17[1];
          }
          while ( v17 );
        }
        else
        {
          v15 = (_QWORD *)v15[2];
        }
      }
    }
  }
  return 0;
}
