/*
 * XREFs of RaUnitSendInstanceCounters @ 0x140008E78
 * Callers:
 *     RaUnitWriteIoCounterSetCallback @ 0x140008B80 (RaUnitWriteIoCounterSetCallback.c)
 *     RaUnitQueueCounterSetCallback @ 0x140008D00 (RaUnitQueueCounterSetCallback.c)
 *     RaUnitReadIoCounterSetCallback @ 0x140008D40 (RaUnitReadIoCounterSetCallback.c)
 *     RaUnitTransferIoCounterSetCallback @ 0x140008DE0 (RaUnitTransferIoCounterSetCallback.c)
 * Callees:
 *     RaGetUnitPerfCounterIdString @ 0x14000904C (RaGetUnitPerfCounterIdString.c)
 *     RaUnitGetInstances @ 0x1400097E8 (RaUnitGetInstances.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 RaUnitSendInstanceCounters(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void (__fastcall *a5)(__int64, __int64, _QWORD, va_list),
        void (__fastcall *a6)(_QWORD, PVOID *, _QWORD, __int64),
        ...)
{
  int Instances; // ebx
  va_list v7; // r14
  __int64 Pool2; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rdi
  unsigned __int64 v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r9
  unsigned int v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+34h] [rbp-34h]
  va_list v21; // [rsp+40h] [rbp-28h]
  _QWORD *v22; // [rsp+48h] [rbp-20h]
  PVOID P[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+E0h] [rbp+78h] BYREF

  va_start(va, a6);
  v19 = 0;
  Instances = 0;
  va_copy(v7, va);
  va_copy(v21, va);
  *(_OWORD *)P = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    Instances = RaUnitGetInstances(0LL, &v19);
    if ( Instances >= 0 )
    {
      if ( v19 )
      {
        Pool2 = ExAllocatePool2(64LL, 8LL * v19, 1700028754LL);
        v22 = (_QWORD *)Pool2;
        v11 = (_QWORD *)Pool2;
        if ( Pool2 )
        {
          Instances = RaUnitGetInstances(Pool2, &v19);
          if ( Instances >= 0 && v19 )
          {
            v12 = v11;
            v13 = v19;
            v20 = 0;
            while ( 1 )
            {
              v14 = *v12;
              if ( (int)RaGetUnitPerfCounterIdString(*v12, P) >= 0 )
              {
                if ( a1 == 2 )
                {
                  v18 = 0LL;
                }
                else
                {
                  a5(v14, a3, a4, v7);
                  v18 = a3;
                }
                a6(*(_QWORD *)(a2 + 24), P, *(unsigned int *)(v14 + 3576), v18);
              }
              if ( P[1] )
              {
                ExFreePoolWithTag(P[1], 0x49446152u);
                *(_OWORD *)P = 0LL;
              }
              v15 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
              v16 = *(_DWORD *)(v15 + *(_QWORD *)(v14 + 40));
              while ( (v16 & 1) == 0 )
              {
                v17 = v16;
                v16 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)(v15 + *(_QWORD *)(v14 + 40)),
                        v16 - 2,
                        v16);
                if ( v17 == v16 )
                  goto LABEL_16;
              }
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 1032), 0xFFFFFFFF) == 1 )
                KeSetEvent((PRKEVENT)(v14 + 520), 0, 0);
LABEL_16:
              ++v12;
              if ( !--v13 )
                break;
              v7 = v21;
            }
            Instances = v20;
            v11 = v22;
          }
          ExFreePoolWithTag(v11, 0x65546152u);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)Instances;
}
