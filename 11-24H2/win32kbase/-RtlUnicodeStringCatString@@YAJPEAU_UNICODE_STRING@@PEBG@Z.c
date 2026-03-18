/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011E8F4
 * Callers:
 *     RIMRegOpenLocalMachineKey @ 0x14011E804 (RIMRegOpenLocalMachineKey.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x14011E988 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  USHORT Length; // r8
  USHORT MaximumLength; // ax
  PWSTR Buffer; // rax
  unsigned __int64 v7; // rbx
  size_t v8; // rdx
  NTSTATUS result; // eax
  size_t v10; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a1->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = a1->Buffer;
  v7 = (unsigned __int64)a1->Length >> 1;
  v8 = ((unsigned __int64)a1->MaximumLength >> 1) - v7;
  pcchNewDestLength = 0LL;
  result = RtlWideCharArrayCopyStringWorker(&Buffer[v7], v8, &pcchNewDestLength, a2, v10);
  a1->Length = 2 * (pcchNewDestLength + v7);
  return result;
}
