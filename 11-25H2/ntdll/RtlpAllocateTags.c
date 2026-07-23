/*
 * XREFs of RtlpAllocateTags @ 0x180143538
 * Callers:
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpAllocateTags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int16 v5; // r15
  __int16 v6; // r12
  __int64 v7; // rsi
  _WORD *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  ULONG_PTR v12[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  v2 = RtlpGlobalTagHeap;
  RegionSize = 0LL;
  v12[0] = 0LL;
  v4 = a1;
  if ( !RtlpGlobalTagHeap )
    return 0LL;
  if ( a1 )
  {
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(RtlpGlobalTagHeap + 152) = -285217025;
    v5 = 2048;
    *(_DWORD *)(v2 + 112) = 1;
    v4 = v2;
  }
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 112) & 0x8000000) != 0 )
    v6 = RtlLogStackBackTraceEx(1u);
  if ( !*(_QWORD *)(v4 + 232) )
  {
    RegionSize = 147384LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 232), 0LL, &RegionSize, 0x2000u, 4u) < 0 )
      return 0LL;
    *(_DWORD *)(v4 + 224) = 134152192;
    ++a2;
  }
  v7 = *(unsigned __int16 *)(v4 + 224);
  if ( a2 > *(unsigned __int16 *)(v4 + 226) - (unsigned int)v7 )
    return 0LL;
  v8 = (_WORD *)(*(_QWORD *)(v4 + 232) + 72 * v7);
  while ( 1 )
  {
    v9 = *(unsigned __int16 *)(v4 + 224);
    BaseAddress = v8;
    if ( (unsigned int)v7 >= a2 + (unsigned int)v9 )
      break;
    if ( (((_WORD)v8 + 72) & 0xFFFu) <= 0x48uLL )
    {
      v12[0] = 4096LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v12, 0x1000u, 4u) < 0 )
        return 0LL;
      v8 = BaseAddress;
    }
    v8[8] = v5 | v7;
    *((_WORD *)BaseAddress + 9) = v6;
    v8 = (char *)BaseAddress + 72;
    LODWORD(v7) = v7 + 1;
  }
  v10 = *(_QWORD *)(v4 + 232);
  *(_WORD *)(v4 + 224) = a2 + v9;
  return v10 + 72 * v9;
}
