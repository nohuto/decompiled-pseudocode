/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x1408B079C
 * Callers:
 *     PnpRequestDeviceEjectExWorker @ 0x14071EDE0 (PnpRequestDeviceEjectExWorker.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402F0878 (PnpDiagnosticTraceDeviceOperation.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpRemoveEventFromQueue @ 0x14072BD6C (PnpRemoveEventFromQueue.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1408B0638 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpAllocateCriticalMemory @ 0x1409BBC94 (PnpAllocateCriticalMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  unsigned __int16 *v6; // rbp
  char *v8; // r12
  char *v9; // r13
  unsigned __int16 *v10; // rsi
  char v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  PVOID v14; // rcx
  __int64 v15; // rax
  int v16; // r14d
  int v17; // ebx
  int v18; // r12d
  __int64 CriticalMemory; // rdi
  void *v20; // r14
  NTSTATUS inserted; // ebx
  unsigned int v22; // ecx
  _WORD *v23; // rdi
  PVOID v24; // rcx
  __int64 v26; // rdi
  char *Pool2; // rax
  int v28; // ecx
  _WORD *i; // rax
  int v30; // [rsp+30h] [rbp-B8h]
  char v31; // [rsp+70h] [rbp-78h]
  int v32; // [rsp+74h] [rbp-74h] BYREF
  BOOL v33; // [rsp+78h] [rbp-70h]
  _DWORD Size[3]; // [rsp+7Ch] [rbp-6Ch]
  PVOID P; // [rsp+88h] [rbp-60h]
  struct _KEVENT Event; // [rsp+90h] [rbp-58h] BYREF

  v6 = a1;
  Event.Header.WaitListHead.Blink = 0LL;
  v32 = 0;
  P = 0LL;
  v8 = a2;
  v31 = 0;
  v9 = 0LL;
  *(_DWORD *)a2 = 0;
  v10 = 0LL;
  v11 = 0;
  *(_OWORD *)&Event.Header.Lock = 0LL;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag(v6, 1131441744LL);
  *(_QWORD *)&Size[1] = v12;
  v13 = v12;
  if ( !v12 )
  {
    inserted = -1073741810;
    goto LABEL_31;
  }
  v14 = *(PVOID *)(*(_QWORD *)(v12 + 312) + 40LL);
  if ( !v14 )
  {
    inserted = -1073741810;
LABEL_40:
    v20 = (void *)v12;
    goto LABEL_27;
  }
  if ( v14 == IopRootDeviceNode )
  {
    inserted = -1073741790;
    goto LABEL_40;
  }
  v15 = *(unsigned int *)a4;
  if ( !(_DWORD)v15 )
  {
    v16 = 1;
LABEL_8:
    if ( (a5 & 8) != 0 && a6 )
      v16 = 1;
    v33 = (a5 & 0xB) != 0;
    if ( (a5 & 2) != 0 )
    {
      v17 = 22;
    }
    else
    {
      if ( (a5 & 8) != 0 )
      {
        v17 = 47;
        v18 = 1;
        goto LABEL_12;
      }
      v17 = 21;
    }
    v18 = 0;
LABEL_12:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v32 = 259;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      inserted = -1073741431;
    }
    else
    {
      Size[0] = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) + 40LL) + 202;
      CriticalMemory = PnpAllocateCriticalMemory(0LL, 256LL, Size[0], 1265659472LL);
      if ( CriticalMemory )
      {
        v30 = v16;
        v20 = *(void **)&Size[1];
        PnpInitializeTargetDeviceRemoveEvent(
          (char *)CriticalMemory,
          Size[0],
          *(PVOID *)&Size[1],
          0,
          v33,
          v18,
          v30,
          v17,
          0,
          (__int64)&Event,
          &v32,
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
                inserted = v32;
              if ( v9 )
                *(_DWORD *)a2 = *(_DWORD *)v9;
              if ( v10 )
              {
                v22 = *v10;
                if ( (_WORD)v22 )
                {
                  if ( v22 >= *(_DWORD *)a4 )
                  {
                    LOWORD(v22) = *a4 - 2;
                    *v10 = v22;
                  }
                  v23 = a3;
                  memmove(a3, *((const void **)v10 + 1), (unsigned __int16)v22);
                  a3[(unsigned __int64)*v10 >> 1] = 0;
                }
                else
                {
                  v23 = a3;
                }
                *(_DWORD *)a4 = *v10;
              }
              else
              {
                v23 = a3;
              }
              if ( *(_DWORD *)a2 == 6 && *(_DWORD *)a4 >= 2u )
              {
                v28 = 0;
                for ( i = v23; *i; ++i )
                {
                  if ( *i == 92 && ++v28 == 3 )
                  {
                    *i = 0;
                    *(_DWORD *)a4 = (unsigned __int16)((_WORD)i - (_WORD)v23);
                    goto LABEL_26;
                  }
                }
              }
              goto LABEL_26;
            }
            *(_BYTE *)(CriticalMemory + 72) = 1;
            _InterlockedExchange((volatile __int32 *)(CriticalMemory + 68), 0);
            inserted = -1073741536;
            v31 = 0;
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
    v20 = *(void **)&Size[1];
    goto LABEL_51;
  }
  v26 = *(unsigned int *)a4;
  Pool2 = (char *)ExAllocatePool2(0x100uLL, v15 + 20, 0x20207050u);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v26 + 20);
    v13 = *(_QWORD *)&Size[1];
    v10 = (unsigned __int16 *)(v9 + 4);
    *(_QWORD *)(v9 + 12) = v9 + 20;
    v16 = 0;
    *((_WORD *)v9 + 3) = *a4;
    *((_WORD *)v9 + 2) = 0;
    v31 = 1;
    goto LABEL_8;
  }
  v20 = *(void **)&Size[1];
  inserted = -1073741670;
LABEL_27:
  ObfDereferenceObjectWithTag(v20, 0x43706E50u);
  v24 = P;
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(v24, 0x4B706E50u);
  v11 = v31;
LABEL_31:
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, v6, inserted, (__int64)v10, *v8);
  if ( v11 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inserted;
}
