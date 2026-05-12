/*
 * XREFs of NvmeNamespaceSystemThread2 @ 0x14011D980
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 */

void __fastcall NvmeNamespaceSystemThread2(char *StartContext)
{
  _DWORD *v1; // r13
  char v3; // bp
  __int64 v4; // rdi
  bool v5; // zf
  bool v6; // r12
  unsigned int v7; // eax
  int v8; // esi
  int v9; // r15d
  unsigned int i; // r14d
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v1 = g_CpuInfo;
  Interval.QuadPart = -2000LL;
  v3 = 0;
  if ( (int)NvmeNamespaceAcquireRemoveLock((__int64)StartContext, 0LL) >= 0 )
  {
    v3 = 1;
    while ( 1 )
    {
      KeWaitForSingleObject(StartContext + 480, Executive, 0, 0, 0LL);
      if ( (StartContext[112] & 0x20) != 0 )
        break;
      v4 = *((_QWORD *)StartContext + 32);
      do
      {
        v5 = v4 == *((_QWORD *)StartContext + 33);
        if ( v4 != *((_QWORD *)StartContext + 33) )
        {
          if ( !*(_DWORD *)(v4 + 16) )
            v4 = *((_QWORD *)StartContext + 33);
          v5 = v4 == *((_QWORD *)StartContext + 33);
        }
        v6 = v5;
        do
        {
          while ( 1 )
          {
            v7 = v1[3];
            v8 = 0;
            v9 = 0;
            for ( i = 0; i < v7; ++i )
            {
              LOBYTE(v12) = v6;
              v11 = StorRefillShadowQueue(v4, i, v12) - 1;
              if ( v11 )
              {
                v13 = v11 - 1;
                if ( !v13 || (unsigned int)(v13 - 1) <= 1 )
                  ++v8;
              }
              else
              {
                ++v8;
                ++v9;
              }
              v7 = v1[3];
            }
            if ( v9 != v7 )
              break;
            if ( !v8 )
              goto LABEL_20;
            KeDelayExecutionThread(0, 0, &Interval);
          }
        }
        while ( v8 );
LABEL_20:
        _InterlockedExchange((volatile __int32 *)(v4 + 16), 0);
        v14 = *((_QWORD *)StartContext + 33);
        if ( v4 == v14 )
          break;
        v4 = *((_QWORD *)StartContext + 33);
      }
      while ( *(_DWORD *)(v14 + 16) );
    }
  }
  ZwClose(*((HANDLE *)StartContext + 59));
  *((_QWORD *)StartContext + 59) = 0LL;
  if ( v3 )
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)StartContext + 15));
  PsTerminateSystemThread(0);
}
