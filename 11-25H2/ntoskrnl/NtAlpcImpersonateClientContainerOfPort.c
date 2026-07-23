/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x1404365B0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140447A80 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     PsImpersonateContainerOfThread @ 0x1404955A4 (PsImpersonateContainerOfThread.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpCaptureIdMessage @ 0x14085A0B0 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // r14
  int v6; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  int v8; // r9d
  struct _KTHREAD *v9; // r15
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v11; // rsi
  struct _KTHREAD *v12; // r8
  void *Teb; // r8
  __int64 v14; // r8
  int v16; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h] BYREF
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PVOID v19; // [rsp+48h] [rbp-30h]
  __int64 v20[5]; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = 0;
  v16 = 0;
  BugCheckParameter2 = 0LL;
  v22 = 0;
  v20[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v19 = 0LL;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage(Message, &v22, &v21);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v5 = Object;
    v19 = Object;
    if ( v6 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v6 = AlpcpLookupMessage((_DWORD)Object, v22, v21, v8, (__int64)&BugCheckParameter2);
        v21 = v6;
        if ( v6 >= 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
          {
            v9 = *(struct _KTHREAD **)(BugCheckParameter2 + 32);
            if ( v9 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(
                                                        *(struct _KTHREAD **)(BugCheckParameter2 + 32),
                                                        &v16);
              v11 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread(WorkOnBehalfThread);
                if ( v16 )
                  ObDereferenceObjectDeferDelete(v11);
              }
              else if ( IoThreadToProcess(v9)[3].UserWaitTime || PoEnergyEstimationEnabled() )
              {
                v11 = v9;
                PsImpersonateContainerOfThread(v9);
              }
              else
              {
                v11 = 0LL;
              }
              if ( v11 )
              {
                v12 = KeGetCurrentThread();
                if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v12->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v11, v20);
                  *(_QWORD *)(v14 + 696) = v20[0];
                }
              }
            }
            AlpcpUnlockMessage(BugCheckParameter2);
          }
          else
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v6 = -1073740029;
          }
        }
      }
      else
      {
        v6 = -1073741790;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegion();
  return v6;
}
