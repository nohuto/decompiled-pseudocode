/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x18010D3EC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x18010D4E8 (LdrpSetModuleSigningLevel.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180161AC8 (LdrpLogIntegrityContinuityTelemetry.c)
 *     NtCompareSigningLevels @ 0x180164610 (NtCompareSigningLevels.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v12 = 0;
  v11 = 0;
  v3 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v5 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v5 + 280) & 0x8000) != 0
     || (LOBYTE(v5) = *(_BYTE *)(v5 + 284), LOBYTE(a2) = 12, (int)NtCompareSigningLevels(v5, a2) >= 0)) )
  {
    v6 = LdrpSetModuleSigningLevel(v3, *(_QWORD *)(a1 + 56), (unsigned int)&v11, 12, (__int64)&v12);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -1073741701 || v6 == -1073740760 || v6 == -1073740285 || v6 == -1058471934 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
        goto LABEL_15;
      }
      if ( LdrpEnforceIntegrityContinuity )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
LABEL_15:
        v2 = v6;
      }
LABEL_16:
      LdrpLogIntegrityContinuityTelemetry(a1, v8, v11, v2, v12);
      return (unsigned int)v2;
    }
    v9 = *(_QWORD *)(a1 + 56);
    LOBYTE(v7) = 12;
    LOBYTE(v9) = *(_BYTE *)(v9 + 284);
    v2 = NtCompareSigningLevels(v9, v7);
    if ( v2 < 0 )
      goto LABEL_16;
  }
  return (unsigned int)v2;
}
