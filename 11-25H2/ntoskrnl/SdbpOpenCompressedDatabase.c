/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x1407F7524
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SdbpReadMappedData @ 0x1408259D4 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x140829DF4 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     SdbpOpenDatabaseInMemory @ 0x14082BA08 (SdbpOpenDatabaseInMemory.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  __int64 v5; // rbx
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rbp
  const char *v13; // r9
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v17; // rax
  unsigned int v18; // [rsp+80h] [rbp+8h]

  v3 = *a1;
  v4 = 0;
  v5 = 0LL;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  if ( !g_ExpandCallback )
  {
    v9 = "No expand callback method set. Cannot expand ZDB file.";
    v10 = 175;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", v10, (_DWORD)v9);
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v3 + 20) < 0x14u )
  {
    v9 = "SDB file too small to be valid";
    v10 = 180;
    goto LABEL_13;
  }
  v11 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)(v11 + 8) != 1717724282 )
  {
    v9 = "SDB is not compressed";
    v10 = 187;
    goto LABEL_13;
  }
  if ( HIDWORD(*(_OWORD *)v11) != g_ExpectedAlgorithm )
  {
    v9 = "SDB compression algorithm does not match callback algorithm.";
    v10 = 192;
    goto LABEL_13;
  }
  v18 = *(_DWORD *)(v11 + 16);
  v12 = AslAlloc(v18, v18);
  if ( !v12 )
  {
    v9 = "SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory";
    v10 = 211;
    goto LABEL_13;
  }
  if ( !(unsigned int)guard_dispatch_icall_no_overrides(v12) )
  {
    v13 = "Expand callback failed to expand SDB";
    v14 = 221;
LABEL_16:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", v14, (_DWORD)v13);
    goto LABEL_17;
  }
  v17 = SdbpOpenDatabaseInMemory(v12, v18, a3);
  v5 = v17;
  if ( v17 )
  {
    *(_DWORD *)(v17 + 24) |= 4u;
    if ( !a2 || (unsigned int)SdbpReadMappedData(v17, 0LL, a2, 12LL) )
    {
      *(_DWORD *)(v5 + 24) |= 8u;
      v4 = 1;
      goto LABEL_19;
    }
    v13 = "Failed to read expanded database header";
    v14 = 238;
    goto LABEL_16;
  }
LABEL_17:
  AslFree(v15);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = 0LL;
    SdbCloseDatabaseRead(v5);
    v5 = 0LL;
  }
LABEL_19:
  SdbCloseDatabaseRead(*a1);
  *a1 = v5;
  return v4;
}
