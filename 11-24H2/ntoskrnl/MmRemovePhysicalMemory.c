/*
 * XREFs of MmRemovePhysicalMemory @ 0x1407EABA0
 * Callers:
 *     WheapClearPoison @ 0x1407C820C (WheapClearPoison.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiReferencePagePartition @ 0x1406745D4 (MiReferencePagePartition.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x140675644 (MiReturnBadPagesToBadList.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14068B150 (MiDeletePartitionPageNodes.c)
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FF418 (MiSpecialPurposeMemoryRemoved.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // r14
  unsigned __int64 v3; // rsi
  bool v4; // r15
  ULONG_PTR v5; // r14
  int v6; // r12d
  NTSTATUS inserted; // edi
  int v8; // eax
  unsigned __int16 *v9; // rbx
  int ContiguousPages; // eax
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  LONGLONG *v16; // [rsp+70h] [rbp-9h] BYREF
  __int128 v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  ULONG *v20; // [rsp+E0h] [rbp+67h] BYREF
  PLARGE_INTEGER v21; // [rsp+E8h] [rbp+6Fh]
  LONGLONG v22; // [rsp+F0h] [rbp+77h] BYREF
  ULONG_PTR v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v21 = NumberOfBytes;
  v23 = 0LL;
  v20 = 0LL;
  QuadPart = StartAddress->QuadPart;
  v3 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v22 = StartAddress->QuadPart;
  v4 = (v22 & 1) != 0 && (v22 & 0xFFF) != 0;
  if ( v4 )
  {
    LODWORD(v22) = v22 & 0xFFFFFFFE;
    QuadPart = v22;
  }
  v5 = QuadPart >> 12;
  v6 = 0;
  if ( v5 >= v3 + v5 )
    return -1073741585;
  v8 = MiReferencePagePartition(48 * v5 - 0x220000000000LL, 0, &v20);
  v9 = (unsigned __int16 *)v20;
  inserted = v8;
  if ( v8 >= 0 )
  {
    if ( v4 )
    {
      if ( v20 != &MiSystemPartition )
      {
        inserted = -1073741637;
        goto LABEL_21;
      }
      ContiguousPages = MiRemoveBadPages((__int64)v20, v5, v3);
    }
    else
    {
      if ( (int)MiAcquireNonPagedResources(v20, v3, 0LL, 8LL) < 0 )
      {
        inserted = -1073741670;
        goto LABEL_21;
      }
      v6 = 1;
      ContiguousPages = MiFindContiguousPagesEx(
                          (unsigned __int64)v9,
                          (_BYTE *)v5,
                          v3 + v5 - 1,
                          0LL,
                          0,
                          v3,
                          1u,
                          0x80000000,
                          255,
                          0x2C100000u,
                          1u,
                          0LL,
                          0LL,
                          &v23);
    }
    inserted = ContiguousPages;
    if ( ContiguousPages >= 0 )
    {
      if ( v9 == (unsigned __int16 *)&MiSystemPartition )
      {
        inserted = MiRemovePhysicalMemory(v5, v3, 4194336);
        if ( inserted >= 0 )
        {
LABEL_16:
          v21->QuadPart = v3 << 12;
          goto LABEL_21;
        }
LABEL_29:
        if ( v4 )
          MiReturnBadPagesToBadList(v5, v3);
        else
          MiFreeContiguousPages(v5, v3, 32LL);
        goto LABEL_21;
      }
      v19 = 0;
      v22 = 0LL;
      if ( (unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v22, v5, v3, 2) )
      {
        v18 = 1031;
        v16 = &v22;
        v12 = *((_DWORD *)v9 + 1);
        v9 = (unsigned __int16 *)v20;
        v13 = (v12 & 0x80u) == 0;
        v14 = 1031;
        if ( !v13 )
          v14 = 1543;
        v18 = v14;
        v17 = 0LL;
        inserted = MiInsertPartitionPages(
                     (unsigned __int16 *)v20,
                     (unsigned __int16 *)&MiSystemPartition,
                     (__int64)&v16,
                     v3);
        MiDeletePartitionPageNodes((unsigned __int64 *)&v22);
        if ( inserted >= 0 )
        {
          v15 = *((_DWORD *)v9 + 1);
          v9 = (unsigned __int16 *)v20;
          if ( (v15 & 0x80u) != 0 )
            MiSpecialPurposeMemoryRemoved(v20);
          goto LABEL_16;
        }
        goto LABEL_29;
      }
      inserted = -1073741670;
    }
    if ( v6 )
      MiReleaseNonPagedResourcesNotExposed((__int64)v9, v3);
  }
LABEL_21:
  if ( v9 )
    PsDereferencePartition(*((_QWORD *)v9 + 23));
  return inserted;
}
