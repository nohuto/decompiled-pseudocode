/*
 * XREFs of RtlpGenericMATSPlusWorker @ 0x1403EC080
 * Callers:
 *     RtlScrubMemory @ 0x1403EBF40 (RtlScrubMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGenericMATSPlusWorker(unsigned int a1, int a2, unsigned __int64 a3)
{
  void *v4; // r11
  unsigned __int64 v5; // r10
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdi
  char *i; // rcx
  char *v9; // rdi
  char *v10; // rax
  struct _KPRCB *v11; // rcx
  __int64 v12; // r10
  char *j; // rdi
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = (void *)a3;
  v5 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = a1;
    v4 = (void *)(a3 + 4);
    v5 = 1023LL;
  }
  memset64(v4, a1 | ((unsigned __int64)a1 << 32), v5 >> 1);
  if ( (v5 & 1) != 0 )
    *((_DWORD *)v4 + v5 - 1) = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  v9 = (char *)a3;
  v10 = (char *)(a3 + 4096);
  while ( v9 < v10 )
  {
    if ( *(_DWORD *)v9 != a1 )
      return 0;
    *(_DWORD *)v9 = a2;
    v9 += 4;
  }
  v11 = KeGetCurrentPrcb();
  v12 = v11->CFlushSize;
  if ( v11->CFlushSize )
  {
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    for ( j = (char *)(a3 & ~(v12 - 1)); j < v10; j += v12 )
      _mm_clflush(j);
  }
  while ( 1 )
  {
    v10 -= 4;
    if ( *(_DWORD *)v10 != a2 )
      break;
    *(_DWORD *)v10 = a1;
    if ( v10 == (char *)a3 )
      return 1;
  }
  return 0;
}
