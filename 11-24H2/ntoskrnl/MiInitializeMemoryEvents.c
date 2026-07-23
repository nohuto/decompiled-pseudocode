/*
 * XREFs of MiInitializeMemoryEvents @ 0x14080067C
 * Callers:
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140677D88 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1406867F4 (MiUpdateAvailableEvents.c)
 *     MiCreateMemoryEvent @ 0x1408001D8 (MiCreateMemoryEvent.c)
 *     MiCreateMemoryEventSD @ 0x140800380 (MiCreateMemoryEventSD.c)
 *     MiCreatePartitionNamespace @ 0x140800558 (MiCreatePartitionNamespace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MiInitializePagedPoolEvents @ 0x140C56054 (MiInitializePagedPoolEvents.c)
 */

_BOOL8 __fastcall MiInitializeMemoryEvents(ULONG *a1)
{
  int MemoryEventSD; // ebx
  __int64 i; // rsi
  int v4; // r8d
  void *v5; // r10
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  BOOLEAN DaclPresent; // [rsp+A8h] [rbp+38h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+B0h] [rbp+40h] BYREF
  PACL Dacl; // [rsp+B8h] [rbp+48h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v8 = 0LL;
  MemoryEventSD = MiCreateMemoryEventSD(SecurityDescriptor);
  if ( MemoryEventSD < 0 )
    goto LABEL_14;
  MemoryEventSD = MiCreatePartitionNamespace((__int64)a1);
  if ( MemoryEventSD < 0 )
    goto LABEL_14;
  for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
  {
    v4 = 0;
    if ( (unsigned int)i < 4 )
    {
      if ( a1 != &MiSystemPartition )
        continue;
      v5 = 0LL;
    }
    else
    {
      v5 = (void *)*((_QWORD *)a1 + 29);
      LOBYTE(v4) = a1 == &MiSystemPartition;
    }
    MemoryEventSD = MiCreateMemoryEvent(
                      (UNICODE_STRING *)&MiMemoryEventNames[8 * (unsigned int)i],
                      i,
                      v5,
                      SecurityDescriptor,
                      v4,
                      (__int64 *)&a1[2 * (unsigned int)i + 62],
                      (HANDLE *)&a1[2 * i + 84]);
    if ( MemoryEventSD < 0 )
      goto LABEL_14;
  }
  if ( a1 == &MiSystemPartition )
  {
    MiInitializePagedPoolEvents();
    MiSignalNonPagedPoolWatchers(0);
  }
  MiUpdateAvailableEvents((__int64)a1);
  MemoryEventSD = 0;
LABEL_14:
  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent )
    ExFreePoolWithTag(Dacl, 0);
  return MemoryEventSD >= 0;
}
