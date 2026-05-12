/*
 * XREFs of RaidpBuildAdapterBusRelations @ 0x1400173D8
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidUnitSetEnumerated @ 0x140053A30 (RaidUnitSetEnumerated.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidpBuildAdapterBusRelations(__int64 a1, unsigned int **a2)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  unsigned int *Pool2; // r12
  unsigned int v8; // ebp
  _QWORD *i; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // r14
  void *v16; // rcx
  void *Pool; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  PDEVICE_OBJECT v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 Size; // [rsp+A0h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v24, 0, sizeof(v24));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 37LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 216), &v24);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 160) + *(_DWORD *)(a1 + 240));
  v4 = *(_QWORD *)(a1 + 8);
  Size = 8 * v3 + 16;
  v5 = 0;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, Size, 1380213074LL);
  if ( Pool2 )
  {
    v8 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
    }
    for ( i = *(_QWORD **)(a1 + 144); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(a1 + 144) )
        goto LABEL_38;
      v10 = i - 8;
      v11 = i - 8;
      if ( (i[55] & 4) != 0 )
      {
        LOBYTE(v6) = 1;
        RaidUnitSetEnumerated(v11, v6);
        ObfReferenceObject((PVOID)v10[1]);
        if ( v8 > (unsigned int)v3 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
              WPP_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                40LL,
                &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
                v8,
                v3);
LABEL_38:
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
            {
              WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 42LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
            }
          }
          v15 = *(_QWORD **)(a1 + 224);
          while ( 2 )
          {
            if ( v15 == (_QWORD *)(a1 + 224) )
            {
LABEL_20:
              KeReleaseInStackQueuedSpinLock(&v24);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              *Pool2 = v8;
              v16 = *(void **)(a1 + 4376);
              *a2 = Pool2;
              if ( v16 )
              {
                ExFreePoolWithTag(v16, 0x52446152u);
                *(_QWORD *)(a1 + 4376) = 0LL;
              }
              Pool = (void *)RaidAllocatePool(64LL, Size, 1380213074LL, *(_QWORD *)(a1 + 8));
              *(_QWORD *)(a1 + 4376) = Pool;
              if ( Pool )
              {
                memmove(Pool, Pool2, Size);
              }
              else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
              {
                WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 46LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, a1);
              }
              goto LABEL_24;
            }
            v19 = v15 - 8;
            v20 = v15 - 8;
            if ( (v15[55] & 4) != 0 )
            {
              LOBYTE(v6) = 1;
              RaidUnitSetEnumerated(v20, v6);
              ObfReferenceObject((PVOID)v19[1]);
              if ( v8 > (unsigned int)v3 )
              {
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
                {
                  WPP_SF_DD(
                    WPP_GLOBAL_Control->AttachedDevice,
                    44LL,
                    &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
                    v8,
                    v3);
                }
                goto LABEL_20;
              }
              v23 = v8++;
              *(_QWORD *)&Pool2[2 * v23 + 2] = v19[1];
              v21 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
              {
                v22 = 45LL;
LABEL_60:
                WPP_SF_q(v21->AttachedDevice, v22, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, v15 - 8);
              }
            }
            else
            {
              RaidUnitSetEnumerated(v20, 0LL);
              v21 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
              {
                v22 = 43LL;
                goto LABEL_60;
              }
            }
            v15 = (_QWORD *)*v15;
            continue;
          }
        }
        v13 = v8++;
        *(_QWORD *)&Pool2[2 * v13 + 2] = v10[1];
        v12 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
        {
          v14 = 41LL;
LABEL_49:
          WPP_SF_q(v12->AttachedDevice, v14, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, i - 8);
          continue;
        }
      }
      else
      {
        RaidUnitSetEnumerated(v11, 0LL);
        v12 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
        {
          v14 = 39LL;
          goto LABEL_49;
        }
      }
    }
  }
  if ( v4 )
    RaidLogAllocationFailure(v4, 64, 8 * v3 + 16, 1380213074, 0x80000000);
  KeReleaseInStackQueuedSpinLock(&v24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = -1073741801;
LABEL_24:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_qD(WPP_GLOBAL_Control->AttachedDevice, 47LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids, a1, v5);
  }
  return v5;
}
