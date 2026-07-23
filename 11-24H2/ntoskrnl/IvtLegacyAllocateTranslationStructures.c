/*
 * XREFs of IvtLegacyAllocateTranslationStructures @ 0x14056CF38
 * Callers:
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyConfigureAts @ 0x14056D380 (IvtLegacyConfigureAts.c)
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5455C (IvtLegacyProcessDeviceExceptions.c)
 *     HalpIvtpLegacyInitializeReservedDomain @ 0x140B55534 (HalpIvtpLegacyInitializeReservedDomain.c)
 * Callees:
 *     IvtAllocateContextTable @ 0x1404CD658 (IvtAllocateContextTable.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056CC30 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyGetDomainId @ 0x14056DD24 (IvtLegacyGetDomainId.c)
 */

__int64 __fastcall IvtLegacyAllocateTranslationStructures(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  unsigned int *v6; // rax
  __int64 v7; // rbx
  unsigned int v10; // ebp
  int DomainId; // eax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(unsigned int **)(a2 + 56);
  v7 = 0LL;
  v14 = 0LL;
  v10 = *v6;
  if ( !*(_BYTE *)(a1 + 320) )
  {
LABEL_9:
    result = IvtAllocateContextTable(a1, v10);
    if ( (int)result >= 0 )
    {
      if ( a6 )
        *a6 = v7;
    }
    return result;
  }
  if ( a3 )
  {
    DomainId = *(_DWORD *)(a3 + 48);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 64);
    if ( v12 )
      DomainId = *(_DWORD *)(v12 + 44);
    else
      DomainId = IvtLegacyGetDomainId(a1, v10);
  }
  result = IvtLegacyAllocateScalableModePasidTables(a1, a2, DomainId, 0, 0, 3, &v14, &v15);
  if ( (int)result >= 0 )
  {
    v7 = v14;
    goto LABEL_9;
  }
  return result;
}
