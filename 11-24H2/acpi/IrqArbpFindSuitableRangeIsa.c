/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1400AA210
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1400BD6B0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x14003BCB4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1400566BC (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     IcGetPossibleInput @ 0x140096758 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1400AADE0 (IcIsInputValid.c)
 *     IrqArbGsivFromIrq @ 0x1400B3244 (IrqArbGsivFromIrq.c)
 *     IcIsInterruptTypeSecondary @ 0x1400C0568 (IcIsInterruptTypeSecondary.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1400C05C0 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  ULONG v3; // r12d
  __int16 v6; // di
  unsigned int v7; // r15d
  __int64 v8; // rdx
  char v9; // r11
  char v10; // r11
  unsigned __int8 v11; // r11
  __int64 v12; // rdx
  ULONG Flags; // edi
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // r10d
  __int64 v17; // rdx
  int v18; // r10d
  int v19; // eax
  __int64 v20; // rcx
  char result; // al
  _BYTE v22[4]; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+54h] [rbp-15h] BYREF
  int v24; // [rsp+58h] [rbp-11h] BYREF
  int v25; // [rsp+5Ch] [rbp-Dh]
  __int128 v26; // [rsp+60h] [rbp-9h]
  __int128 v27; // [rsp+70h] [rbp+7h]

  v2 = *(_DWORD *)a2;
  v24 = 0;
  v22[0] = 0;
  v3 = 0;
  v23 = 0;
  v26 = 0LL;
  v27 = 0LL;
  while ( v2 <= *(_DWORD *)(a2 + 8) )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 1;
    v7 = IrqArbGsivFromIrq(v2);
    if ( !(unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v2, &v23) || (v9 = byte_140088474[8 * v23], v9 == -1) )
    {
      if ( (unsigned __int8)IcIsInterruptTypeSecondary(v7) )
      {
        if ( (int)AcpiIrqTranslateSecondaryInterruptToNtResources() < 0 )
          goto LABEL_23;
      }
      else
      {
        ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v24);
      }
    }
    else if ( (v9 & 1) != 0 )
    {
      if ( v6 )
        goto LABEL_23;
    }
    else if ( !v6 )
    {
      goto LABEL_23;
    }
    if ( ((int)IcGetPossibleInput(v7, v8, v22) < 0 || v10 == v22[0]) && (unsigned __int8)IcIsInputValid(v7) )
    {
      v12 = *(_QWORD *)(a2 + 40);
      Flags = v3 | 1;
      v14 = *(_QWORD *)(a2 + 72);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL);
      v16 = *(_DWORD *)(v12 + 36);
      v17 = *(_QWORD *)(v12 + 40);
      v18 = v16 & 1;
      if ( !v18 )
        Flags = v3;
      v3 = Flags;
      v19 = v18 | 2;
      v25 = *(_WORD *)(v15 + 4) & 1 | (v11 >> 2) & 2;
      if ( (*(_BYTE *)(v15 + 4) & 8) == 0 )
        v19 = v18;
      if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
                  v17,
                  v14,
                  1LL,
                  v7,
                  v25,
                  v19,
                  1) >= 0
        && RtlFindRange(
             *(PRTL_RANGE_LIST *)(a1 + 48),
             v2,
             v2,
             1u,
             1u,
             Flags,
             *(_BYTE *)(a2 + 67),
             0LL,
             0LL,
             (PULONGLONG)a2) >= 0 )
      {
        v20 = *(_QWORD *)(a2 + 40);
        result = 1;
        *(_QWORD *)a2 = v2;
        *(_QWORD *)(a2 + 8) = v2;
        *(_QWORD *)(v20 + 16) = 1LL;
        return result;
      }
    }
LABEL_23:
    ++v2;
  }
  return 0;
}
