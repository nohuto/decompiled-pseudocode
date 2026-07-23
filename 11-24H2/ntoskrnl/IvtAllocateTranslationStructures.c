/*
 * XREFs of IvtAllocateTranslationStructures @ 0x14056AD68
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056B300 (IvtConfigureAts.c)
 *     IvtProcessDeviceExceptions @ 0x140B54844 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140B55448 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtAllocateContextTable @ 0x1404CD658 (IvtAllocateContextTable.c)
 *     IvtGetPasidGranularTranslationType @ 0x1404F8030 (IvtGetPasidGranularTranslationType.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056A9EC (IvtAllocateScalableModePasidTables.c)
 */

__int64 __fastcall IvtAllocateTranslationStructures(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int *v3; // rax
  unsigned int v7; // esi
  int v8; // eax
  char v9; // dl
  __int64 v10; // rcx
  char v11; // r8
  int PasidGranularTranslationType; // eax
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(unsigned int **)(a2 + 56);
  v15 = 0LL;
  v16 = 0LL;
  v7 = *v3;
  if ( !*(_BYTE *)(a1 + 320) )
    return IvtAllocateContextTable(a1, v7);
  v8 = a3[1];
  v9 = 0;
  v10 = (unsigned int)a3[12];
  v11 = 0;
  if ( v8 == 1 )
    goto LABEL_3;
  if ( !v8 )
  {
    v11 = *(_BYTE *)(a1 + 319) != 0;
    goto LABEL_8;
  }
  if ( *a3 == 1 )
LABEL_3:
    v11 = 1;
  else
    v9 = *a3 == 0;
LABEL_8:
  PasidGranularTranslationType = IvtGetPasidGranularTranslationType(v10, v9, v11);
  result = IvtAllocateScalableModePasidTables(a1, a2, v13, 0, 0, 3, PasidGranularTranslationType, &v15, &v16);
  if ( (int)result < 0 )
    return result;
  if ( v16 != v15 )
    *(_QWORD *)(a2 + 72) = v15;
  return IvtAllocateContextTable(a1, v7);
}
