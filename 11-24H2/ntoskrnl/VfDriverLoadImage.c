/*
 * XREFs of VfDriverLoadImage @ 0x140BA7DF4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     VfInitBootDriversLoaded @ 0x140C3B240 (VfInitBootDriversLoaded.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLoadCallback @ 0x140B9AB3C (VfSuspectDriversLoadCallback.c)
 */

void __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  char v6; // dl

  v3 = a3;
  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u)
    && (VfXdvEnabled || !RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u)) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v5) + 15LL) & 0xF;
    else
      v6 = 12;
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
      VfSuspectDriversLoadCallback(a1, v6, v3);
    else
      VfTargetDriversAdd(a1, v6, 0LL);
  }
}
