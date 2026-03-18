/*
 * XREFs of PopPowerRequestStatsGetIdForRequest @ 0x140A198D4
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A1982C (PopPowerRequestStatsCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4 (Feature_2395269435__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerRequestStatsFreeId @ 0x140A1989C (PopPowerRequestStatsFreeId.c)
 *     PopUnicodeStringDeepCopy @ 0x140A4D10C (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140A61620 (PopAnsiStringToUnicodeString.c)
 *     PopPowerRequestStatsIdConcat @ 0x140A67DBC (PopPowerRequestStatsIdConcat.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x140AC45F4 (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsGetIdForRequest(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  char IsDetailedRequestReason; // al
  unsigned __int64 v5; // r14
  char v6; // r15
  unsigned __int64 v7; // rdx
  signed int v8; // ebx
  __int64 Pool2; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  UNICODE_STRING *v12; // rsi
  const WCHAR *v13; // rdx
  _KPROCESS *Process; // rdx
  int v15; // eax
  UNICODE_STRING v16; // xmm0
  __int64 v18; // rsi
  const WCHAR *i; // rbp
  __int64 v20; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  DestinationString = 0LL;
  SourceString = 0LL;
  IsDetailedRequestReason = PopPowerRequestStatsIsDetailedRequestReason(v2);
  v5 = 0LL;
  v6 = IsDetailedRequestReason;
  if ( !*(_QWORD *)(v2 + 48) )
    goto LABEL_5;
  v5 = (v2 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !IsDetailedRequestReason )
    goto LABEL_5;
  v7 = 16LL * *(unsigned int *)(v5 + 20);
  if ( v7 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v8 = (int)v7 + 48 < (unsigned int)v7 ? 0xC0000095 : 0;
  if ( (int)v7 + 48 >= (unsigned int)v7 )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( !*(_DWORD *)v2 )
    {
      v10 = *(_QWORD *)(v2 + 8);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          v12 = (UNICODE_STRING *)(Pool2 + 8);
          *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v11 + 56);
          goto LABEL_20;
        }
      }
      v12 = (UNICODE_STRING *)(Pool2 + 8);
      v13 = UNIDENTIFIED_DRIVER;
LABEL_13:
      RtlInitUnicodeString(v12, v13);
      goto LABEL_20;
    }
    v12 = (UNICODE_STRING *)(Pool2 + 8);
    if ( (unsigned int)Feature_2395269435__private_IsEnabledDeviceUsageNoInline() )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
    }
    else
    {
      Process = *(_KPROCESS **)(v2 + 8);
      if ( !Process )
      {
        v13 = UNIDENTIFIED_PROCESS;
        goto LABEL_13;
      }
    }
    RtlInitAnsiString(&DestinationString, (PCSZ)&Process[1].SecureState);
    v8 = PopAnsiStringToUnicodeString((PUNICODE_STRING)(Pool2 + 8), &DestinationString);
    if ( v8 < 0 )
      goto LABEL_27;
    *(_DWORD *)Pool2 |= 2u;
LABEL_20:
    v15 = *(_DWORD *)Pool2;
    if ( v6 )
    {
      *(_DWORD *)Pool2 = v15 | 1;
      *(_WORD *)(Pool2 + 40) = *(_WORD *)(v5 + 16);
      *(_DWORD *)(Pool2 + 44) = *(_DWORD *)(v5 + 20);
      RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
      v18 = 0LL;
      for ( i = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
            (unsigned int)v18 < *(_DWORD *)(Pool2 + 44);
            i = (const WCHAR *)((char *)i + *(unsigned __int16 *)(Pool2 + 8 * v20) + 2) )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 16 * (v18 + 3)), i);
        v20 = 2 * (v18 + 3);
        v18 = (unsigned int)(v18 + 1);
      }
      goto LABEL_31;
    }
    if ( (v15 & 2) != 0 )
    {
LABEL_24:
      if ( v5 )
      {
        if ( (*(_DWORD *)v5 & 1) != 0 )
        {
          RtlInitUnicodeString(&SourceString, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
          v8 = PopPowerRequestStatsIdConcat(v12, &SourceString);
          if ( v8 < 0 )
            goto LABEL_27;
        }
      }
LABEL_31:
      *a2 = Pool2;
      return 0;
    }
    SourceString = 0LL;
    v8 = PopUnicodeStringDeepCopy(&SourceString, v12);
    if ( v8 >= 0 )
    {
      v16 = SourceString;
      *(_DWORD *)Pool2 |= 2u;
      *v12 = v16;
      goto LABEL_24;
    }
LABEL_27:
    PopPowerRequestStatsFreeId((PVOID *)Pool2);
  }
  return (unsigned int)v8;
}
