/*
 * XREFs of ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140086450
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14002DA70 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003018C (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140044780 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14004B470 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 *     ?FillRampBuffer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@AEAAXXZ @ 0x140086338 (-FillRampBuffer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::GetInputDataPointer(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  __int64 v9; // rcx
  unsigned __int32 v10; // eax
  char v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebp
  int v15; // r12d
  int v16; // r9d
  signed __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  char IsValidOffset; // al
  char v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int *v24; // r12
  const void *v25; // rdx
  unsigned int v26; // eax
  void *v27; // rcx
  __int64 v28; // rbx
  size_t v29; // r8
  int v30; // edx
  unsigned int v31; // r12d
  int v32; // ebx
  unsigned int v33; // r12d
  unsigned int v34; // r9d
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  signed __int32 v37; // r8d
  __int64 v38; // [rsp+40h] [rbp-68h]
  unsigned int v39; // [rsp+48h] [rbp-60h]
  int v40; // [rsp+50h] [rbp-58h]
  int v41; // [rsp+B0h] [rbp+8h]
  int v42; // [rsp+B8h] [rbp+10h]
  unsigned int v44; // [rsp+C8h] [rbp+20h]

  v3 = a1 - 480;
  v6 = 0;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      a1,
      *(unsigned int *)(a2 + 8),
      a1 - 480,
      5,
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 12),
      0);
  v7 = *(_DWORD *)(a2 + 8);
  v8 = 0;
  v9 = *(_QWORD *)(a1 - 392);
  *(_DWORD *)(a1 + 20) = v7;
  *(_DWORD *)(a1 + 16) = 2;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 164), 0, 0);
  v11 = v10;
  v12 = v10;
  v13 = *(_DWORD *)(a1 + 88);
  v14 = 1;
  v15 = v11 & 1;
  v42 = v13;
  v41 = v15;
  if ( !v15 && (*(_BYTE *)(a1 - 288) & 1) == 0 || !v7 )
  {
    if ( (byte_1400C45C1 & 4) != 0 )
    {
      McTemplateU0pqxxx_EventWriteTransfer(v12, a2, v3, 23, v12, v7, 101);
      v13 = v42;
    }
    if ( v13 != v15 && !v15 )
    {
      CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::FillRampBuffer(v3);
      if ( v7 )
      {
        v16 = *(_DWORD *)(a1 - 372);
        if ( v16 )
          ApplyVolumeRamp(
            (struct CFadeWindowLUT *)(a1 + 92),
            *(unsigned __int8 **)(a1 - 352),
            v7,
            v16,
            *(_DWORD *)(a1 - 364),
            *(_DWORD *)(a1 - 360),
            *(_DWORD *)(a1 - 356),
            0);
      }
      goto LABEL_47;
    }
LABEL_46:
    v14 = 2;
LABEL_47:
    *(_DWORD *)(a2 + 12) = v14;
    *(_QWORD *)a2 = *(_QWORD *)(a1 - 352);
    v36 = *(_DWORD *)(*(_QWORD *)(a1 - 392) + 164LL);
    v35 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 392) + 164LL), v36 & 0xFFFFFFFD, v36);
    if ( v36 != v35 )
    {
      do
      {
        v37 = v35;
        v35 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(*(_QWORD *)(a1 - 392) + 164LL),
                v35 & 0xFFFFFFFD,
                v35);
      }
      while ( v35 != v37 );
    }
    v32 = v41;
    goto LABEL_50;
  }
  v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 24LL), 0LL, 0LL);
  if ( !CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(v3, v38) )
  {
    v21 = v38;
    goto LABEL_44;
  }
  IsValidOffset = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
                    v3,
                    v17);
  v21 = v38;
  if ( !IsValidOffset || v38 < v17 )
  {
LABEL_44:
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v19, v18, v3, 23, v21, v17, 102);
    goto LABEL_46;
  }
  v6 = v38 - v17;
  v22 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 160LL);
  v40 = v22 + v38 % *(unsigned int *)(a1 - 312);
  v39 = v22 + v17 % *(unsigned int *)(a1 - 312);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 - 392) + 176LL), 0, 0) )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v3 = a1 - 480;
    if ( v7 >= v6 / *(_DWORD *)(a1 - 376) )
      v7 = v6 / *(_DWORD *)(a1 - 376);
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a1 + 20) = v7;
  }
  (*(void (__fastcall **)(__int64, __int64, signed __int64, __int64))(*(_QWORD *)(a1 - 480) + 80LL))(v3, a3, v17, v38);
  v24 = (unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = 0;
  v8 = *(_DWORD *)(a1 - 376) * v7;
  if ( v8 <= v6 )
  {
    v31 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 164LL) - v39;
    if ( v8 <= v31 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(a1 - 400) + v39;
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_38;
    }
    memcpy_0(*(void **)(a1 - 352), (const void *)(v39 + *(_QWORD *)(a1 - 400)), v31);
    memcpy_0(
      (void *)(v31 + *(_QWORD *)(a1 - 352)),
      (const void *)(*(_QWORD *)(a1 - 400) + *(unsigned int *)(*(_QWORD *)(a1 - 384) + 160LL)),
      v8 - v31);
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 84) )
    {
      if ( (byte_1400C45C1 & 1) != 0 )
        McTemplateU0pqqqq_EventWriteTransfer(
          v23,
          &EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
          v3,
          v40,
          v39,
          *(_DWORD *)(a1 - 312),
          v8 - v6);
      if ( v38 > 0 )
      {
        CCrossProcessEndpointTraceLogger::Glitch(
          a1 - 264,
          5u,
          (const unsigned __int16 *)"CpGlitchEvent::SERVER_INPUT_STARVATION");
        v24 = (unsigned int *)(a1 + 80);
      }
    }
    if ( !v6 )
    {
      *v24 = v8;
      goto LABEL_46;
    }
    v25 = (const void *)(*(_QWORD *)(a1 - 400) + v39);
    v26 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 164LL) - v39;
    v27 = *(void **)(a1 - 352);
    v44 = v26;
    if ( v6 <= v26 )
    {
      v29 = v6;
    }
    else
    {
      v28 = v26;
      memcpy_0(v27, v25, v26);
      v29 = v6 - v44;
      v25 = (const void *)(*(_QWORD *)(a1 - 400) + *(unsigned int *)(*(_QWORD *)(a1 - 384) + 160LL));
      v27 = (void *)(v28 + *(_QWORD *)(a1 - 352));
    }
    memcpy_0(v27, v25, v29);
    v30 = 128;
    if ( *(_DWORD *)(a1 - 360) != 8 )
      v30 = 0;
    memset_0((void *)(*(_QWORD *)(a1 - 352) + v6), v30, v8 - v6);
    *v24 = v8 - v6;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 352);
  *(_DWORD *)(a1 + 16) = 1;
LABEL_38:
  v32 = v41;
  *(_DWORD *)(a2 + 12) = 1;
  if ( (*(_BYTE *)(a1 - 288) & 1) == 0 && v42 != v41 )
  {
    if ( v41 )
    {
      v33 = *(_DWORD *)(a1 - 360);
      if ( !(unsigned int)CheckSampleForSilence(*(float **)a2, *(_DWORD *)(a1 - 372), v33, *(_DWORD *)(a1 - 356)) )
        ApplyVolumeRamp(
          (struct CFadeWindowLUT *)(a1 + 92),
          *(unsigned __int8 **)a2,
          v7,
          *(_DWORD *)(a1 - 372),
          *(_DWORD *)(a1 - 364),
          v33,
          v34,
          1);
    }
  }
LABEL_50:
  *(_DWORD *)(a1 + 88) = v32;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v6, v8, a1 - 480, 6, v8, v6, *(_DWORD *)(a1 + 16));
}
