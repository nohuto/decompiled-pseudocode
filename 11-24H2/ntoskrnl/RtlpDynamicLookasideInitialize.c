/*
 * XREFs of RtlpDynamicLookasideInitialize @ 0x1406A1B78
 * Callers:
 *     ExInitializePagedHeaps @ 0x140659CEC (ExInitializePagedHeaps.c)
 *     ExInitializePoolHeapManagement @ 0x140659E80 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall RtlpDynamicLookasideInitialize(char *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx

  memset_0(a1, 0, 0x1040uLL);
  *((_DWORD *)a1 + 2) = 63;
  v2 = 64LL;
  *((_DWORD *)a1 + 3) = 16;
  v3 = a1 + 82;
  do
  {
    InitializeSListHead((PSLIST_HEADER)(v3 - 18));
    *(_QWORD *)(v3 - 2) = 0x1000000LL;
    *(_QWORD *)(v3 + 6) = 0LL;
    *(_QWORD *)(v3 + 14) = 0LL;
    *(_DWORD *)(v3 + 22) = 0;
    v3 += 64;
    --v2;
  }
  while ( v2 );
}
