/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x1402D25D4
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 MiReclaimUnusedUltraMdlMaps()
{
  __int64 result; // rax
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdi
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // r15
  KIRQL v7; // al
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v1 = 0;
  v2 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v3 = 0;
      v4 = (unsigned __int64)v2 << 9;
      do
      {
        while ( *(_WORD *)(v4 + qword_140E35F28) > 2u )
        {
          v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140E35F28 + ((8LL * v2 + v3) << 6)));
          v6 = v5;
          if ( !v5 )
            break;
          ++v1;
          MiDeleteUltraMapContext((__int64)(&v5->Next + 1), 3uLL);
          ExFreePoolWithTag(v6, 0);
        }
        ++v3;
        v4 += 64LL;
      }
      while ( v3 < 8 );
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
    if ( v1 )
    {
      v7 = ExAcquireSpinLockExclusive(&dword_140E35EE0);
      dword_140E35F20 -= v1;
      return MiReleaseSpinLockExclusive(&dword_140E35EE0, v7);
    }
  }
  return result;
}
