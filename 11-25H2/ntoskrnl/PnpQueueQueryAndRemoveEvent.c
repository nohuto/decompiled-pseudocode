/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x14096B044
 * Callers:
 *     PnpRequestDeviceEjectExWorker @ 0x140715150 (PnpRequestDeviceEjectExWorker.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x140463B34 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140463D80 (PnpDiagnosticTraceDeviceOperation.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpRemoveEventFromQueue @ 0x140721DDC (PnpRemoveEventFromQueue.c)
 *     PnpAllocateCriticalMemory @ 0x14082F488 (PnpAllocateCriticalMemory.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x14096B440 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  unsigned __int16 *v6; // rbp
  char *v8; // r12
  char *v9; // r13
  unsigned __int16 *v10; // rsi
  char v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  PVOID v14; // rcx
  int v15; // r14d
  int v16; // ebx
  int v17; // r12d
  __int64 CriticalMemory; // rdi
  void *v19; // r14
  int inserted; // ebx
  unsigned int v21; // ecx
  _WORD *v22; // rdi
  PVOID v23; // rcx
  __int64 v25; // rdi
  char *Pool2; // rax
  int v27; // ecx
  _WORD *i; // rax
  int v29; // [rsp+30h] [rbp-B8h]
  char v30; // [rsp+70h] [rbp-78h]
  int v31; // [rsp+74h] [rbp-74h] BYREF
  BOOL v32; // [rsp+78h] [rbp-70h]
  _DWORD Size[3]; // [rsp+7Ch] [rbp-6Ch]
  PVOID P; // [rsp+88h] [rbp-60h]
  struct _KEVENT Event; // [rsp+90h] [rbp-58h] BYREF

  v6 = a1;
  Event.Header.WaitListHead.Blink = 0LL;
  v31 = 0;
  P = 0LL;
  v8 = a2;
  v30 = 0;
  v9 = 0LL;
  *(_DWORD *)a2 = 0;
  v10 = 0LL;
  v11 = 0;
  *(_OWORD *)&Event.Header.Lock = 0LL;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)v6, 0x43706E50u);
  *(_QWORD *)&Size[1] = v12;
  v13 = v12;
  if ( !v12 )
  {
    inserted = -1073741810;
    goto LABEL_31;
  }
  v14 = *(PVOID *)(v12[39] + 40LL);
  if ( !v14 )
  {
    inserted = -1073741810;
LABEL_40:
    v19 = v12;
    goto LABEL_27;
  }
  if ( v14 == IopRootDeviceNode )
  {
    inserted = -1073741790;
    goto LABEL_40;
  }
  if ( !*(_DWORD *)a4 )
  {
    v15 = 1;
LABEL_8:
    if ( (a5 & 8) != 0 && a6 )
      v15 = 1;
    v32 = (a5 & 0xB) != 0;
    if ( (a5 & 2) != 0 )
    {
      v16 = 22;
    }
    else
    {
      if ( (a5 & 8) != 0 )
      {
        v16 = 47;
        v17 = 1;
        goto LABEL_12;
      }
      v16 = 21;
    }
    v17 = 0;
LABEL_12:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v31 = 259;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      inserted = -1073741431;
    }
    else
    {
      Size[0] = *(unsigned __int16 *)(*(_QWORD *)(v13[39] + 40LL) + 40LL) + 202;
      CriticalMemory = PnpAllocateCriticalMemory(0, 0x100uLL);
      if ( CriticalMemory )
      {
        v29 = v15;
        v19 = *(void **)&Size[1];
        PnpInitializeTargetDeviceRemoveEvent(
          (void *)CriticalMemory,
          Size[0],
          *(PVOID *)&Size[1],
          v32,
          v17,
          v29,
          v16,
          0,
          (__int64)&Event,
          (__int64)&v31,
          (__int64)v9,
          (__int64)v10);
        ++*(_DWORD *)(CriticalMemory + 64);
        *(_QWORD *)(CriticalMemory + 32) = 0LL;
        *(_QWORD *)(CriticalMemory + 40) = 0LL;
        P = (PVOID)CriticalMemory;
        inserted = PnpInsertEventInQueue(CriticalMemory);
        if ( inserted >= 0 )
        {
          inserted = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( inserted != 257 )
            goto LABEL_17;
          if ( (unsigned int)PnpRemoveEventFromQueue((PVOID)CriticalMemory) )
          {
            inserted = -1073741536;
          }
          else
          {
            if ( _InterlockedExchange((volatile __int32 *)(CriticalMemory + 68), 1) )
            {
              inserted = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_17:
              v8 = a2;
              if ( inserted >= 0 )
                inserted = v31;
              if ( v9 )
                *(_DWORD *)a2 = *(_DWORD *)v9;
              if ( v10 )
              {
                v21 = *v10;
                if ( (_WORD)v21 )
                {
                  if ( v21 >= *(_DWORD *)a4 )
                  {
                    LOWORD(v21) = *a4 - 2;
                    *v10 = v21;
                  }
                  v22 = a3;
                  memmove(a3, *((const void **)v10 + 1), (unsigned __int16)v21);
                  a3[(unsigned __int64)*v10 >> 1] = 0;
                }
                else
                {
                  v22 = a3;
                }
                *(_DWORD *)a4 = *v10;
              }
              else
              {
                v22 = a3;
              }
              if ( *(_DWORD *)a2 == 6 && *(_DWORD *)a4 >= 2u )
              {
                v27 = 0;
                for ( i = v22; *i; ++i )
                {
                  if ( *i == 92 && ++v27 == 3 )
                  {
                    *i = 0;
                    *(_DWORD *)a4 = (unsigned __int16)((_WORD)i - (_WORD)v22);
                    goto LABEL_26;
                  }
                }
              }
              goto LABEL_26;
            }
            *(_BYTE *)(CriticalMemory + 72) = 1;
            _InterlockedExchange((volatile __int32 *)(CriticalMemory + 68), 0);
            inserted = -1073741536;
            v30 = 0;
          }
        }
LABEL_51:
        v8 = a2;
LABEL_26:
        v6 = a1;
        goto LABEL_27;
      }
      inserted = -1073741670;
    }
    v19 = *(void **)&Size[1];
    goto LABEL_51;
  }
  v25 = *(unsigned int *)a4;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v25 + 20);
    v13 = *(_QWORD **)&Size[1];
    v10 = (unsigned __int16 *)(v9 + 4);
    *(_QWORD *)(v9 + 12) = v9 + 20;
    v15 = 0;
    *((_WORD *)v9 + 3) = *a4;
    *((_WORD *)v9 + 2) = 0;
    v30 = 1;
    goto LABEL_8;
  }
  v19 = *(void **)&Size[1];
  inserted = -1073741670;
LABEL_27:
  ObfDereferenceObjectWithTag(v19, 0x43706E50u);
  v23 = P;
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(v23, 0x4B706E50u);
  v11 = v30;
LABEL_31:
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, v6, inserted, (__int64)v10, *v8);
  if ( v11 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inserted;
}
