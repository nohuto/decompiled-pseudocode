/*
 * XREFs of AmdPctProbePlatformCtr @ 0x140022A98
 * Callers:
 *     AmdPctDiscoverCounters @ 0x1400227E4 (AmdPctDiscoverCounters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

bool __fastcall AmdPctProbePlatformCtr(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  bool v6; // dl
  char v7; // cl
  unsigned __int8 v8; // cl

  v5 = *(unsigned int *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 80) )
  {
    v6 = (int)((__int64 (__fastcall *)(_QWORD, __int64))qword_140014970)(*(unsigned int *)(a1 + 84), v5) >= 0;
  }
  else
  {
    *a3 = __readmsr(v5);
    v6 = 1;
  }
  if ( v6 )
  {
    v7 = *(_BYTE *)(a2 + 2);
    if ( v7 )
      *a3 >>= v7;
    v8 = *(_BYTE *)(a2 + 1);
    if ( v8 < 0x40u )
      *a3 &= (1LL << v8) - 1;
  }
  return v6;
}
