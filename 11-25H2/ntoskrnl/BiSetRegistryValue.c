/*
 * XREFs of BiSetRegistryValue @ 0x140A25BA8
 * Callers:
 *     BiSetFirmwareModified @ 0x1404A75E4 (BiSetFirmwareModified.c)
 *     BcdMarkAsSystemStore @ 0x1408021C4 (BcdMarkAsSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x1408022D8 (BiMarkTreatAsSystemStore.c)
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 *     BiSetObjectDescription @ 0x140A64424 (BiSetObjectDescription.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C4B568 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x1404A6620 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x1404B11B8 (BiZwSetValueKey.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 */

__int64 __fastcall BiSetRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( a3 )
    {
      v13 = BiOpenKey(v11, a3, 0x2001Fu, v15);
      if ( v13 < 0 )
        goto LABEL_7;
    }
    else
    {
      *(_QWORD *)v15 = v11;
    }
    v13 = BiZwSetValueKey(*(void **)v15, &DestinationString, v12, a4, a5, a6);
LABEL_7:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      BiCloseKey(*(void **)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
