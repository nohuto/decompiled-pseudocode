/*
 * XREFs of AlpcpQuerySidMessage @ 0x140891FAC
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140892400 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpQuerySidToken @ 0x140892064 (AlpcpQuerySidToken.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 */

__int64 __fastcall AlpcpQuerySidMessage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int SidToken; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[12]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+4Ch] [rbp-4Ch]
  PVOID Object; // [rsp+50h] [rbp-48h]

  v14 = 0;
  memset_0(v13, 0, 0x44uLL);
  v12 = 0LL;
  v11[0] = 0;
  result = AlpcpGetEffectiveTokenMessage(a1, a2, &v12, v13, v11);
  if ( (int)result >= 0 )
  {
    SidToken = AlpcpQuerySidToken(v12, a3, a4, a5);
    if ( v11[0] )
      ObfDereferenceObjectWithTag(Object, 0x63436553u);
    return SidToken;
  }
  return result;
}
