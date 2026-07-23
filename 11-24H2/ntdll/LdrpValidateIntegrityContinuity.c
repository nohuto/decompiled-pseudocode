/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x1801058EC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x1801059E8 (LdrpSetModuleSigningLevel.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015E938 (LdrpLogIntegrityContinuityTelemetry.c)
 *     NtCompareSigningLevels @ 0x180161440 (NtCompareSigningLevels.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // esi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0;
  v11 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0 || NtCompareSigningLevels(*(_BYTE *)(v7 + 284), 0xCu) >= 0) )
  {
    LOBYTE(a4) = 12;
    v8 = LdrpSetModuleSigningLevel(a2, *(_QWORD *)(a1 + 56), &v11, a4, &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741701 || v8 == -1073740760 || v8 == -1073740285 || v8 == -1058471934 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
        goto LABEL_15;
      }
      if ( LdrpEnforceIntegrityContinuity )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
LABEL_15:
        v4 = v8;
      }
LABEL_16:
      LdrpLogIntegrityContinuityTelemetry(a1, v9, v11, v4, v12);
      return (unsigned int)v4;
    }
    v4 = NtCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
    if ( v4 < 0 )
      goto LABEL_16;
  }
  return (unsigned int)v4;
}
