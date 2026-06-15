/*
 * XREFs of ?ReleaseOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140052D70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4FC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085574 (McTemplateU0p_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::ReleaseOutputDataPointer(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r13
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  unsigned int v18; // r8d
  float v19; // xmm0_4
  __int64 v20; // r10
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  void (__fastcall *v25)(__int64, __int64, _QWORD, __int64, __int128 *, int, _DWORD); // rax
  unsigned __int64 v26; // rcx
  int v27; // [rsp+28h] [rbp-48h]
  __int128 v28; // [rsp+40h] [rbp-30h] BYREF
  __int128 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+60h] [rbp-10h]

  v2 = a1 - 480;
  v30 = 0LL;
  v3 = a2;
  v28 = 0LL;
  v29 = 0LL;
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(a1, a2, a1 - 480, 11, *(_DWORD *)(a2 + 8), 0, 0);
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 && (*(_DWORD *)(*(_QWORD *)(a1 - 392) + 164LL) & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 - 392);
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 0LL, 0LL);
    if ( v7 < 0 )
    {
      if ( (byte_1400C4541 & 4) != 0 )
        McTemplateU0p_EventWriteTransfer(v6, a2, v2);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v2 + 88) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper(
        "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::IsValidOffset");
      goto LABEL_24;
    }
    v8 = *(_DWORD *)(v3 + 12);
    if ( !v8 )
      goto LABEL_24;
    v9 = *(_QWORD *)(a1 - 384);
    v10 = *(_OWORD *)(a1 + 112);
    v11 = *(_DWORD *)(a1 - 376) * v5;
    a2 = v7 % *(unsigned int *)(a1 - 312);
    v12 = *(_DWORD *)(a1 + 16);
    v13 = *(_DWORD *)(v9 + 160) + a2;
    v28 = *(_OWORD *)(a1 + 96);
    v30 = *(_QWORD *)(a1 + 128);
    v29 = v10;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_24;
      v14 = *(_DWORD *)(a1 + 88);
      v15 = *(_DWORD *)(v9 + 164);
      if ( !v14 )
        v14 = v11;
      if ( v14 + v13 <= v15 )
      {
        if ( v8 != 2 )
          memcpy_0((void *)(*(_QWORD *)(a1 - 400) + v13), *(const void **)(a1 - 352), v14);
        _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), v14);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD))(*(_QWORD *)(a1 - 480)
                                                                                             + 88LL))(
          a1 - 480,
          1LL,
          v13,
          v14 / *(_DWORD *)(a1 - 376),
          &v28,
          *(_DWORD *)(v3 + 12),
          0);
        goto LABEL_24;
      }
      v16 = v15 - v13;
      v17 = v14 - v16;
      if ( v8 != 2 )
      {
        memcpy_0((void *)(*(_QWORD *)(a1 - 400) + v13), *(const void **)(a1 - 352), v16);
        memcpy_0(
          (void *)(*(_QWORD *)(a1 - 400) + *(unsigned int *)(*(_QWORD *)(a1 - 384) + 160LL)),
          (const void *)(v16 + *(_QWORD *)(a1 - 352)),
          v17);
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD))(*(_QWORD *)(a1 - 480) + 88LL))(
        a1 - 480,
        1LL,
        v13,
        v16 / *(_DWORD *)(a1 - 376),
        &v28,
        *(_DWORD *)(v3 + 12),
        0);
      v18 = *(_DWORD *)(a1 - 376);
      v19 = *(float *)(a1 - 308);
      v20 = *(_QWORD *)(a1 - 480);
      HIDWORD(v30) = 2;
      v21 = v16 / v18;
      *(_QWORD *)&v29 = v29 - v21;
      v22 = v17 / v18;
      v23 = *(_QWORD *)(a1 - 384);
      v24 = v22;
      v27 = *(_DWORD *)(v3 + 12);
      v25 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, int, _DWORD))(v20 + 88);
      *((_QWORD *)&v29 + 1) += (unsigned int)(int)((double)(int)v21 * 10000000.0 / v19 + 0.5);
      v25(a1 - 480, 1LL, *(unsigned int *)(v23 + 160), v24, &v28, v27, 0);
      v26 = v14;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 480) + 88LL))(a1 - 480, 1LL, v13);
      if ( !*(_DWORD *)(v3 + 12) )
        goto LABEL_24;
      v26 = v11;
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), v26);
  }
LABEL_24:
  *(_DWORD *)(a1 + 16) = 3;
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      *(unsigned int *)(v3 + 8),
      a2,
      a1 - 480,
      12,
      *(_DWORD *)(v3 + 8),
      0,
      *(_DWORD *)(v3 + 12));
}
