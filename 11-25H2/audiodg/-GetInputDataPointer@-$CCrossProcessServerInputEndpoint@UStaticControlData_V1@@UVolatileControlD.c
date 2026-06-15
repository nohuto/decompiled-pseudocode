/*
 * XREFs of ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050E00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14002DA70 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x14002DC1C (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003018C (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140044780 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14004B470 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     ?FillRampBuffer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@AEAAXXZ @ 0x140051438 (-FillRampBuffer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085ED8 (McTemplateU0p_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetInputDataPointer(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r10
  unsigned int v7; // r12d
  unsigned int v8; // esi
  unsigned int v9; // r13d
  __int64 v10; // rcx
  unsigned __int32 v11; // eax
  char v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ebp
  int v16; // r15d
  unsigned int v17; // r9d
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  void (__fastcall *v22)(unsigned __int8 *, float); // rcx
  void (__fastcall *v23)(__int64); // rax
  signed __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // r15
  _QWORD *v29; // rbx
  __int64 v30; // rax
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  signed __int32 v33; // r8d
  int v34; // ebx
  int v35; // ecx
  __int64 v36; // rcx
  unsigned int *v37; // r15
  void *v38; // rcx
  const void *v39; // rdx
  unsigned int v40; // r13d
  size_t v41; // r8
  int v42; // edx
  unsigned int v43; // r15d
  unsigned int v44; // r15d
  unsigned int v45; // r9d
  __int64 (__fastcall *v46)(__int64); // [rsp+30h] [rbp-78h]
  unsigned int v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h]
  unsigned int *v49; // [rsp+50h] [rbp-58h]
  int v50; // [rsp+58h] [rbp-50h]
  int v51; // [rsp+B0h] [rbp+8h]
  int v52; // [rsp+B8h] [rbp+10h]
  unsigned int v54; // [rsp+C8h] [rbp+20h]

  v3 = a1 - 480;
  v4 = a3;
  v7 = 0;
  if ( (byte_1400C45C1 & 4) != 0 )
  {
    McTemplateU0pqxxx_EventWriteTransfer(
      a1,
      *(unsigned int *)(a2 + 8),
      a1 - 480,
      5,
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 12),
      0);
    v4 = a3;
  }
  v8 = *(_DWORD *)(a2 + 8);
  v9 = 0;
  v10 = *(_QWORD *)(a1 - 392);
  *(_DWORD *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 16) = 2;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 164), 0, 0);
  v12 = v11;
  v13 = v11;
  v14 = *(_DWORD *)(a1 + 88);
  v15 = 1;
  v16 = v12 & 1;
  v52 = v14;
  v51 = v16;
  if ( !v16 && (*(_BYTE *)(a1 - 288) & 1) == 0 || !v8 )
  {
    if ( (byte_1400C45C1 & 4) != 0 )
    {
      McTemplateU0pqxxx_EventWriteTransfer(v13, a2, v3, 23, v13, v8, 101);
      v14 = v52;
    }
    if ( v14 != v16 && !v16 )
    {
      CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::FillRampBuffer(v3);
      if ( !v8 )
        goto LABEL_37;
      v17 = *(_DWORD *)(a1 - 372);
      if ( !v17 )
        goto LABEL_37;
      v18 = *(_DWORD *)(a1 - 360);
      v19 = *(_DWORD *)(a1 - 364);
      v20 = *(_QWORD *)(a1 - 352);
      switch ( v18 )
      {
        case 16:
          v46 = (__int64 (__fastcall *)(__int64))F32TOI16;
          v23 = (void (__fastcall *)(__int64))I16TOF32;
          break;
        case 8:
          v46 = (__int64 (__fastcall *)(__int64))F32TOUI8;
          v23 = (void (__fastcall *)(__int64))UI8TOF32;
          break;
        case 20:
          v46 = (__int64 (__fastcall *)(__int64))F32TOI20;
          v23 = (void (__fastcall *)(__int64))I20TOF32;
          break;
        case 24:
          v22 = F32TOI24W;
          if ( v19 != 32 )
            v22 = F32TOI24;
          v23 = (void (__fastcall *)(__int64))I24WTOF32;
          v46 = (__int64 (__fastcall *)(__int64))v22;
          if ( v19 != 32 )
            v23 = (void (__fastcall *)(__int64))I24TOF32;
          break;
        default:
          v21 = a1 + 92;
          if ( *(_DWORD *)(a1 - 356) == 3 )
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              v21,
              v20,
              v8,
              v17,
              v19,
              (void (__fastcall *)(__int64))F32InTOF32,
              (__int64 (__fastcall *)(__int64))F32OutTOF32);
          else
            ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
              v21,
              v20,
              v8,
              v17,
              v19,
              (void (__fastcall *)(__int64))I32TOF32,
              (__int64 (__fastcall *)(__int64))F32TOI32);
          goto LABEL_37;
      }
      ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        a1 + 92,
        v20,
        v8,
        v17,
        v19,
        v23,
        v46);
LABEL_37:
      *(_DWORD *)(a2 + 12) = v15;
      *(_QWORD *)a2 = *(_QWORD *)(a1 - 352);
      v32 = *(_DWORD *)(*(_QWORD *)(a1 - 392) + 164LL);
      v31 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(a1 - 392) + 164LL),
              v32 & 0xFFFFFFFD,
              v32);
      if ( v32 != v31 )
      {
        do
        {
          v33 = v31;
          v31 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)(*(_QWORD *)(a1 - 392) + 164LL),
                  v31 & 0xFFFFFFFD,
                  v31);
        }
        while ( v31 != v33 );
      }
      v34 = v51;
      goto LABEL_40;
    }
LABEL_36:
    v15 = 2;
    goto LABEL_37;
  }
  v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
  v25 = *(_QWORD *)(a1 - 392);
  v26 = v24;
  v48 = v24;
  v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), 0LL, 0LL);
  v28 = v27;
  v29 = (_QWORD *)(a1 - 480);
  if ( v26 < 0 )
  {
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v25, a2, a1 - 480);
    v30 = *(_QWORD *)(a1 - 392);
LABEL_33:
    _InterlockedAnd((volatile signed __int32 *)(v30 + 164), 0xFFFFFFFE);
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::IsValidOffset",
      0x6F0u,
      -2147467259);
    LOBYTE(v26) = v48;
    goto LABEL_34;
  }
  if ( v27 < 0 )
  {
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v25, a2, a1 - 480);
    v30 = v29[11];
    goto LABEL_33;
  }
  if ( v26 < v27 )
  {
LABEL_34:
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v25, a2, a1 - 480, 23, v26, v28, 102);
    goto LABEL_36;
  }
  v7 = v26 - v27;
  v35 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 160LL);
  v50 = v35 + v26 % *(unsigned int *)(a1 - 312);
  v47 = v35 + v27 % *(unsigned int *)(a1 - 312);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 392) + 176LL), 0, 0) )
  {
    v8 = *(_DWORD *)(a2 + 8);
    if ( v8 >= v7 / *(_DWORD *)(a1 - 376) )
      v8 = v7 / *(_DWORD *)(a1 - 376);
    *(_DWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a1 + 20) = v8;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*v29 + 80LL))(a1 - 480, v4, v27);
  v37 = (unsigned int *)(a1 + 80);
  v9 = *(_DWORD *)(a1 - 376) * v8;
  *(_DWORD *)(a1 + 80) = 0;
  v54 = v9;
  if ( v9 <= v7 )
  {
    v43 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 164LL) - v47;
    if ( v9 <= v43 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(a1 - 400) + v47;
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_70;
    }
    memcpy_0(*(void **)(a1 - 352), (const void *)(v47 + *(_QWORD *)(a1 - 400)), v43);
    memcpy_0(
      (void *)(v43 + *(_QWORD *)(a1 - 352)),
      (const void *)(*(_QWORD *)(a1 - 400) + *(unsigned int *)(*(_QWORD *)(a1 - 384) + 160LL)),
      v9 - v43);
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 84) )
    {
      v49 = (unsigned int *)(a1 + 80);
      if ( (byte_1400C45C1 & 1) != 0 )
      {
        McTemplateU0pqqqq_EventWriteTransfer(
          v36,
          &EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
          a1 - 480,
          v50,
          v47,
          *(_DWORD *)(a1 - 312),
          v9 - v7);
        v49 = (unsigned int *)(a1 + 80);
      }
      if ( v48 > 0 )
      {
        CCrossProcessEndpointTraceLogger::Glitch(
          a1 - 264,
          5u,
          (const unsigned __int16 *)"CpGlitchEvent::SERVER_INPUT_STARVATION");
        v37 = v49;
      }
    }
    if ( !v7 )
    {
      *v37 = v9;
      goto LABEL_36;
    }
    v38 = *(void **)(a1 - 352);
    v39 = (const void *)(*(_QWORD *)(a1 - 400) + v47);
    v40 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 164LL) - v47;
    if ( v7 <= v40 )
    {
      v41 = v7;
    }
    else
    {
      memcpy_0(v38, v39, v40);
      v41 = v7 - v40;
      v39 = (const void *)(*(_QWORD *)(a1 - 400) + *(unsigned int *)(*(_QWORD *)(a1 - 384) + 160LL));
      v38 = (void *)(v40 + *(_QWORD *)(a1 - 352));
    }
    memcpy_0(v38, v39, v41);
    v9 = v54;
    v42 = 128;
    if ( *(_DWORD *)(a1 - 360) != 8 )
      v42 = 0;
    memset_0((void *)(*(_QWORD *)(a1 - 352) + v7), v42, v54 - v7);
    *v37 = v54 - v7;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 352);
  *(_DWORD *)(a1 + 16) = 1;
LABEL_70:
  v34 = v51;
  *(_DWORD *)(a2 + 12) = 1;
  if ( (*(_BYTE *)(a1 - 288) & 1) == 0 && v52 != v51 )
  {
    if ( v51 )
    {
      v44 = *(_DWORD *)(a1 - 360);
      if ( !(unsigned int)CheckSampleForSilence(*(float **)a2, *(_DWORD *)(a1 - 372), v44, *(_DWORD *)(a1 - 356)) )
        ApplyVolumeRamp(
          (struct CFadeWindowLUT *)(a1 + 92),
          *(unsigned __int8 **)a2,
          v8,
          *(_DWORD *)(a1 - 372),
          *(_DWORD *)(a1 - 364),
          v44,
          v45,
          1);
    }
  }
LABEL_40:
  *(_DWORD *)(a1 + 88) = v34;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, v9, a1 - 480, 6, v9, v7, *(_DWORD *)(a1 + 16));
}
