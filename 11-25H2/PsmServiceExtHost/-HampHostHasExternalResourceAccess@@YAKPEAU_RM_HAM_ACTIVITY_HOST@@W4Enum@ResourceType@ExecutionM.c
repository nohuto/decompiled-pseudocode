/*
 * XREFs of ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180044184
 * Callers:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180043CC8 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180043F50 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180070018 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007D694 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostHasExternalResourceAccess(_QWORD *a1, int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v5 = (a1[76] - 96LL) & -(__int64)(a1[76] != (_QWORD)(a1 + 76));
  while ( v5 )
  {
    if ( *(_BYTE *)(v5 + 562) == 3 && (*(_BYTE *)(v5 + 552) & 0x48) == 0 )
    {
      BitMapHeader = 0LL;
      RtlInitializeBitMap(&BitMapHeader, (PULONG)(v5 + 496), 0x2Fu);
      if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(a2 - 3)) )
        return 1;
    }
    v6 = *(_QWORD *)(v5 + 96);
    v7 = *(_QWORD *)(v5 + 80);
    v5 = 0LL;
    if ( v6 != v7 + 608 )
      v5 = v6 - 96;
  }
  if ( (a1[83] & 0x400000000000000LL) != 0 )
  {
    v9 = a1[99];
    BitMapHeader = 0LL;
    RtlInitializeBitMap(
      &BitMapHeader,
      (PULONG)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v9 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
             + 568),
      0x2Fu);
    if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(a2 - 3)) )
      return 1;
  }
  return v2;
}
