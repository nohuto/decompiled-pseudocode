/*
 * XREFs of ?ReleaseOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140087680
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::ReleaseOutputDataPointer(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r12
  int v9; // r8d
  __int64 v10; // r13
  __int128 v11; // xmm1
  unsigned int v12; // ebx
  int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // r13d
  unsigned int v17; // r13d
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  float v20; // xmm0_4
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  void (__fastcall *v26)(__int64, __int64, _QWORD, __int64, __int128 *, int, _DWORD); // rax
  unsigned __int64 v27; // rcx
  int v29; // [rsp+28h] [rbp-48h]
  __int128 v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h]
  __int64 v32; // [rsp+60h] [rbp-10h]

  v2 = a1 - 480;
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(a1, a2, a1 - 480, 11, *(_DWORD *)(a2 + 8), 0, 0);
  v5 = *(_QWORD *)(a1 - 392);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(unsigned int *)(v5 + 164);
  if ( v6 )
  {
    if ( (v7 & 1) != 0 )
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
      LOBYTE(v5) = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
                     v2,
                     v8);
      if ( (_BYTE)v5 )
      {
        v9 = *(_DWORD *)(a2 + 12);
        if ( v9 )
        {
          v10 = *(_QWORD *)(a1 - 384);
          v11 = *(_OWORD *)(a1 + 112);
          v12 = *(_DWORD *)(a1 - 376) * v6;
          v5 = v8 / *(unsigned int *)(a1 - 312);
          v7 = v8 % *(unsigned int *)(a1 - 312);
          v13 = *(_DWORD *)(a1 + 16);
          v14 = *(_DWORD *)(v10 + 160) + v7;
          v30 = *(_OWORD *)(a1 + 96);
          v32 = *(_QWORD *)(a1 + 128);
          v31 = v11;
          if ( v13 )
          {
            if ( v13 != 1 )
              goto LABEL_21;
            v15 = *(_DWORD *)(a1 + 88);
            v16 = *(_DWORD *)(v10 + 164);
            if ( !v15 )
              v15 = v12;
            if ( v15 + v14 <= v16 )
            {
              if ( v9 != 2 )
                memcpy_0((void *)(*(_QWORD *)(a1 - 400) + v14), *(const void **)(a1 - 352), v15);
              _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), v15);
              LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD))(*(_QWORD *)(a1 - 480) + 88LL))(
                             a1 - 480,
                             1LL,
                             v14,
                             v15 / *(_DWORD *)(a1 - 376),
                             &v30,
                             *(_DWORD *)(a2 + 12),
                             0);
              goto LABEL_21;
            }
            v17 = v16 - v14;
            v18 = v15 - v17;
            if ( v9 != 2 )
            {
              memcpy_0((void *)(*(_QWORD *)(a1 - 400) + v14), *(const void **)(a1 - 352), v17);
              memcpy_0(
                (void *)(*(_QWORD *)(a1 - 400) + *(unsigned int *)(*(_QWORD *)(a1 - 384) + 160LL)),
                (const void *)(v17 + *(_QWORD *)(a1 - 352)),
                v18);
            }
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD))(*(_QWORD *)(a1 - 480)
                                                                                                 + 88LL))(
              a1 - 480,
              1LL,
              v14,
              v17 / *(_DWORD *)(a1 - 376),
              &v30,
              *(_DWORD *)(a2 + 12),
              0);
            v19 = *(_DWORD *)(a1 - 376);
            v20 = *(float *)(a1 - 308);
            v21 = *(_QWORD *)(a1 - 480);
            HIDWORD(v32) = 2;
            v22 = v17 / v19;
            *(_QWORD *)&v31 = v31 - v22;
            v23 = v18 / v19;
            v24 = *(_QWORD *)(a1 - 384);
            v25 = v23;
            v29 = *(_DWORD *)(a2 + 12);
            v26 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, int, _DWORD))(v21 + 88);
            *((_QWORD *)&v31 + 1) += (unsigned int)(int)((double)(int)v22 * 10000000.0 / v20 + 0.5);
            v26(a1 - 480, 1LL, *(unsigned int *)(v24 + 160), v25, &v30, v29, 0);
            v27 = v15;
          }
          else
          {
            LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, int, int))(*(_QWORD *)(a1 - 480) + 88LL))(
                           a1 - 480,
                           1LL,
                           v14,
                           v6,
                           &v30,
                           v9,
                           1);
            if ( !*(_DWORD *)(a2 + 12) )
              goto LABEL_21;
            v27 = v12;
          }
          v5 = *(_QWORD *)(a1 - 392);
          _InterlockedAdd64((volatile signed __int64 *)(v5 + 16), v27);
        }
      }
    }
  }
LABEL_21:
  *(_DWORD *)(a1 + 16) = 3;
  if ( (byte_1400C45C1 & 4) != 0 )
    LOBYTE(v5) = McTemplateU0pqxxx_EventWriteTransfer(
                   *(unsigned int *)(a2 + 8),
                   v7,
                   a1 - 480,
                   12,
                   *(_DWORD *)(a2 + 8),
                   0,
                   *(_DWORD *)(a2 + 12));
  return v5;
}
