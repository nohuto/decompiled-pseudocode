/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x1409ED030
 * Callers:
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407608DC (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopWin32kActivatorWorker @ 0x1409EBE10 (PopWin32kActivatorWorker.c)
 *     PiPdcDeactivate @ 0x1409ED014 (PiPdcDeactivate.c)
 * Callees:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x1402B83F0 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PdcPortSendMessageSynchronously @ 0x1404897EC (PdcPortSendMessageSynchronously.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PdcWaitForEvent @ 0x14078E0E4 (PdcWaitForEvent.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A45F04 (PdcAcquireRwLockExclusive2.c)
 *     PdcReleaseRwLockExclusive2 @ 0x140A52844 (PdcReleaseRwLockExclusive2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  PVOID *v8; // rax
  _BYTE v10[40]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  char v14; // [rsp+370h] [rbp+270h] BYREF
  LARGE_INTEGER Timeout; // [rsp+378h] [rbp+278h] BYREF

  memset_0(v10, 0, 0x320uLL);
  v2 = 0LL;
  v14 = 0;
  v3 = 0LL;
  if ( !P )
  {
    v5 = -1073741585;
    goto LABEL_19;
  }
  v2 = (__int64)P;
  if ( P[4] != 1094927440 )
  {
    v5 = -1073741585;
    v2 = 0LL;
    goto LABEL_19;
  }
  v3 = *((_QWORD *)P + 3);
  if ( *(_DWORD *)v3 != 843138128 )
  {
    v2 = 0LL;
    v5 = -1073741585;
    v3 = 0LL;
LABEL_19:
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v2, (unsigned int *)v3, v5);
    goto LABEL_20;
  }
  Timeout.QuadPart = -600000000LL;
  while ( 1 )
  {
    v4 = KeWaitForSingleObject(*(PVOID *)(v3 + 8), Executive, 0, 0, &Timeout);
    if ( !v4 )
      break;
    if ( v4 != 258 )
      goto LABEL_29;
  }
  v14 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 24)) == 1 )
    *(_QWORD *)(v3 + 16) = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v3 + 16) != KeGetCurrentThread() )
    __fastfail(0x28u);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v3 + 96) )
  {
    while ( *(int **)(v3 + 112) == P )
    {
      PdcReleaseRwLockExclusive2(v3 + 8, &v14);
      PdcWaitForEvent(*(void **)(v3 + 104));
      PdcAcquireRwLockExclusive2(v3 + 8, &v14);
    }
  }
  if ( !*(_QWORD *)(v3 + 40) )
  {
    v5 = -1073740032;
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(v3 + 4LL * P[12] + 256) )
  {
    v5 = -1073741823;
    goto LABEL_19;
  }
  v13 = *((_QWORD *)P + 74);
  v11 = 13;
  v5 = PdcPortSendMessageSynchronously(*(struct _EX_RUNDOWN_REF **)(v3 + 40), (__int64)v10);
  if ( v5 < 0 )
    goto LABEL_19;
  v5 = v12;
  if ( v12 < 0 )
    goto LABEL_19;
  v6 = *((_QWORD *)P + 3);
  --*(_DWORD *)(v6 + 4LL * P[12] + 256);
  --*(_DWORD *)(v6 + 252);
  P[4] = 0;
  Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE((__int64)P, (unsigned int *)v3, 0);
  v7 = *(_QWORD **)P;
  if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  P[4] = 0;
  ExFreePoolWithTag(P, 0);
LABEL_20:
  if ( v14 )
  {
    if ( !*(_QWORD *)(v3 + 8) || *(struct _KTHREAD **)(v3 + 16) != KeGetCurrentThread() || *(int *)(v3 + 24) <= 0 )
LABEL_29:
      __fastfail(5u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 24), 0xFFFFFFFF) == 1 )
      *(_QWORD *)(v3 + 16) = 0LL;
    KeReleaseMutex(*(PRKMUTEX *)(v3 + 8), 0);
  }
  return (unsigned int)v5;
}
