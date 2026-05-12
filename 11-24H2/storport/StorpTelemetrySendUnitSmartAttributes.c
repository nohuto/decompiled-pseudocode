/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1400BC668
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x140038EE0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer @ 0x1400AE0D0 (McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1400B55D0 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400B5A10 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1400BCD58 (StorpTelemetrySmartCommand.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  const char *v2; // rdi
  __int64 Pool; // rax
  __int64 v4; // rdx
  unsigned int *v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  char *v8; // rbx
  int v9; // eax
  char *v10; // rdx
  bool v11; // cf
  _WORD *v12; // r15
  unsigned __int16 *v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rdx
  const char *v32; // rbx
  int v33; // [rsp+70h] [rbp-B0h]
  int v34; // [rsp+88h] [rbp-98h]
  _QWORD v35[2]; // [rsp+A0h] [rbp-80h] BYREF
  __int16 v36; // [rsp+B0h] [rbp-70h]
  int v37; // [rsp+B4h] [rbp-6Ch]
  __int16 v38; // [rsp+B8h] [rbp-68h]
  char v39; // [rsp+BAh] [rbp-66h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v42; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v43; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v45; // [rsp+E8h] [rbp-38h]
  unsigned __int64 v46; // [rsp+F0h] [rbp-30h]
  unsigned __int64 v47; // [rsp+F8h] [rbp-28h]
  unsigned __int64 v48; // [rsp+100h] [rbp-20h]
  unsigned __int64 v49; // [rsp+108h] [rbp-18h]
  unsigned __int64 v50; // [rsp+110h] [rbp-10h]
  unsigned __int64 v51; // [rsp+118h] [rbp-8h]

  memset_0(v35, 0, 0x80uLL);
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2120) & 2) == 0 && !KeGetCurrentIrql() )
  {
    Pool = RaidAllocatePool(256LL, 556LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    v5 = (unsigned int *)Pool;
    if ( Pool )
    {
      v37 = -1;
      v36 = -1;
      v38 = -1;
      LOBYTE(v4) = -38;
      v39 = -1;
      v40 = -1LL;
      v41 = -1LL;
      v42 = -1LL;
      v43 = -1LL;
      v44 = -1LL;
      v45 = -1LL;
      v46 = -1LL;
      v47 = -1LL;
      v48 = -1LL;
      v49 = -1LL;
      v50 = -1LL;
      v51 = -1LL;
      v6 = StorpTelemetrySmartCommand(a1, v4, Pool);
      if ( v6 < 0 )
        goto LABEL_11;
      v8 = (char *)v5 + *v5;
      if ( *(_DWORD *)v8 < 8u )
        goto LABEL_12;
      if ( v8[19] == -12 && v8[20] == 44 )
        *(_DWORD *)(a1 + 2120) |= 0x20u;
      else
        *(_DWORD *)(a1 + 2120) &= ~0x20u;
      LOBYTE(v7) = -48;
      v6 = StorpTelemetrySmartCommand(a1, v7, v5);
      if ( v6 < 0 )
      {
LABEL_11:
        if ( v6 == -1073741670 )
        {
LABEL_14:
          ExFreePoolWithTag(v5, 0x65546152u);
          return;
        }
LABEL_12:
        v9 = *(_DWORD *)(a1 + 2120);
        if ( (v9 & 1) == 0 )
          *(_DWORD *)(a1 + 2120) = v9 | 2;
        goto LABEL_14;
      }
      v10 = (char *)v5 + *v5;
      v11 = *(_DWORD *)v8 < 0x200u;
      v35[0] = v10;
      v12 = v10 + 16;
      v35[1] = v10 + 16;
      if ( v11 )
        goto LABEL_12;
      if ( v10 == (char *)-16LL )
      {
LABEL_54:
        if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
          || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
        {
          goto LABEL_65;
        }
        if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( *(_BYTE *)(a1 + 2124) )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
          g_StorpTraceLoggingCriticalEventEnabled = -1;
        if ( g_StorpTraceLoggingCriticalEventEnabled )
          StorpTelemetryLogUnitSmartAttributesCriticalData(a1);
        else
LABEL_65:
          StorpTelemetryLogUnitSmartAttributesMeasures(a1);
        v30 = *(_QWORD *)(a1 + 160);
        if ( v30 )
        {
          v2 = (const char *)(v30 + 90);
        }
        else
        {
          v31 = *(_QWORD *)(a1 + 152);
          if ( v31 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 608LL) + 184LL) & 0x40) != 0 )
            v2 = (const char *)(v31 + 41);
        }
        if ( (byte_140171464 & 0x40) != 0 )
        {
          v32 = (const char *)&word_140150F48;
          if ( v2 )
            v32 = v2;
          McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer(
            a1 + 242,
            a1 + 177,
            a1 + 168,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 104),
            *(_BYTE *)(a1 + 105),
            *(_BYTE *)(a1 + 106),
            a1 + 2104,
            *(_QWORD *)(a1 + 24) + 5064LL,
            *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
            (const char *)(a1 + 168),
            (const char *)(a1 + 177),
            (const char *)(a1 + 242),
            v32,
            v33,
            *v12,
            (*(_DWORD *)(a1 + 2120) & 0x20) != 0,
            v34,
            (__int64)v12);
        }
        goto LABEL_14;
      }
      v13 = (unsigned __int16 *)(v10 + 27);
      v14 = 30LL;
      while ( 1 )
      {
        v15 = *((unsigned __int8 *)v13 - 9);
        if ( v15 > 0xC1 )
        {
          v23 = v15 - 194;
          if ( !v23 )
          {
            v39 = *((_BYTE *)v13 - 4);
            goto LABEL_53;
          }
          v24 = v23 - 2;
          if ( !v24 )
          {
            v46 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            goto LABEL_53;
          }
          v25 = v24 - 1;
          if ( !v25 )
          {
            v47 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            goto LABEL_53;
          }
          v26 = v25 - 1;
          if ( !v26 )
          {
            v48 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            goto LABEL_53;
          }
          v27 = v26 - 3;
          if ( !v27 )
          {
            v49 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            goto LABEL_53;
          }
          v28 = v27 - 24;
          if ( v28 )
          {
            v29 = v28 - 5;
            if ( v29 )
            {
              if ( v29 == 3 )
                v51 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            }
            else
            {
              v50 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            }
            goto LABEL_53;
          }
        }
        else if ( v15 != 193 )
        {
          v16 = v15 - 4;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 4;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 173;
                  if ( v20 )
                  {
                    v21 = v20 - 1;
                    if ( v21 )
                    {
                      v22 = v21 - 3;
                      if ( v22 )
                      {
                        if ( v22 == 1 )
                          v45 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                      }
                      else
                      {
                        v44 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13
                                                                                                  - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                      }
                    }
                    else
                    {
                      v43 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13
                                                                                                - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    v42 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13
                                                                                              - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                  }
                }
                else
                {
                  v41 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                v37 = *((_DWORD *)v13 - 1);
              }
            }
            else
            {
              v40 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
            }
          }
          else
          {
            v36 = *(v13 - 2);
          }
          goto LABEL_53;
        }
        v38 = *(v13 - 2);
LABEL_53:
        v13 += 6;
        if ( !--v14 )
          goto LABEL_54;
      }
    }
  }
}
