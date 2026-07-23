/*
 * XREFs of EtwpApplyContainerFilter @ 0x140A78118
 * Callers:
 *     EtwpApplyTransientFilters @ 0x140834EC8 (EtwpApplyTransientFilters.c)
 *     EtwpApplyScopeFilters @ 0x140839F10 (EtwpApplyScopeFilters.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlUTF8ToUnicodeN @ 0x140906050 (RtlUTF8ToUnicodeN.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall EtwpApplyContainerFilter(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  char v5; // bl
  __int64 v6; // rdx
  wchar_t *Buffer; // r15
  unsigned __int16 Length; // ax
  const CHAR *v10; // r9
  unsigned __int16 v11; // di
  unsigned int v12; // r14d
  ULONG UTF8StringByteCount; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  DestinationString = 0LL;
  v4 = *(_QWORD *)(v2 + 648);
  if ( !a2 )
    return 1;
  v5 = 1;
  if ( v4 == EtwpHostSiloState )
  {
    RtlInitUnicodeString(&DestinationString, L"Host");
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
  }
  else
  {
    v6 = *(unsigned __int16 *)(v4 + 4496);
    UnicodeStringActualByteCount = 0;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL, 2 * v6 + 2, 0x46777445u);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      return 1;
    v10 = *(const CHAR **)(v4 + 4488);
    UTF8StringByteCount = *(unsigned __int16 *)(v4 + 4496);
    DestinationString.MaximumLength = 2 * (UTF8StringByteCount + 1);
    RtlUTF8ToUnicodeN(
      DestinationString.Buffer,
      DestinationString.MaximumLength,
      &UnicodeStringActualByteCount,
      v10,
      UTF8StringByteCount);
    Length = UnicodeStringActualByteCount;
    DestinationString.Length = UnicodeStringActualByteCount;
  }
  v11 = 0;
  v12 = Length >> 1;
  while ( v11 < *a2 )
  {
    if ( a2[8 * v11 + 4] == v12 && !wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], Buffer, v12) )
      goto LABEL_13;
    ++v11;
  }
  v5 = 0;
LABEL_13:
  if ( v4 != EtwpHostSiloState )
    RtlFreeAnsiString(&DestinationString);
  return v5;
}
