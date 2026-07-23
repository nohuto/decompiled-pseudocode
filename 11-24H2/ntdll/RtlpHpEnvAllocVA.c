/*
 * XREFs of RtlpHpEnvAllocVA @ 0x18009CF20
 * Callers:
 *     RtlCSparseBitmapStart @ 0x18009B6FC (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18009BBC8 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18009C064 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x18009CD20 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrRangeCommit @ 0x18011B378 (RtlpHpVaMgrRangeCommit.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x180160F40 (NtAllocateVirtualMemoryEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlpHpEnvAllocVA(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  int v10; // ecx
  ULONG v12; // r9d
  ULONG ExtendedParameterCount; // r8d
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int128 v19; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h]
  __int64 v21; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v22[5]; // [rsp+70h] [rbp-38h]

  v20 = 0LL;
  v10 = a7;
  v19 = 0LL;
  if ( (a4 & 0x20001000) == 0x20001000 && (unsigned int)(a7 - 2) > 2 )
    v10 = 3;
  v12 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v12 & 0x2000) == 0 )
    v12 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v12 & 0x2000) != 0 )
  {
    *((_QWORD *)&v19 + 1) = 0LL;
    v20 = a3;
    ExtendedParameterCount = 1;
    v21 = 1LL;
    v22[0] = &v19;
    if ( (v12 & 0x40000) != 0 )
    {
      v12 &= ~0x40000u;
      *(_QWORD *)&v19 = 0x100000000LL;
    }
  }
  if ( a8 && v10 != 5 )
  {
    v17 = 2LL * ExtendedParameterCount++;
    *(_OWORD *)&v22[v17 - 1] = 0LL;
    LOBYTE(v22[v17 - 1]) = 3;
    v22[v17] = a8;
  }
  if ( (v12 & 0x20400000) == 0x20400000 )
  {
    v16 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v22[v16 - 1] = 0LL;
    v22[v16] = 2LL;
  }
  else
  {
    if ( (v12 & 0x20000000) == 0 )
      goto LABEL_9;
    v16 = 2LL * ExtendedParameterCount;
    *(_OWORD *)&v22[v16 - 1] = 0LL;
    v22[v16] = 8LL;
  }
  ++ExtendedParameterCount;
  LOBYTE(v22[v16 - 1]) = 5;
LABEL_9:
  if ( v10 == 5 )
  {
    v18 = &v21;
    if ( !ExtendedParameterCount )
      v18 = 0LL;
    return ((__int64 (__fastcall *)(__int64, __int64, PVOID *, PSIZE_T, ULONG, ULONG, __int64 *, ULONG))(a8 ^ *(_QWORD *)(a8 + 8) ^ RtlpHpHeapGlobals))(
             a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a8,
             -1LL,
             BaseAddress,
             RegionSize,
             v12,
             PageProtection,
             v18,
             ExtendedParameterCount);
  }
  else
  {
    ExtendedParameters = (MEM_EXTENDED_PARAMETER *)&v21;
    if ( !ExtendedParameterCount )
      ExtendedParameters = 0LL;
    return NtAllocateVirtualMemoryEx(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             RegionSize,
             v12,
             PageProtection,
             ExtendedParameters,
             ExtendedParameterCount);
  }
}
