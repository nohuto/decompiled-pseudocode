/*
 * XREFs of RtlpGenericMATSPlusWorker @ 0x1403F1260
 * Callers:
 *     RtlScrubMemory @ 0x1403F1124 (RtlScrubMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGenericMATSPlusWorker(unsigned int a1, int a2, unsigned __int64 a3)
{
  void *v5; // r11
  unsigned __int64 v6; // r9
  char v7; // bl
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char *v11; // rdx
  char *v12; // rcx
  struct _KPRCB *v13; // rax
  __int64 v14; // rdi
  char *j; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = (void *)a3;
  v6 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = a1;
    v5 = (void *)(a3 + 4);
    v6 = 1023LL;
  }
  v7 = 1;
  memset64(v5, a1 | ((unsigned __int64)a1 << 32), v6 >> 1);
  if ( (v6 & 1) != 0 )
    *((_DWORD *)v5 + v6 - 1) = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  v11 = (char *)a3;
  v12 = (char *)(a3 + 4096);
  while ( v11 < v12 )
  {
    if ( *(_DWORD *)v11 != a1 )
      return 0;
    *(_DWORD *)v11 = a2;
    v11 += 4;
  }
  v13 = KeGetCurrentPrcb();
  v14 = v13->CFlushSize;
  if ( v13->CFlushSize )
  {
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    for ( j = (char *)(a3 & ~(v14 - 1)); j < v12; j += v14 )
      _mm_clflush(j);
  }
  while ( 1 )
  {
    v12 -= 4;
    if ( *(_DWORD *)v12 != a2 )
      break;
    *(_DWORD *)v12 = a1;
    if ( v12 == (char *)a3 )
      return v7;
  }
  return 0;
}
