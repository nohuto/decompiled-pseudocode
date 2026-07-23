/*
 * XREFs of MmInsertSecureImageActivePatch @ 0x1407F67F4
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407F11D0 (MiAllocateSecureImageActivePatch.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F3BEC (MiInsertSecureImageActivePatch.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1407F5714 (MiLogInsertSecureImageActivePatch.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140A4EF38 (MiFindHotPatchRecord.c)
 */

void __fastcall MmInsertSecureImageActivePatch(int a1, unsigned int a2, int a3, unsigned int a4, unsigned int a5)
{
  int HotPatchRecord; // esi
  UNICODE_STRING *v10; // rax
  UNICODE_STRING *v11; // rdi
  struct _KTHREAD *Lock; // rbx
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-40h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  HotPatchRecord = MiFindHotPatchRecord((int)&qword_140E375B8, 0, a1, a2, 34404, (__int64)&v13, &UnicodeString);
  if ( HotPatchRecord >= 0 )
  {
    v10 = MiAllocateSecureImageActivePatch(&UnicodeString);
    v11 = v10;
    if ( v10 )
    {
      LODWORD(v10[1].Buffer) = a1;
      HIDWORD(v10[1].Buffer) = a2;
      *(_DWORD *)&v10[2].Length = a4;
      *(_DWORD *)(&v10[2].MaximumLength + 1) = a5;
      LODWORD(v10[2].Buffer) = a3;
      Lock = MmAcquireLoadLock();
      MiInsertSecureImageActivePatch(v11);
      MmReleaseLoadLock(Lock);
    }
    else
    {
      HotPatchRecord = -1073741670;
    }
  }
  MiLogInsertSecureImageActivePatch(a1, a2, a4, a5, a3, HotPatchRecord);
  RtlFreeAnsiString(&UnicodeString);
}
