/*
 * XREFs of XmInt1aWriteConfigRegister @ 0x1405792E8
 * Callers:
 *     XmExecuteInt1a @ 0x140578F24 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall XmInt1aWriteConfigRegister(__int64 a1)
{
  int v2; // ecx
  unsigned __int8 v3; // al
  unsigned __int8 v4; // dl
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  char result; // al
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v2 = *(unsigned __int8 *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 36);
  if ( (_BYTE)v2 == 12 )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v4 = *(_BYTE *)(a1 + 36);
  if ( (_BYTE)v2 == 13 && (v3 & 3) != 0 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
LABEL_7:
    v4 = v3;
  }
  v5 = v2 - 11;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_15;
      v7 = *(_DWORD *)(a1 + 28);
    }
    else
    {
      v7 = *(unsigned __int16 *)(a1 + 28);
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(a1 + 28);
  }
  v11 = v7;
LABEL_15:
  v8 = guard_dispatch_icall_no_overrides(
         *(unsigned __int8 *)(a1 + 37),
         (v4 >> 3) | (32 * (v4 & 7u)),
         &v11,
         *(unsigned __int16 *)(a1 + 52));
  v9 = *(_DWORD *)(a1 + 16) & 0xFFFFFFFE;
  if ( v8 )
    v9 = *(_DWORD *)(a1 + 16) | 1;
  *(_DWORD *)(a1 + 16) = v9;
  result = v8 != 0 ? 0x87 : 0;
  *(_BYTE *)(a1 + 25) = result;
  return result;
}
