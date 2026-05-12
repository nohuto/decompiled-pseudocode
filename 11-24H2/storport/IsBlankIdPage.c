/*
 * XREFs of IsBlankIdPage @ 0x140033A7C
 * Callers:
 *     StorCompareScsiIdentity @ 0x140033940 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x140033D20 (StorGetNextVPDIdDescriptor.c)
 */

char __fastcall IsBlankIdPage(_BYTE *a1)
{
  char v1; // bl
  int v2; // eax
  unsigned int v3; // ecx
  __int64 NextVPDIdDescriptor; // rax
  char v5; // r10
  unsigned __int8 i; // dl
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v10 = 0;
  v1 = 0;
  if ( !a1 )
    return 0;
  if ( a1[1] != 0x83 )
    return 0;
  v2 = (unsigned __int8)a1[3];
  v8[1] = 0LL;
  v8[0] = a1;
  v3 = (v2 | ((unsigned __int8)a1[2] << 8)) + 4;
  if ( v3 > 0xFFFF )
    v3 = 0xFFFF;
  v9 = v3;
  while ( 1 )
  {
    NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(v8);
    if ( !NextVPDIdDescriptor )
      break;
    v1 = v5;
    for ( i = 0; i < *(_BYTE *)(NextVPDIdDescriptor + 3); i += v5 )
    {
      if ( (*(_BYTE *)(i + NextVPDIdDescriptor + 4) & 0xDF) != 0 )
        return 0;
    }
  }
  if ( !v1 )
    return 0;
  return v5;
}
