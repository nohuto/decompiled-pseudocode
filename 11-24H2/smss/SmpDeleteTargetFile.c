/*
 * XREFs of SmpDeleteTargetFile @ 0x140014A9C
 * Callers:
 *     SmpDeleteFile @ 0x14001499C (SmpDeleteFile.c)
 *     SmpForceDeleteTargetFile @ 0x140014C44 (SmpForceDeleteTargetFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpDeleteTargetFile(void *a1)
{
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-18h] BYREF
  char v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 1;
  v2 = 0LL;
  return NtSetInformationFile(a1, &v2, &v3, 1u, FileDispositionInformation);
}
