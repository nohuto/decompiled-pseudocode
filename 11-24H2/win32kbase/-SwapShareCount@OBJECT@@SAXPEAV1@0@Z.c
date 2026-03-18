/*
 * XREFs of ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x14013DF58
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 */

void __fastcall OBJECT::SwapShareCount(struct OBJECT *a1, struct OBJECT *a2)
{
  int v2; // r8d
  __int64 v5; // rcx

  v2 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v2;
  if ( *(_BYTE *)(HmgPentryFromPobj(a1) + 14) == 5 && *(_BYTE *)(HmgPentryFromPobj(a1) + 14) == 5 )
  {
    v5 = *((_QWORD *)a1 + 85);
    *((_QWORD *)a1 + 85) = *((_QWORD *)a2 + 85);
    *((_QWORD *)a2 + 85) = v5;
  }
  else if ( *(_BYTE *)(HmgPentryFromPobj(a1) + 14) == 16 )
  {
    HmgPentryFromPobj(a1);
  }
}
