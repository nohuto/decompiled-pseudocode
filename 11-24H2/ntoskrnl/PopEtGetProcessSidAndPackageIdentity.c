/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x14090910C
 * Callers:
 *     PopEtGetProcessAppId @ 0x14090754C (PopEtGetProcessAppId.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x140356170 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeQueryUserSidToken @ 0x14090A570 (SeQueryUserSidToken.c)
 */

char __fastcall PopEtGetProcessSidAndPackageIdentity(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v6; // rbp
  char v7; // bl
  size_t v9; // [rsp+60h] [rbp+8h] BYREF
  size_t v10; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v7 = SeSecurityAttributePresent(v6, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent(v6, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v7 )
  {
    v9 = 256LL;
    v10 = 132LL;
    if ( (int)RtlQueryPackageIdentity(v6, (NTSTRSAFE_PWSTR)(a3 + 4), &v9, (wchar_t *)(a3 + 260), &v10, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v9 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v10 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v6, a2, 68LL, &v9) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return ObFastDereferenceObject((__int64 *)(a1 + 584), v6, 0x746C6644u);
}
