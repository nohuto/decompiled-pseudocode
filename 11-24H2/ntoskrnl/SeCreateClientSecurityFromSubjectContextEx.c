/*
 * XREFs of SeCreateClientSecurityFromSubjectContextEx @ 0x140606840
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     RtlSidDominatesForTrust @ 0x1403E3BC0 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 */

__int64 __fastcall SeCreateClientSecurityFromSubjectContextEx(__int64 a1, int a2, char a3, __int64 a4)
{
  void *v4; // rbx
  void *SourceSid; // r14
  char v6; // r15
  int v11; // r8d
  int v12; // ebp
  void *v13; // r11
  int ClientSecurity; // edi
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  v4 = *(void **)a1;
  SourceSid = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !v4 )
    v4 = *(void **)(a1 + 16);
  ObfReferenceObjectWithTag(v4, 0x63436553u);
  if ( *(_QWORD *)a1 )
  {
    v12 = 2;
    RtlSidDominatesForTrust(
      *(PSID *)(*(_QWORD *)(a1 + 16) + 1104LL),
      *(PSID *)(*(_QWORD *)a1 + 1104LL),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      SourceSid = v13;
    }
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(v11) = a3;
  ClientSecurity = SepCreateClientSecurityEx((int)v4, a2, v11, v12, 0, *(_DWORD *)(a1 + 8), 1, 0LL, v6, SourceSid, a4);
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
    ObfDereferenceObjectWithTag(v4, 0x63436553u);
  return (unsigned int)ClientSecurity;
}
