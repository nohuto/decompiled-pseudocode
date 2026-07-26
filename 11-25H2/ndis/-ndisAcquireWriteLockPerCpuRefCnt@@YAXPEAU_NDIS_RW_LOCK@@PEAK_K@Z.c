/*
 * XREFs of ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x140048F20
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1400489C0 (NdisAcquireReadWriteLock.c)
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x140048C00 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireWriteLockPerCpuRefCnt(struct _NDIS_RW_LOCK *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  char *v10; // rdi

  v3 = *a2;
  v4 = 0;
  *a2 = 0;
  v8 = 0x400 / a3;
  if ( 0x400 / a3 )
  {
    v9 = 0LL;
    do
    {
      v10 = (char *)a1 + 4 * ((a3 * v9) >> 2);
      while ( *((_DWORD *)v10 + 4) )
        KeStallExecutionProcessor(1u);
      v9 = ++v4;
    }
    while ( v4 < v8 );
  }
  *a2 = v3;
}
