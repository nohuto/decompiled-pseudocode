/*
 * XREFs of MmInsertSecureImageActivePatch @ 0x1407E61F0
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MiAllocateSecureImageActivePatch @ 0x1407E0D60 (MiAllocateSecureImageActivePatch.c)
 *     MiInsertSecureImageActivePatch @ 0x1407E3770 (MiInsertSecureImageActivePatch.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1407E5198 (MiLogInsertSecureImageActivePatch.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140A5618C (MiFindHotPatchRecord.c)
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
  HotPatchRecord = MiFindHotPatchRecord((int)&qword_140E37238, 0, a1, a2, 34404, (__int64)&v13, &UnicodeString);
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
      Lock = (struct _KTHREAD *)MmAcquireLoadLock();
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
