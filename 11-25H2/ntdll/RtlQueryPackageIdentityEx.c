/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x1800AF440
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPackageClaims @ 0x1800AF4B0 (RtlQueryPackageClaims.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentityEx(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PULONG64 Flags)
{
  NTSTATUS result; // eax
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  result = RtlQueryPackageClaims(
             TokenHandle,
             PackageFullName,
             PackageSize,
             AppId,
             AppIdSize,
             DynamicId,
             (PPS_PKG_CLAIM)((unsigned __int64)&v8 & -(__int64)(Flags != 0LL)),
             0LL);
  if ( result >= 0 )
  {
    if ( Flags )
      *Flags = (unsigned int)v8;
  }
  return result;
}
