/*
 * XREFs of RtlReleasePrivilege @ 0x1409BE610
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14081A06C (VhdiAutoAttachOneVhd.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14069B2E0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x14069B960 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  void *v2; // rcx
  char *v3; // rcx

  if ( (*((_DWORD *)StatePointer + 8) & 3) != 1 )
    ZwAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
  if ( (*((_DWORD *)StatePointer + 8) & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v2 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v3 != (char *)StatePointer + 36 )
    ExFreePoolWithTag(v3, 0);
  ZwClose(*(HANDLE *)StatePointer);
  ExFreePoolWithTag(StatePointer, 0);
}
