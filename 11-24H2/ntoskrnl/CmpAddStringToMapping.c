/*
 * XREFs of CmpAddStringToMapping @ 0x140A8649C
 * Callers:
 *     CmpVEAddHiveToSIDMappingTable @ 0x140A86400 (CmpVEAddHiveToSIDMappingTable.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  PVOID v5; // rdi
  void *Pool2; // rax
  char *v7; // rdx
  __int64 v8; // r9
  void *v9; // r9
  int v10; // eax
  __int64 v11; // r8

  v4 = 0;
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmpSIDToHiveMappingCount != -1 )
  {
    if ( CmpSIDToHiveMappingCount + 1 >= (unsigned int)CmpSIDToHiveMappingSize )
    {
      v5 = CmpSIDToHiveMapping;
      Pool2 = (void *)ExAllocatePool2(0x100uLL, 32LL * (unsigned int)(CmpSIDToHiveMappingSize + 4), 0x65564D43u);
      CmpSIDToHiveMapping = Pool2;
      if ( !Pool2 )
      {
        CmpSIDToHiveMapping = v5;
LABEL_6:
        v4 = -1073741670;
        goto LABEL_11;
      }
      CmpSIDToHiveMappingSize += 4;
      if ( v5 )
      {
        memmove(Pool2, v5, 32LL * (unsigned int)CmpSIDToHiveMappingCount);
        ExFreePoolWithTag(v5, 0x65564D43u);
      }
    }
    v7 = (char *)CmpSIDToHiveMapping;
    v8 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
    *(_QWORD *)((char *)CmpSIDToHiveMapping + v8 + 24) = a2;
    *(_WORD *)&v7[v8] = *(_WORD *)a1;
    *(_WORD *)&v7[v8 + 2] = *(_WORD *)a1;
    v9 = (void *)ExAllocatePool2(0x100uLL, *(unsigned __int16 *)a1, 0x65564D43u);
    *((_QWORD *)CmpSIDToHiveMapping + 4 * (unsigned int)CmpSIDToHiveMappingCount + 1) = v9;
    if ( v9 )
    {
      memmove(v9, a1[1], *(unsigned __int16 *)a1);
      v10 = CmpHashUnicodeComponent((__m128i *)a1);
      v11 = 32LL * (unsigned int)CmpSIDToHiveMappingCount++;
      *(_DWORD *)((char *)CmpSIDToHiveMapping + v11 + 16) = v10;
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  v4 = -1073741675;
LABEL_11:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}
