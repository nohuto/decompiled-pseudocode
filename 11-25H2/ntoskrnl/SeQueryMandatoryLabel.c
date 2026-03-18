/*
 * XREFs of SeQueryMandatoryLabel @ 0x140903F5C
 * Callers:
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404052C0 (RtlFindAceByType.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140461BC0 (RtlSubAuthorityCountSid.c)
 */

__int64 __fastcall SeQueryMandatoryLabel(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  PSID v5; // rsi
  unsigned __int8 *AceByType; // rax
  int v7; // ecx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    goto LABEL_2;
  if ( v1 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    goto LABEL_6;
  }
  v4 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v4 )
    v3 = a1 + v4;
  else
LABEL_2:
    v3 = 0LL;
LABEL_6:
  v5 = SepDefaultMandatorySid;
  v9 = 0;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(v3, 17, &v9);
    if ( AceByType )
    {
      if ( (AceByType[1] & 8) == 0 )
        break;
    }
    ++v9;
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
