/*
 * XREFs of BiSetRegistryValue @ 0x140859C9C
 * Callers:
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BcdMarkAsSystemStore @ 0x14081247C (BcdMarkAsSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x140812590 (BiMarkTreatAsSystemStore.c)
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiAddStoreFromFile @ 0x14085A128 (BiAddStoreFromFile.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x140AAAEDC (BiSetObjectDescription.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C5EA78 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x1404A1930 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x1404AC998 (BiZwSetValueKey.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
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
