/*
 * XREFs of StorpInitializeWorkItem @ 0x14000E63C
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeWorkItem(__int64 a1, PIO_WORKITEM **a2)
{
  unsigned int v2; // ebx
  int **v5; // rax
  int *v6; // rdi
  int *v7; // rbp
  int *v8; // r9
  int v9; // ecx
  PIO_WORKITEM *Pool; // rsi
  struct _DEVICE_OBJECT *v11; // rcx
  PIO_WORKITEM WorkItem; // rax
  volatile signed __int32 *v13; // rdx

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 62LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v5 = *(int ***)(a1 - 16);
    v6 = 0LL;
    v7 = 0LL;
    if ( v5 )
    {
      v8 = *v5;
      if ( *v5 )
      {
        v9 = *v8;
        if ( ((_BYTE)v5[31] & 1) != 0 )
        {
          if ( v9 == 1314275652 )
          {
            v7 = *v5;
LABEL_9:
            Pool = (PIO_WORKITEM *)RaidAllocatePool(64LL, 32LL, 1230463314LL, *((_QWORD *)v8 + 1));
            if ( Pool )
            {
              if ( v6 )
                v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 1);
              else
                v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)v7 + 1);
              WorkItem = IoAllocateWorkItem(v11);
              *Pool = WorkItem;
              if ( WorkItem )
              {
                v13 = v6 + 1222;
                if ( !v6 )
                  v13 = v7 + 270;
                _InterlockedIncrement(v13);
                *a2 = Pool;
                return v2;
              }
              ExFreePoolWithTag(Pool, 0x49576152u);
            }
            return (unsigned int)-1056964605;
          }
        }
        else if ( v9 == 1094997074 )
        {
          v6 = *v5;
          goto LABEL_9;
        }
      }
    }
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
  }
  return 3238002696LL;
}
