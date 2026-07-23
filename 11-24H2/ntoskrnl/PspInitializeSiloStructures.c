/*
 * XREFs of PspInitializeSiloStructures @ 0x140C37AF4
 * Callers:
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x140773508 (PspSiloInitializeSharedUserSessionId.c)
 *     PspStorageAllocSlot @ 0x14077C298 (PspStorageAllocSlot.c)
 *     PspStorageFreeSlot @ 0x14077C394 (PspStorageFreeSlot.c)
 *     PspAllocStorage @ 0x140A6D664 (PspAllocStorage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char PspInitializeSiloStructures()
{
  __int64 Pool2; // rax
  unsigned int v1; // ecx
  PVOID v3; // rcx
  __int16 v4; // [rsp+20h] [rbp-39h] BYREF
  char v5; // [rsp+22h] [rbp-37h]
  int v6; // [rsp+2Ch] [rbp-2Dh]
  int v7; // [rsp+30h] [rbp-29h]
  int v8; // [rsp+34h] [rbp-25h]
  int v9; // [rsp+38h] [rbp-21h]
  int v10; // [rsp+3Ch] [rbp-1Dh]
  int v11; // [rsp+44h] [rbp-15h]
  __int64 (__fastcall *v12)(__int64); // [rsp+68h] [rbp+Fh]

  Pool2 = ExAllocatePool2(0x40uLL, 0x270uLL, 0x476C6953uLL);
  qword_140FCFE48 = Pool2;
  if ( !Pool2
    || (int)PspSiloInitializeSharedUserSessionId(Pool2) < 0
    || (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot) < 0 )
  {
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectoryTeardownSlot) < 0 )
  {
    v1 = PsObjectDirectorySiloContextSlot;
LABEL_6:
    PspStorageFreeSlot(v1);
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsSystemRootSiloContextSlot) < 0 )
  {
    PspStorageFreeSlot(PsObjectDirectorySiloContextSlot);
    v1 = PsObjectDirectoryTeardownSlot;
    goto LABEL_6;
  }
  PspSiloMonitorLock = 0LL;
  qword_140FDA060 = (__int64)&PspSiloMonitorList;
  PspSiloMonitorList = (__int64)&PspSiloMonitorList;
  memset_0(&v4, 0, 0x78uLL);
  v5 |= 0x84u;
  v4 = 120;
  v6 = 0x20000;
  v7 = 0x20000;
  v8 = 0x20000;
  v11 = 1;
  v9 = 983040;
  v10 = 983040;
  v12 = PspDeleteSiloContext;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", &v4, 0LL, (__int64)&PsSiloContextPagedType) < 0 )
    return 0;
  v11 = 512;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", &v4, 0LL, (__int64)&PsSiloContextNonPagedType) < 0 )
  {
    v3 = PsSiloContextPagedType;
LABEL_13:
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    return 0;
  }
  if ( (int)PspAllocStorage(&qword_140FCFE30) < 0 )
  {
    ObfDereferenceObjectWithTag(PsSiloContextPagedType, 0x746C6644u);
    v3 = (PVOID)PsSiloContextNonPagedType;
    goto LABEL_13;
  }
  return 1;
}
