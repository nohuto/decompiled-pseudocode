/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x1800A5E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x1800A6374 (RtlpHpHeapCreate.c)
 */

bool __fastcall RtlpHpMetadataHeapCreate(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a2;
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))RtlpHpHeapCreate)(37748736LL, 0LL, 0LL, &v5);
  if ( v3 )
    *(_QWORD *)(a1 - 8) = v3;
  return v3 != 0;
}
