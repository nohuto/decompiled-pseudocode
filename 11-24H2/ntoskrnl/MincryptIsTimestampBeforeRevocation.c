/*
 * XREFs of MincryptIsTimestampBeforeRevocation @ 0x140826528
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x1406A0214 (I_MinCryptIsCertificateHashRevokedV2.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x1408261C4 (I_MinCryptIsTimestampSignerTrusted.c)
 */

__int64 __fastcall MincryptIsTimestampBeforeRevocation(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  bool v6; // bl
  int v7; // esi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  bool v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 v15; // [rsp+90h] [rbp+50h]
  unsigned int v16; // [rsp+98h] [rbp+58h] BYREF

  v15 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 1;
  v13 = 0LL;
  v7 = 0;
  v14 = 0;
  v8 = -1073740285;
  v16 = 0;
  v9 = 0;
  if ( !*(_DWORD *)(v4 + 48) )
    return v8;
  do
  {
    v10 = v7;
    v11 = *(_QWORD *)(v4 + 40) + 120LL * v9;
    if ( !I_MinCryptIsCertificateHashRevokedV2(
            *(_DWORD *)v11,
            (const void *)(v11 + 8),
            *(_DWORD *)(v11 + 4),
            &v13,
            &v14,
            (int *)&v16) )
      goto LABEL_15;
    ++v7;
    if ( *a2 )
    {
      if ( *a2 < v13 )
      {
        if ( v16 && I_MinCryptIsTimestampSignerTrusted(v16, *(_QWORD *)(v15 + 16)) )
        {
          v7 = v10;
          v8 = 0;
          goto LABEL_15;
        }
        *(_DWORD *)(a1 + 8) |= 0x2000000u;
      }
      else
      {
        *(_DWORD *)(a1 + 8) |= 0x1000000u;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) |= 0x4000000u;
    }
    v6 = v6 && v14;
LABEL_15:
    v4 = *(_QWORD *)(a1 + 16);
    ++v9;
  }
  while ( v9 < *(_DWORD *)(v4 + 48) );
  if ( v7 )
  {
    v8 = -1073740285;
    if ( v6 )
      *(_DWORD *)(a1 + 8) |= 0x800000u;
  }
  return v8;
}
