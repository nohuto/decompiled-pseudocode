/*
 * XREFs of PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A18B2C (PopPowerRequestStatsCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     PopPowerRequestStatsFreeId @ 0x140A18B9C (PopPowerRequestStatsFreeId.c)
 *     PopUnicodeStringDeepCopy @ 0x140A473D8 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140A5BA50 (PopAnsiStringToUnicodeString.c)
 *     PopPowerRequestStatsIdConcat @ 0x140A61F78 (PopPowerRequestStatsIdConcat.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x140AC8FFC (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsGetIdForRequest(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  char IsDetailedRequestReason; // al
  unsigned __int64 v5; // rsi
  char v6; // r14
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  signed int v10; // ebx
  __int64 Pool2; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  UNICODE_STRING *v14; // rbp
  int v15; // eax
  UNICODE_STRING v16; // xmm0
  const WCHAR *v18; // rbp
  __int64 i; // rsi
  __int64 v20; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  DestinationString = 0LL;
  SourceString = 0LL;
  IsDetailedRequestReason = PopPowerRequestStatsIsDetailedRequestReason(v2);
  v5 = 0LL;
  v6 = IsDetailedRequestReason;
  if ( !*(_QWORD *)(v2 + 48) || (v5 = (v2 + 63) & 0xFFFFFFFFFFFFFFF8uLL, !IsDetailedRequestReason) )
  {
LABEL_8:
    v7 = 64;
LABEL_9:
    Pool2 = ExAllocatePool2(0x100uLL, v7, 0x54515750u);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( *(_DWORD *)v2 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
      v14 = (UNICODE_STRING *)(Pool2 + 8);
      v10 = PopAnsiStringToUnicodeString((PUNICODE_STRING)(Pool2 + 8), &DestinationString);
      if ( v10 < 0 )
        goto LABEL_26;
      *(_DWORD *)Pool2 |= 2u;
    }
    else
    {
      v12 = *(_QWORD *)(v2 + 8);
      if ( v12 && (v13 = *(_QWORD *)(v12 + 8)) != 0 )
      {
        v14 = (UNICODE_STRING *)(Pool2 + 8);
        *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v13 + 56);
      }
      else
      {
        v14 = (UNICODE_STRING *)(Pool2 + 8);
        RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 8), UNIDENTIFIED_DRIVER);
      }
    }
    v15 = *(_DWORD *)Pool2;
    if ( v6 )
    {
      *(_DWORD *)Pool2 = v15 | 1;
      *(_WORD *)(Pool2 + 40) = *(_WORD *)(v5 + 16);
      *(_DWORD *)(Pool2 + 44) = *(_DWORD *)(v5 + 20);
      RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
      v18 = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)(Pool2 + 44);
            v18 = (const WCHAR *)((char *)v18 + *(unsigned __int16 *)(Pool2 + 8 * v20) + 2) )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 16 * (i + 3)), v18);
        v20 = 2 * (i + 3);
        i = (unsigned int)(i + 1);
      }
      goto LABEL_30;
    }
    if ( (v15 & 2) != 0 )
    {
LABEL_23:
      if ( v5 )
      {
        if ( (*(_DWORD *)v5 & 1) != 0 )
        {
          RtlInitUnicodeString(&SourceString, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
          v10 = PopPowerRequestStatsIdConcat(v14, &SourceString);
          if ( v10 < 0 )
            goto LABEL_26;
        }
      }
LABEL_30:
      *a2 = Pool2;
      return 0;
    }
    SourceString = 0LL;
    v10 = PopUnicodeStringDeepCopy(&SourceString, v14);
    if ( v10 >= 0 )
    {
      v16 = SourceString;
      *(_DWORD *)Pool2 |= 2u;
      *v14 = v16;
      goto LABEL_23;
    }
LABEL_26:
    PopPowerRequestStatsFreeId((PVOID *)Pool2);
    return (unsigned int)v10;
  }
  v7 = -1;
  v8 = 16LL * *(unsigned int *)(v5 + 20);
  if ( v8 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v9 = v8 + 48;
  if ( (int)v8 + 48 >= (unsigned int)v8 )
    v7 = v8 + 48;
  v10 = v9 < (unsigned int)v8 ? 0xC0000095 : 0;
  if ( v9 >= (unsigned int)v8 )
  {
    if ( v7 > 0x40 )
      goto LABEL_9;
    goto LABEL_8;
  }
  return (unsigned int)v10;
}
