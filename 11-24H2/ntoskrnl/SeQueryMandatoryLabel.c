/*
 * XREFs of SeQueryMandatoryLabel @ 0x14086DA0C
 * Callers:
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 * Callees:
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 */

__int64 __fastcall SeQueryMandatoryLabel(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  ACL *v3; // rdi
  __int64 v4; // rax
  PSID v5; // rsi
  char *AceByType; // rax
  int v7; // ecx
  ULONG Index; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    goto LABEL_2;
  if ( v1 >= 0 )
  {
    v3 = *(ACL **)(a1 + 24);
    goto LABEL_6;
  }
  v4 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v4 )
    v3 = (ACL *)(a1 + v4);
  else
LABEL_2:
    v3 = 0LL;
LABEL_6:
  v5 = SepDefaultMandatorySid;
  Index = 0;
  while ( 1 )
  {
    AceByType = (char *)RtlFindAceByType(v3, 0x11u, &Index);
    if ( AceByType )
    {
      if ( (AceByType[1] & 8) == 0 )
        break;
    }
    ++Index;
    if ( !AceByType )
      goto LABEL_9;
  }
  v5 = AceByType + 8;
LABEL_9:
  v7 = *RtlSubAuthorityCountSid(v5);
  if ( (_BYTE)v7 )
    return *RtlSubAuthoritySid(v5, v7 - 1);
  return v2;
}
