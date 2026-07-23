/*
 * XREFs of MmQueryMemoryRanges @ 0x1407DB570
 * Callers:
 *     IoInitializeLiveDump @ 0x14059433C (IoInitializeLiveDump.c)
 *     IopLiveDumpQueryIOSpaceRanges @ 0x140599590 (IopLiveDumpQueryIOSpaceRanges.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     RtlFindSetBitsEx @ 0x140400DC0 (RtlFindSetBitsEx.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     RtlFindNextForwardRunClearEx @ 0x1404382D0 (RtlFindNextForwardRunClearEx.c)
 *     MiAddRuns @ 0x1407DAFEC (MiAddRuns.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmQueryMemoryRanges(__int64 a1)
{
  unsigned __int64 v1; // rbx
  char v2; // r13
  PVOID v3; // rsi
  bool v4; // zf
  unsigned int v6; // edx
  ULONG **v7; // rcx
  ULONG *v8; // r15
  ULONG *v9; // rax
  int v10; // r12d
  ULONG64 SetBits; // rax
  ULONG64 v12; // r14
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rsi
  unsigned __int64 v15; // rsi
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h]
  unsigned __int64 v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+98h] [rbp+48h]
  unsigned __int64 v21; // [rsp+A0h] [rbp+50h] BYREF

  v1 = 0LL;
  v2 = 0;
  v21 = 0LL;
  v3 = 0LL;
  v4 = *(_DWORD *)a1 == 1;
  LOBYTE(v19) = 0;
  v17 = 0LL;
  P = 0LL;
  if ( !v4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 40) )
    return 3221225485LL;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 >= 0x40
    || KeGetCurrentIrql()
    || (*(_DWORD *)(a1 + 32) & 0x7FFFFFFFu) >= (unsigned __int16)KeNumberNodes
    || (v6 & 1) == 0
    || *(_QWORD *)(a1 + 24) != 0x40000000LL )
  {
    return 3221225485LL;
  }
  v7 = *(ULONG ***)(a1 + 8);
  if ( v7 != (ULONG **)-2LL )
  {
    v9 = MiPartitionObjectToPartition(v7, 0, &v19);
    v8 = v9;
    if ( v9 )
    {
      v2 = v19;
      v20 = *(unsigned __int16 *)v9;
      goto LABEL_12;
    }
    return 3221225485LL;
  }
  v8 = 0LL;
  v20 = 1025;
LABEL_12:
  v10 = 0;
  if ( qword_140E2FD80 )
  {
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(&stru_140E2FD70, 1uLL, (ULONG64)v3);
      v12 = SetBits;
      if ( SetBits < (unsigned __int64)v3 || SetBits == -1LL )
      {
LABEL_19:
        v3 = P;
        goto LABEL_20;
      }
      NextForwardRunClear = RtlFindNextForwardRunClearEx(&stru_140E2FD70.SizeOfBitMap, SetBits, &v21);
      SizeOfBitMap = v21;
      v19 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        SizeOfBitMap = stru_140E2FD70.SizeOfBitMap;
      v15 = SizeOfBitMap - v12;
      v1 = v12 ^ (v12 ^ v1) & 0xFFFFFFFFFFC00000uLL;
      v10 = MiAddRuns(a1, (__int64 *)&v17, v1, v15, v20);
      if ( v10 < 0 )
        break;
      v3 = (PVOID)(v19 + v12 + v15);
      if ( (unsigned __int64)v3 >= stru_140E2FD70.SizeOfBitMap )
        goto LABEL_19;
    }
    v3 = P;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v3 = 0LL;
    }
  }
LABEL_20:
  if ( v2 )
    PsDereferencePartition(*((_QWORD *)v8 + 23));
  if ( v10 >= 0 )
  {
    *(_QWORD *)(a1 + 40) = v17;
    *(_QWORD *)(a1 + 48) = v3;
  }
  return (unsigned int)v10;
}
