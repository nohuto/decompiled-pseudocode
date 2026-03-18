/*
 * XREFs of XmInt1aReadConfigRegister @ 0x1405791FC
 * Callers:
 *     XmExecuteInt1a @ 0x140578F24 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall XmInt1aReadConfigRegister(__int64 a1)
{
  char v2; // cl
  char v3; // di
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl
  int v6; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v2 = *(_BYTE *)(a1 + 24);
  v3 = -121;
  v4 = *(_BYTE *)(a1 + 36);
  if ( v2 == 9 )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v5 = *(_BYTE *)(a1 + 36);
  if ( v2 == 10 && (v4 & 3) != 0 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
LABEL_7:
    v5 = v4;
  }
  v6 = guard_dispatch_icall_no_overrides(
         *(unsigned __int8 *)(a1 + 37),
         (v5 >> 3) | (32 * (v5 & 7u)),
         &v8,
         *(unsigned __int16 *)(a1 + 52));
  if ( v6 )
  {
    switch ( *(_BYTE *)(a1 + 24) )
    {
      case 8:
        LOBYTE(v6) = v8;
        *(_BYTE *)(a1 + 28) = v8;
        break;
      case 9:
        LOBYTE(v6) = v8;
        *(_WORD *)(a1 + 28) = v8;
        break;
      case 0xA:
        LOBYTE(v6) = v8;
        *(_DWORD *)(a1 + 28) = v8;
        break;
    }
    *(_DWORD *)(a1 + 16) &= ~1u;
    v3 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 1u;
  }
  *(_BYTE *)(a1 + 25) = v3;
  return v6;
}
