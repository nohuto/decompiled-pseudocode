/*
 * XREFs of RtlpHpEnvAllocVA @ 0x1800BB710
 * Callers:
 *     RtlCSparseBitmapStart @ 0x1800B9EF0 (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1800BA3BC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1800BA858 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x1800BB510 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrRangeCommit @ 0x18011EA1C (RtlpHpVaMgrRangeCommit.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x180164110 (NtAllocateVirtualMemoryEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int64 a8)
{
  int v10; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int128 v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int64 v20; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v21[5]; // [rsp+70h] [rbp-38h]

  v19 = 0LL;
  v10 = a7;
  v18 = 0LL;
  if ( (a4 & 0x20001000) == 0x20001000 && (unsigned int)(a7 - 2) > 2 )
    v10 = 3;
  v12 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v12 & 0x2000) == 0 )
    v12 &= ~0x20000000u;
  v13 = 0;
  if ( (v12 & 0x2000) != 0 )
  {
    *((_QWORD *)&v18 + 1) = 0LL;
    v19 = a3;
    v13 = 1;
    v20 = 1LL;
    v21[0] = &v18;
    if ( (v12 & 0x40000) != 0 )
    {
      v12 &= ~0x40000u;
      *(_QWORD *)&v18 = 0x100000000LL;
    }
  }
  if ( a8 && v10 != 5 )
  {
    v16 = 2LL * v13++;
    *(_OWORD *)&v21[v16 - 1] = 0LL;
    LOBYTE(v21[v16 - 1]) = 3;
    v21[v16] = a8;
  }
  if ( (v12 & 0x20400000) == 0x20400000 )
  {
    v15 = 2LL * v13;
    *(_OWORD *)&v21[v15 - 1] = 0LL;
    v21[v15] = 2LL;
  }
  else
  {
    if ( (v12 & 0x20000000) == 0 )
      goto LABEL_9;
    v15 = 2LL * v13;
    *(_OWORD *)&v21[v15 - 1] = 0LL;
    v21[v15] = 8LL;
  }
  ++v13;
  LOBYTE(v21[v15 - 1]) = 5;
LABEL_9:
  if ( v10 != 5 )
    return NtAllocateVirtualMemoryEx(-1LL, a1, a2);
  v17 = &v20;
  if ( !v13 )
    v17 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, unsigned int, int, __int64 *, unsigned int))(a8 ^ *(_QWORD *)(a8 + 8) ^ RtlpHpHeapGlobals))(
           a8 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a8,
           -1LL,
           a1,
           a2,
           v12,
           a5,
           v17,
           v13);
}
