/*
 * XREFs of MiCreateHugeIoRanges @ 0x140C535FC
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiAddPartitionHugeRange @ 0x14066F778 (MiAddPartitionHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x140670B90 (MiInitializeHugePfnDatabase.c)
 */

unsigned __int64 __fastcall MiCreateHugeIoRanges(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rbx
  int v3; // edi
  ULONG_PTR v4; // r8
  __int64 v5; // rcx
  unsigned __int64 *v6; // rcx

  result = *(_QWORD *)(a1 + 360);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      v2 = 0LL;
    else
      v2 = result ^ ((a1 + 352) | 1);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 360);
  }
  while ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v3 - 38) <= 1 )
    {
      v4 = *(_QWORD *)(v2 + 32);
      if ( !v4 || (v4 & 0x3FFFF) != 0 || (*(_DWORD *)(v2 + 40) & 0x3FFFF) != 0 )
        KeBugCheckEx(0x1Au, 0x303031CuLL, v4, *(_QWORD *)(v2 + 40), *(int *)(v2 + 24));
      if ( (unsigned int)MiInitializeHugePfnDatabase()
        && (int)MiAddPartitionHugeRange(&MiSystemPartition, v2, (unsigned int)(*(_DWORD *)(v2 + 24) != 38) + 1, 0) >= 0 )
      {
        if ( v3 == 38 )
        {
          *(_DWORD *)(v2 + 24) = 24;
        }
        else if ( v3 == 39 )
        {
          *(_DWORD *)(v2 + 24) = 2;
        }
      }
    }
    result = *(_QWORD *)(v2 + 8);
    v5 = v2;
    if ( result )
    {
      v6 = *(unsigned __int64 **)result;
      v2 = *(_QWORD *)(v2 + 8);
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v6;
          v2 = (__int64)v6;
          v6 = (unsigned __int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v2 || *(_QWORD *)v2 == v5 )
          break;
        v5 = v2;
      }
    }
  }
  return result;
}
