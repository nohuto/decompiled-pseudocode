/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x1408077D4
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SdbpOpenDatabaseInMemory @ 0x140943708 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x140943898 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     SdbpReadMappedData @ 0x140947C10 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  __int64 v5; // rbx
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  const char *v14; // r9
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v18; // rax
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v19 = 0;
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
  v12 = *(unsigned int *)(v11 + 16);
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
  v19 = *(_DWORD *)(v11 + 16);
  v13 = AslAlloc(v12, v12);
  if ( !v13 )
  {
    v9 = "SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory";
    v10 = 211;
    goto LABEL_13;
  }
  if ( !(unsigned int)guard_dispatch_icall_no_overrides(v13, &v19) )
  {
    v14 = "Expand callback failed to expand SDB";
    v15 = 221;
LABEL_16:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", v15, (_DWORD)v14);
    goto LABEL_17;
  }
  v18 = SdbpOpenDatabaseInMemory(v13, v19, a3);
  v5 = v18;
  if ( v18 )
  {
    *(_DWORD *)(v18 + 24) |= 4u;
    if ( !a2 || (unsigned int)SdbpReadMappedData(v18, 0LL, a2, 12LL) )
    {
      *(_DWORD *)(v5 + 24) |= 8u;
      v4 = 1;
      v19 = 0;
      goto LABEL_19;
    }
    v14 = "Failed to read expanded database header";
    v15 = 238;
    goto LABEL_16;
  }
LABEL_17:
  AslFree(v16);
  v19 = 0;
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
