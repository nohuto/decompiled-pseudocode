/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x140027150
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x14000D720 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     FillControllerRuntimeLog @ 0x140017B10 (FillControllerRuntimeLog.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x14001BAD8 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x14001C710 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x14001DEAC (NVMeHardwareReset.c)
 *     NVMeControllerReinitialize @ 0x1400274C4 (NVMeControllerReinitialize.c)
 *     ResumeIrpCommands @ 0x14002D47C (ResumeIrpCommands.c)
 *     SendNVMeEventNotification @ 0x14002FFC8 (SendNVMeEventNotification.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeControllerPanicResetActionWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // r9
  bool v7; // zf
  char v8; // dl
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  char v19; // al
  __int64 i; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int128 v24; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v25[24]; // [rsp+80h] [rbp-29h] BYREF

  v5 = 0;
  memset(v25, 0, 0x58uLL);
  v7 = (*(_DWORD *)(a1 + 24) & 0x8008) == 0;
  v24 = 0LL;
  if ( v7 && *(_QWORD *)(a1 + 3936) && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 0) )
  {
    *(_DWORD *)(a1 + 24) |= 0x40000u;
    StorPortPause(a1, 120LL);
    *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
    v10 = *(unsigned int *)(a1 + 156);
    if ( (_DWORD)v10 )
      StorPortExtendedFunction(81LL, a1, v10, v9);
    *(_DWORD *)(a1 + 24) |= 0x10u;
    NVMeCancelAllCompletionQueueDpc(a1, v8);
    v12 = *(unsigned int *)(a1 + 156);
    if ( (_DWORD)v12 )
      StorPortExtendedFunction(81LL, a1, v12, v11);
    NVMeControllerCompleteAllIORequests(a1, 14, v12, v11);
    v14 = 10000000LL;
    v15 = 1000 * **(unsigned __int16 **)(a1 + 3936);
    if ( v15 < 0x989680 )
      v14 = v15;
    StorPortExtendedFunction(81LL, a1, v14, v13);
    StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 3936) + 2LL) & 1) == 0 || (unsigned int)ControllerReset(a1, 0, v16, v17) )
    {
      v18 = *(_QWORD *)(a1 + 3936);
      *(_DWORD *)(a1 + 24) &= ~0x10u;
      if ( (*(_BYTE *)(v18 + 2) & 4) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 0, v16))
        || (*(_BYTE *)(*(_QWORD *)(a1 + 3936) + 2LL) & 0x20) != 0
        && (*(_DWORD *)(a1 + 56) & 0x800) != 0
        && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 2u, v16))
        || (*(_BYTE *)(*(_QWORD *)(a1 + 3936) + 2LL) & 0x10) != 0
        && (*(_DWORD *)(a1 + 56) & 0x1000) != 0
        && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)NVMeHardwareReset(a1, 1u, v16)) )
      {
        v5 = 1;
      }
      else
      {
        v19 = *(_BYTE *)(a1 + 3728);
        if ( (v19 & 4) != 0 )
          *(_BYTE *)(a1 + 3728) = v19 & 0xFB;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 3728) &= ~4u;
      v5 = NVMeControllerReinitialize(a1);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v21 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v21 )
        ++*(_DWORD *)(v21 + 44);
    }
    v22 = *(_DWORD *)(a1 + 3748);
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    *(_DWORD *)(a1 + 3748) = v22 & 0xFFFFFFFE;
    StorPortResume(a1);
    ResumeIrpCommands(a1);
    if ( v5 )
    {
      ++*(_DWORD *)(a1 + 4136);
      goto LABEL_32;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeControllerStartFailureEventLog(a1);
      FillControllerRuntimeLog(a1, v25);
      StorPortNotification(4109LL, a1, 0LL);
      *(_QWORD *)&v24 = v24 | 0x400;
      SendNVMeEventNotification(a1, &v24, 0LL, 0LL);
    }
  }
  ++*(_DWORD *)(a1 + 4140);
LABEL_32:
  *(_DWORD *)(a1 + 24) &= ~0x40000u;
  return StorPortExtendedFunction(31LL, a1, a3, v6);
}
