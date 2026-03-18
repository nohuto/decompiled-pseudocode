/*
 * XREFs of NVMeControllerReset @ 0x14001D564
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     IoTimeoutCallback @ 0x140011F50 (IoTimeoutCallback.c)
 *     NVMeHwResetBus @ 0x1400186F0 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x14001C690 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     IsNVMeControllerOnFatalError @ 0x14000D070 (IsNVMeControllerOnFatalError.c)
 *     NVMeControllerStartFailureEventLog @ 0x14000D720 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     NVMeIsDeviceGone @ 0x140017120 (NVMeIsDeviceGone.c)
 *     FillControllerRuntimeLog @ 0x140017B10 (FillControllerRuntimeLog.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x14001BAD8 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x14001C710 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x14001DEAC (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x14001EEB0 (NvmSubsystemReset.c)
 *     NVMeControllerReinitialize @ 0x1400274C4 (NVMeControllerReinitialize.c)
 *     ResumeIrpCommands @ 0x14002D47C (ResumeIrpCommands.c)
 *     SendNVMeEventNotification @ 0x14002FFC8 (SendNVMeEventNotification.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v2; // r15
  char v6; // dl
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // di
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  char v18; // al
  __int64 i; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _BYTE v23[4]; // [rsp+60h] [rbp-69h] BYREF
  int v24; // [rsp+64h] [rbp-65h]
  __int64 v25; // [rsp+68h] [rbp-61h]
  __int128 v26; // [rsp+70h] [rbp-59h]
  __int128 v27; // [rsp+80h] [rbp-49h] BYREF
  _DWORD v28[24]; // [rsp+90h] [rbp-39h] BYREF

  v2 = 0;
  v26 = 0LL;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 0) )
    return 1;
  *(_DWORD *)(a1 + 24) |= 0x80000u;
  StorPortPause(a1, 120LL);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), 4u);
  v8 = *(unsigned int *)(a1 + 156);
  if ( (_DWORD)v8 )
    StorPortExtendedFunction(81LL, a1, v8, v7);
  *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
  NVMeCancelAllCompletionQueueDpc(a1, v6);
  v10 = *(unsigned int *)(a1 + 156);
  if ( (_DWORD)v10 )
    StorPortExtendedFunction(81LL, a1, v10, v9);
  NVMeControllerCompleteAllIORequests(a1, 14, v10, v9);
  if ( NVMeIsDeviceGone(a1, v11, v12) )
    goto LABEL_8;
  IsNVMeControllerOnFatalError(v13);
  if ( a2 )
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 192), 0x24u) || !(unsigned __int8)NvmSubsystemReset(a1) )
    {
LABEL_8:
      v14 = 0;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 )
      *(_BYTE *)(a1 + 3728) |= 4u;
    goto LABEL_16;
  }
  if ( !(unsigned int)ControllerReset(a1, 0, v15, v16) )
  {
    *(_BYTE *)(a1 + 3728) &= ~4u;
LABEL_16:
    v14 = NVMeControllerReinitialize(a1);
    goto LABEL_30;
  }
  v14 = 0;
  v23[0] = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x1840) != 0 && !(unsigned int)StorPortExtendedFunction(109LL, a1, v23, v17) && !v23[0] )
  {
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    if ( (*(_DWORD *)(a1 + 56) & 0x40) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 0LL))
      || (*(_DWORD *)(a1 + 56) & 0x800) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 2LL))
      || (*(_DWORD *)(a1 + 56) & 0x1000) != 0
      && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 1LL)) )
    {
      v14 = 1;
      goto LABEL_30;
    }
    v18 = *(_BYTE *)(a1 + 3728);
    if ( (v18 & 4) != 0 )
      *(_BYTE *)(a1 + 3728) = v18 & 0xFB;
  }
  v2 = 1;
LABEL_30:
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
  {
    v20 = *(_QWORD *)(a1 + 8 * i + 1672);
    if ( v20 )
    {
      if ( !a2 )
        ++*(_DWORD *)(v20 + 40);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 1672) + 44LL);
    }
  }
  v21 = *(_DWORD *)(a1 + 24);
  if ( (v21 & 0x10) != 0 )
    *(_DWORD *)(a1 + 24) = v21 & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 3748) &= ~1u;
  StorPortResume(a1);
  ResumeIrpCommands(a1);
  v22 = a1;
  if ( v14 )
  {
    *(_QWORD *)&v26 = v26 | 0x200;
    goto LABEL_42;
  }
  NVMeControllerStartFailureEventLog(a1);
  if ( v2 )
  {
    memset(v28, 0, 0x58uLL);
    FillControllerRuntimeLog(a1, v28);
    v25 = 0LL;
    v25 = *(_QWORD *)(a1 + 24);
    v24 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
    *(_QWORD *)&v26 = v26 | 0x400;
    v22 = a1;
LABEL_42:
    v27 = v26;
    SendNVMeEventNotification(v22, &v27, 0LL, 0LL);
  }
  *(_DWORD *)(a1 + 24) &= ~0x80000u;
  return v14;
}
