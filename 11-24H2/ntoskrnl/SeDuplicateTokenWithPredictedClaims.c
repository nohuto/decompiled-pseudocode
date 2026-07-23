/*
 * XREFs of SeDuplicateTokenWithPredictedClaims @ 0x140792ADC
 * Callers:
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenWithPredictedClaims(
        void *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  int v9; // r15d
  NTSTATUS v10; // eax
  int v11; // ebx
  bool v12; // di
  __int64 v13; // r9
  HANDLE v14; // rcx
  __int64 v16; // [rsp+48h] [rbp-29h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-21h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+58h] [rbp-19h] BYREF
  __int128 v19; // [rsp+60h] [rbp-11h] BYREF
  __int128 v20; // [rsp+70h] [rbp-1h]
  __int128 v21; // [rsp+80h] [rbp+Fh]

  PkgClaim = 0LL;
  v17 = 0LL;
  *a6 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  LOWORD(v16) = 0;
  v9 = (int)a1;
  v19 = 0LL;
  v20 = 0LL;
  v10 = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741275 )
      goto LABEL_14;
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v12 = (PkgClaim.Flags & 0x200000) != 0;
  }
  if ( !a4 && !v12 )
    return (unsigned int)v11;
  *((_QWORD *)&v19 + 1) = 0LL;
  DWORD2(v20) = 0;
  *(_QWORD *)&v20 = 0LL;
  LODWORD(v19) = 48;
  v21 = 0LL;
  v11 = SepDuplicateToken(v9, (unsigned int)&v19, 0, 1, 0, 0, 1, (__int64)&v17);
  if ( v11 < 0 )
  {
    v14 = 0LL;
    v17 = 0LL;
    goto LABEL_15;
  }
  if ( !v12 || (v11 = SepDesktopAppxSubProcessToken(v17, 0LL, a2, v13, a3, (_BYTE *)&v16 + 1, &v16), v11 >= 0) )
  {
    if ( !a4 || (LOBYTE(v13) = 1, v11 = SepAddTokenOriginClaim(a4, a5, v17, v13), v11 >= 0) )
    {
      *a6 = v17;
      return (unsigned int)v11;
    }
  }
LABEL_14:
  v14 = v17;
LABEL_15:
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)v11;
}
