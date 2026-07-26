/*
 * XREFs of ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140067FC0
 * Callers:
 *     ?ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140067F80 (-ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisSSUpdateOidCacheValue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 i; // r8
  __int64 v4; // rbx
  void *Pool2; // rax
  int v6; // edx

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 4448LL) + 600LL) + 24 * i;
    if ( *(_DWORD *)v4 == *(_DWORD *)(v2 + 32) )
    {
      if ( v4 )
      {
        *(_DWORD *)(v4 + 16) = *((_DWORD *)a1 + 10);
        *(_BYTE *)(v4 + 20) = 0;
        if ( !*((_DWORD *)a1 + 10) && *(_DWORD *)(v2 + 48) >= *(_DWORD *)(v4 + 4) )
        {
          Pool2 = *(void **)(v4 + 8);
          if ( Pool2
            || (Pool2 = (void *)ExAllocatePool2(66LL, *(unsigned int *)(v4 + 4), 1936933966),
                (*(_QWORD *)(v4 + 8) = Pool2) != 0LL) )
          {
            memmove(Pool2, *(const void **)(v2 + 40), *(unsigned int *)(v4 + 4));
            *(_BYTE *)(v4 + 20) = 1;
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v6,
              15,
              39,
              (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
              v1);
          }
        }
      }
      return;
    }
  }
}
