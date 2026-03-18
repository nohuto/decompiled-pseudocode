/*
 * XREFs of ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x14002AC38
 * Callers:
 *     VidSchTerminateHwContext @ 0x1400291F0 (VidSchTerminateHwContext.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x14002A688 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiDecrementHwContextReference(unsigned int *P, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int **v7; // rcx
  __int64 v8; // rdx
  unsigned int **v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rdx
  void *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)P + 2);
  v5 = *(_QWORD *)(v2 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1984), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 10, 0xFFFFFFFF) == 1 )
  {
    if ( *((unsigned int **)P + 36) != P + 72 || P[76] )
    {
      v11 = P[76];
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 12288LL, P, v11, 0LL);
      WdLogGlobalForLineNumber = 906;
    }
    else
    {
      v6 = *((_QWORD *)P + 32);
      if ( *(unsigned int **)(v6 + 8) == P + 64 )
      {
        v7 = (unsigned int **)*((_QWORD *)P + 33);
        if ( *v7 == P + 64 )
        {
          *v7 = (unsigned int *)v6;
          *(_QWORD *)(v6 + 8) = v7;
          v8 = *((_QWORD *)P + 34);
          if ( *(unsigned int **)(v8 + 8) == P + 68 )
          {
            v9 = (unsigned int **)*((_QWORD *)P + 35);
            if ( *v9 == P + 68 )
            {
              *v9 = (unsigned int *)v8;
              *(_QWORD *)(v8 + 8) = v9;
              if ( *((_BYTE *)P + 143) )
              {
                RtlAvlRemoveNode(v2 + 1752, P + 38);
                RtlAvlRemoveNode(v2 + 1760, P + 44);
                *((_BYTE *)P + 143) = 0;
              }
              v10 = *((_QWORD *)P + 1);
              v17 = 0LL;
              v16 = 0LL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 24), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                goto LABEL_16;
              v12 = *(_QWORD *)(v10 + 104);
              if ( *(_QWORD *)(v12 + 8) == v10 + 104 )
              {
                v13 = *(_QWORD **)(v10 + 112);
                if ( *v13 == v10 + 104 )
                {
                  *v13 = v12;
                  *(_QWORD *)(v12 + 8) = v13;
                  ExFreePoolWithTag((PVOID)v10, 0);
LABEL_16:
                  if ( *((_BYTE *)P + 142) )
                  {
                    v14 = (void *)*((_QWORD *)P + 4);
                    if ( v14 )
                      ExFreePoolWithTag(v14, 0x4B677844u);
                  }
                  ExFreePoolWithTag(P, 0);
                  goto LABEL_4;
                }
              }
            }
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_4:
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
