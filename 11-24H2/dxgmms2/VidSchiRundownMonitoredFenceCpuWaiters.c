/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x140039450
 * Callers:
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140039290 (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x140039330 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 */

void __fastcall VidSchiRundownMonitoredFenceCpuWaiters(HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  HwQueueStagingList *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 i; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned int *v11; // rcx
  __int64 v12; // r9
  __int64 v14; // [rsp+78h] [rbp+10h]

  v14 = a2;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = a1;
  v6 = *(_QWORD **)(v3 + 896);
  if ( v6 != (_QWORD *)(v3 + 896) )
  {
    do
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      if ( v7[3] == a3 || !a3 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v7 + 50); i = (unsigned int)(i + 1) )
        {
          v9 = v7[4];
          v10 = *(_QWORD *)(v9 + 40 * i);
          if ( v10 == a2 )
          {
            if ( *(_DWORD *)(v10 + 48) == 6 )
            {
              v12 = **(_QWORD **)(v10 + 72);
            }
            else
            {
              v11 = *(unsigned int **)(v10 + 72);
              if ( *(_BYTE *)(v10 + 30) )
                v12 = *(_QWORD *)v11;
              else
                v12 = *v11;
            }
            WdLogSingleEntry5(
              4LL,
              *(_QWORD *)(v9 + 40 * i),
              a3,
              v12,
              *(_QWORD *)(v9 + 40 * i + 8),
              *(unsigned __int8 *)(v10 + 29));
            *(_QWORD *)(v9 + 40 * i) = 0LL;
            a2 = v14;
            WdLogGlobalForLineNumber = 27165;
          }
        }
      }
    }
    while ( v6 != (_QWORD *)(v3 + 896) );
    v5 = a1;
  }
  VidSchiUnwaitMonitoredFences(v5, v3);
}
