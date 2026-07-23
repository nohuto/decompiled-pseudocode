/*
 * XREFs of CmpDoWritethroughReparse @ 0x14087F420
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x140879DE0 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x14087F750 (CmpKeyFullNameLength.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING SourceString,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // r14
  __int64 v20; // rdi
  int v21; // eax
  unsigned int Length; // edx
  UNICODE_STRING *v23; // rbx
  __int64 v24; // rax
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  __int16 i; // cx
  PPRIVILEGE_SET v28; // rdx
  int v29; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET v32[2]; // [rsp+40h] [rbp-10h]
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp+20h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v31 = 0LL;
  WORD1(v31) = -1;
  Privileges = 0LL;
  *(_OWORD *)v32 = 0LL;
  if ( !v11 )
  {
LABEL_2:
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
    {
      v12 = -1073741199;
    }
    else
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3);
      started = CmpStartKcbStackForTopLayerKcb((__int64)&v31, KcbAtLayerHeight);
      v12 = started;
      if ( started >= 0 )
      {
        for ( i = WORD1(v31); i >= 0; --i )
        {
          v28 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v32[1] + i - 2) : v32[i - 1];
          if ( HIWORD(v28[3].Control) && BYTE1(v28[3].Control) == 1 )
            break;
          if ( v28[2].PrivilegeCount != -1 )
            goto LABEL_12;
        }
        goto LABEL_2;
      }
      CmpRecordParseFailure(a6, 65792, started);
    }
  }
  else
  {
LABEL_12:
    v14 = *(__int16 *)(a1 + 66);
    _mm_lfence();
    if ( (int)v14 > 2 )
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v14 - 24);
    else
      v15 = *(_QWORD *)(a2 + 8 * v14);
    v16 = CmpKeyFullNameLength(v15);
    v19 = v16;
    if ( v16 > 0xFFFF )
    {
      v12 = -1073741811;
      CmpRecordParseFailure(a6, 65872, -1073741811);
      goto LABEL_3;
    }
    v20 = a6;
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
      *(_DWORD *)(v20 + 160) |= 1u;
    }
    if ( a4 )
    {
      v29 = CmpConstructNameWithStatus(*(_QWORD *)(v15 + 72), &Privileges, v17, v18);
      v12 = v29;
      if ( v29 < 0 )
      {
        CmpRecordParseFailure(v20, 66048, v29);
        goto LABEL_3;
      }
    }
    else
    {
      v21 = CmpConstructNameWithStatus(v15, &Privileges, v17, v18);
      v12 = v21;
      if ( v21 < 0 )
      {
        CmpRecordParseFailure(v20, 66304, v21);
        goto LABEL_3;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, v19, 0x36364D43u);
    if ( DestinationString.Buffer )
    {
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v19;
      RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)Privileges);
      if ( a4 )
      {
        Length = DestinationString.Length;
        if ( (unsigned int)DestinationString.Length + 2 <= DestinationString.MaximumLength )
        {
          DestinationString.Length += 2;
          DestinationString.Buffer[(unsigned __int64)Length >> 1] = 92;
        }
        RtlUnicodeStringCat(&DestinationString, SourceString);
      }
      v23 = a7;
      ExFreePoolWithTag(a7->Buffer, 0);
      *v23 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *(_DWORD *)(v20 + 24) |= 0x10u;
      v12 = 872;
      v24 = *(unsigned __int8 *)(v20 + 426);
      if ( (unsigned __int8)v24 < 4u )
      {
        *(_DWORD *)(v20 + 8 * v24 + 428) = 872;
        *(_DWORD *)(v20 + 8LL * (unsigned __int8)(*(_BYTE *)(v20 + 426))++ + 432) = 66816;
      }
    }
    else
    {
      v12 = -1073741670;
      CmpRecordParseFailure(v20, 66560, -1073741670);
    }
  }
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v32[1] )
    CmSiFreeMemory(v32[1]);
  return v12;
}
