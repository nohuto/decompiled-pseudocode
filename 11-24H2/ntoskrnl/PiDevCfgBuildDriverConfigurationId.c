/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x140A9F360
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x140499DB0 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1405A0F00 (RtlUnicodeStringCopyStringEx.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  unsigned int v4; // ebx
  void *v7; // r14
  bool IsNullGuid; // al
  __int64 v9; // rdx
  NTSTATUS v10; // edi
  ULONG_PTR v11; // rdx
  wchar_t *Pool2; // rax
  unsigned __int16 Length; // bx
  __int64 v15; // [rsp+20h] [rbp-60h]
  __int64 v16; // [rsp+28h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-10h] BYREF

  v2 = a1 + 40;
  v3 = a1 + 72;
  v4 = *(unsigned __int16 *)(a1 + 72) + *(unsigned __int16 *)(a1 + 40) + 4;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  RemainingString = 0LL;
  TimeFields = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v4 += *(unsigned __int16 *)(a1 + 88) + 2;
  v7 = (void *)(a1 + 188);
  IsNullGuid = PnpIsNullGuid((void *)(a1 + 188));
  v9 = v4 + 72;
  if ( IsNullGuid )
    v9 = v4;
  if ( (unsigned __int64)(v9 + 2) > 0xFFFE )
    return (unsigned int)-1073741562;
  DestinationString.Length = v9;
  v11 = (unsigned __int16)(v9 + 2);
  DestinationString.MaximumLength = v11;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v11, 0x67727453u);
  DestinationString.Buffer = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_22;
  }
  v10 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v3);
  if ( v10 < 0 )
    goto LABEL_21;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = RtlUnicodeStringPrintfEx(&RemainingString, &RemainingString, 0x800u, L",%wZ", a1 + 88);
    if ( v10 < 0 )
      goto LABEL_21;
    v7 = (void *)(a1 + 188);
    Length = *(_WORD *)(a1 + 88) + 2 + DestinationString.Length;
    DestinationString.Length = Length;
  }
  else
  {
    Length = DestinationString.Length;
  }
  if ( PnpIsNullGuid(v7) )
  {
LABEL_20:
    *a2 = DestinationString;
    Pool2 = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v10 = RtlUnicodeStringCopyStringEx(&RemainingString, L",", &RemainingString, 0x800u);
    if ( v10 < 0 )
      goto LABEL_21;
    Length += 2;
  }
  RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
  LODWORD(v16) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
  LODWORD(v15) = TimeFields.Year;
  v10 = RtlUnicodeStringPrintf(
          &RemainingString,
          L",%02d/%02d/%04d,%u.%u.%u.%u",
          (unsigned int)TimeFields.Month,
          (unsigned int)TimeFields.Day,
          v15,
          v16,
          *(unsigned __int16 *)(a1 + 124),
          *(unsigned __int16 *)(a1 + 122),
          *(unsigned __int16 *)(a1 + 120));
  if ( v10 >= 0 )
  {
    DestinationString.Length = RemainingString.Length + Length;
    goto LABEL_20;
  }
LABEL_21:
  Pool2 = DestinationString.Buffer;
LABEL_22:
  if ( Pool2 )
    ExFreePool(Pool2);
  return (unsigned int)v10;
}
