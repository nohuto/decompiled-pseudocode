/*
 * XREFs of NvmeControllerRefillShadowQueueRoutine @ 0x1400F3A70
 * Callers:
 *     <none>
 * Callees:
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 */

void __fastcall NvmeControllerRefillShadowQueueRoutine(PDEVICE_OBJECT DeviceObject, _QWORD *Context, __int64 a3)
{
  _DWORD *v3; // r15
  unsigned int v5; // eax
  int v6; // edi
  int v7; // r14d
  unsigned int i; // ebp
  int v9; // eax
  int v10; // eax
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v3 = g_CpuInfo;
  Interval.QuadPart = -2000LL;
  if ( Context && *(_DWORD *)Context == 1314276178 )
  {
    do
    {
      v5 = v3[3];
      v6 = 0;
      v7 = 0;
      for ( i = 0; i < v5; ++i )
      {
        LOBYTE(a3) = 1;
        v9 = StorRefillShadowQueue(Context[128], i, a3) - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( !v10 || (unsigned int)(v10 - 1) <= 1 )
            ++v6;
        }
        else
        {
          ++v6;
          ++v7;
        }
        v5 = v3[3];
      }
      if ( v7 == v5 )
        KeDelayExecutionThread(0, 0, &Interval);
    }
    while ( v6 );
  }
  _InterlockedExchange((volatile __int32 *)(Context[128] + 16LL), 0);
}
