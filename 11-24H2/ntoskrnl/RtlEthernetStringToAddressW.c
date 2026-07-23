/*
 * XREFs of RtlEthernetStringToAddressW @ 0x1405EB7F0
 * Callers:
 *     <none>
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __stdcall RtlEthernetStringToAddressW(PCWSTR S, LPCWSTR *Terminator, DL_EUI48 *Addr)
{
  int *v4; // r14
  int v7; // ebp
  char v8; // bl
  WCHAR v9; // si
  char v10; // bl
  int v12; // [rsp+20h] [rbp-48h] BYREF
  __int16 v13; // [rsp+24h] [rbp-44h] BYREF
  char v14; // [rsp+26h] [rbp-42h] BYREF

  v4 = &v12;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *S;
      if ( !*S || v9 >= 0x80u )
        break;
      if ( iswctype(v9, 4u) )
      {
        v10 = 16 * (v8 + 13);
      }
      else
      {
        if ( !iswctype(v9, 0x80u) )
          break;
        v10 = 16 * v8 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10;
      }
      v8 = v9 + v10;
      if ( v7 == 2 )
        goto LABEL_15;
      ++S;
      ++v7;
    }
    if ( *S != 45 && *S != 58 )
      break;
    if ( v4 < (int *)((char *)&v13 + 1) )
    {
      *(_BYTE *)v4 = v8;
      ++S;
      v4 = (int *)((char *)v4 + 1);
      if ( v7 == 2 )
        continue;
    }
LABEL_15:
    *Terminator = S;
    return -1073741811;
  }
  *Terminator = S;
  if ( v7 != 2 )
    return -1073741811;
  *(_BYTE *)v4 = v8;
  if ( (char *)v4 + 1 != &v14 )
    return -1073741811;
  *(_DWORD *)Addr->Byte = v12;
  *(_WORD *)&Addr->Ei48.Byte[1] = v13;
  return 0;
}
