/*
 * XREFs of MiApplyRequiredDriverHotPatches @ 0x1406EFDD4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140A5618C (MiFindHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 */

__int64 __fastcall MiApplyRequiredDriverHotPatches(__int64 a1)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // ebx
  int HotPatchRecord; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF

  DestinationString = 0LL;
  if ( (dword_140E37274 & 1) == 0 || (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x2000) != 0 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = *(_DWORD *)(a1 + 120);
  v3 = *(_DWORD *)(a1 + 156);
  v4 = 0;
  v9 = v2;
  v8 = v3;
  HotPatchRecord = MiFindHotPatchRecord((int)&qword_140E37238, 0, v2, v3, 34404, 0LL, &DestinationString);
  if ( HotPatchRecord >= 0 )
  {
    v4 = MiLoadHotPatch(&DestinationString, 0LL, &v9, &v8);
    RtlFreeAnsiString(&DestinationString);
  }
  else if ( HotPatchRecord != -1073741275 )
  {
    return (unsigned int)HotPatchRecord;
  }
  return v4;
}
