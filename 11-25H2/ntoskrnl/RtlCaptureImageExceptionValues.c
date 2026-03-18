/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14040FE48
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505AF8 (KiLockExtendedServiceTable.c)
 *     KiLockServiceTable @ 0x140689F88 (KiLockServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     KiFatalExceptionFilter @ 0x140C4B308 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, a2, 3LL, a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
