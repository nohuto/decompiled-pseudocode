/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1409B977C
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1408A6770 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1407804D4 (SepCopyClientTokenAndSetSilo.c)
 *     SeQueryServerSiloToken @ 0x1409BB180 (SeQueryServerSiloToken.c)
 *     ObRetagReferences @ 0x1409C0A60 (ObRetagReferences.c)
 *     SeGetTokenControlInformation @ 0x1409D8610 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  PVOID v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD **)(a1 + 16);
  v10 = 0LL;
  v11 = 0LL;
  v5 = v2[3];
  v12 = v5;
  v6 = SeQueryServerSiloToken(v2, &v10);
  if ( v6 >= 0 && PsIsHostSilo(v10) && (_DWORD)v5 == 999 && !HIDWORD(v12) )
  {
    v6 = SepCopyClientTokenAndSetSilo((int)v2, *(_DWORD *)(a1 + 4), a2, &v11);
    if ( v6 >= 0 )
    {
      v8 = v11;
      ObRetagReferences(v11, v7, 1665361235LL);
      *(_QWORD *)(a1 + 16) = v8;
      *(_BYTE *)(a1 + 24) = 0;
      ObfDereferenceObjectWithTag(v2, 0x63436553u);
      SeGetTokenControlInformation(v8, a1 + 28);
    }
  }
  return (unsigned int)v6;
}
