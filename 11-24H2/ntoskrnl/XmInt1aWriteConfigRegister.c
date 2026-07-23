/*
 * XREFs of XmInt1aWriteConfigRegister @ 0x140576778
 * Callers:
 *     XmExecuteInt1a @ 0x1405763B4 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall XmInt1aWriteConfigRegister(__int64 a1)
{
  char v2; // cl
  unsigned __int8 v3; // al
  unsigned __int8 v4; // dl
  int v5; // eax
  unsigned int v6; // edx
  char result; // al

  v2 = *(_BYTE *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 36);
  if ( v2 == 12 )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v4 = *(_BYTE *)(a1 + 36);
  if ( v2 == 13 && (v3 & 3) != 0 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
LABEL_7:
    v4 = v3;
  }
  v5 = guard_dispatch_icall_no_overrides(*(unsigned __int8 *)(a1 + 37), (v4 >> 3) | (32 * (v4 & 7u)));
  v6 = *(_DWORD *)(a1 + 16) & 0xFFFFFFFE;
  if ( v5 )
    v6 = *(_DWORD *)(a1 + 16) | 1;
  *(_DWORD *)(a1 + 16) = v6;
  result = v5 != 0 ? 0x87 : 0;
  *(_BYTE *)(a1 + 25) = result;
  return result;
}
