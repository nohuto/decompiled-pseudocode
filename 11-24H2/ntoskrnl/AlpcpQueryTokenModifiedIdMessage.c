/*
 * XREFs of AlpcpQueryTokenModifiedIdMessage @ 0x14073F710
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140892400 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteClientSecurity @ 0x140890300 (SeDeleteClientSecurity.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 *     SeGetTokenControlInformation @ 0x1409CF560 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall AlpcpQueryTokenModifiedIdMessage(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[16]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v13; // [rsp+48h] [rbp-70h]
  _BYTE v14[12]; // [rsp+60h] [rbp-58h] BYREF
  int v15; // [rsp+6Ch] [rbp-4Ch]
  char v16; // [rsp+D8h] [rbp+20h] BYREF

  v15 = 0;
  memset_0(v14, 0, 0x44uLL);
  v16 = 0;
  v11 = 0LL;
  v13 = 0LL;
  if ( a4 >= 8 )
  {
    result = AlpcpGetEffectiveTokenMessage(a1, a2, &v11, v14, &v16);
    v9 = result;
    if ( (int)result < 0 )
      return result;
    SeGetTokenControlInformation(v11, v12);
    if ( v16 )
      SeDeleteClientSecurity(v14);
  }
  else
  {
    v9 = -1073741789;
  }
  if ( a5 )
    *a5 = 8;
  if ( v9 >= 0 )
    *a3 = v13;
  return (unsigned int)v9;
}
