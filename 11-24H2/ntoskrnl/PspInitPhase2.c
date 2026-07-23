/*
 * XREFs of PspInitPhase2 @ 0x140C372AC
 * Callers:
 *     PsInitSystem @ 0x140BE07F8 (PsInitSystem.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     PspInitializeProtectedProcessParameters @ 0x140771E58 (PspInitializeProtectedProcessParameters.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     RtlRandom @ 0x140A46340 (RtlRandom.c)
 *     PspInitializeSystemDlls @ 0x140C379D4 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  _KSCHEDULING_GROUP *UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  __int64 v4; // rcx
  char v5; // al
  void *ServerSiloGlobals; // rax
  ULONG Seed; // [rsp+38h] [rbp+10h] BYREF

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E08630, 0LL, 0LL);
  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise().QuadPart;
  PsInitialSystemProcess[3].ContextSwitches = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = (_KSCHEDULING_GROUP *)KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[3].SchedulingGroup = UnbiasedInterruptTime;
  v2[63] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[208] = PsInitialSystemProcess[3].ContextSwitches;
  v2[209] = PsInitialSystemProcess[3].SchedulingGroup;
  RtlGetSystemTimePrecise();
  PspWorkOnBehalfEncodingKey = (unsigned __int64)RtlRandom(&Seed) << 32;
  PspWorkOnBehalfEncodingKey = RtlRandom(&Seed) | (unsigned __int64)PspWorkOnBehalfEncodingKey;
  if ( PspSehValidationPolicy )
  {
    if ( PspSehValidationPolicy == 2 )
      v3 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xF3 | 8;
    else
      v3 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xF3 | 4;
    *(_BYTE *)(MmWriteableSharedUserData + 725) = v3;
  }
  else
  {
    *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xF3u;
  }
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v4 = MmWriteableSharedUserData;
      v5 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xCF | 0x10;
      goto LABEL_14;
    case 2:
      v4 = MmWriteableSharedUserData;
      v5 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xCF | 0x20;
LABEL_14:
      *(_BYTE *)(v4 + 725) = v5;
      break;
    case -1:
      *(_BYTE *)(MmWriteableSharedUserData + 725) |= 0x30u;
      break;
    default:
      *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xCFu;
      break;
  }
  PspInitializeSystemDlls();
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  return (int)PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals) >= 0;
}
