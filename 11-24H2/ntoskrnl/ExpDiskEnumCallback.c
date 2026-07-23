/*
 * XREFs of ExpDiskEnumCallback @ 0x1404F7B08
 * Callers:
 *     BcdEnumerateDisks @ 0x140A955F0 (BcdEnumerateDisks.c)
 * Callees:
 *     ExpGetPartitionTableInfo @ 0x140A5C9EC (ExpGetPartitionTableInfo.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall ExpDiskEnumCallback(const WCHAR *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  __int64 i; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx

  v4 = 0;
  if ( (int)ExpGetPartitionTableInfo(a1) >= 0 && MEMORY[0] == 1 )
  {
    for ( i = 0LL; (unsigned int)i < MEMORY[4]; i = v6 )
    {
      v6 = i + 1;
      v7 = *(_QWORD *)(144 * i + 0x60) - **(_QWORD **)a3;
      if ( !v7 )
        v7 = *(_QWORD *)(144 * i + 0x68) - *(_QWORD *)(*(_QWORD *)a3 + 8LL);
      if ( !v7 )
      {
        *(_DWORD *)(a3 + 8) = v6;
        v4 = 1;
        *(_BYTE *)(a3 + 12) = 1;
        return v4;
      }
    }
  }
  return v4;
}
