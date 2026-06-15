/*
 * XREFs of ?AddAudioHistoryPacket@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x140086C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x14004CA70 (McTemplateU0pqqx_EventWriteTransfer.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053264 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::AddAudioHistoryPacket(
        __int64 a1,
        int a2,
        __int128 *a3,
        int a4,
        void *Src)
{
  __int64 v5; // rsi
  __int64 v10; // rbp
  unsigned int v11; // r14d
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v15; // rdx
  unsigned int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // rcx
  void *v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a1 - 408;
  if ( *(_DWORD *)(*(_QWORD *)(a1 - 416) + 180LL) == -1 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 - 416) + 180LL), *(_DWORD *)(*(_QWORD *)v5 + 168LL));
  v10 = *(unsigned int *)(*(_QWORD *)(a1 - 416) + 188LL);
  v11 = *(_DWORD *)(*(_QWORD *)(a1 - 416) + 184LL);
  v12 = *(_DWORD *)(*(_QWORD *)v5 + 148LL);
  if ( !IsValidQueueIndex(*(_DWORD *)(*(_QWORD *)(a1 - 416) + 188LL), v12) )
  {
    v13 = 791LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpserveroutputendpoint.cpp",
      (const char *)0x887C0045LL);
    return 2289827909LL;
  }
  if ( !IsValidQueueIndex(v11, v12) )
  {
    v13 = 792LL;
    goto LABEL_5;
  }
  if ( (_DWORD)v10 )
    v16 = *(_DWORD *)(((unsigned __int64)(unsigned int)(v10 - 1) << 6) + *(_QWORD *)(a1 - 360) + 4)
        + *(_DWORD *)(a1 - 400)
        * *(_DWORD *)(((unsigned __int64)(unsigned int)(v10 - 1) << 6) + *(_QWORD *)(a1 - 360) + 56);
  else
    v16 = *(_DWORD *)(*(_QWORD *)v5 + 172LL);
  v17 = *(_DWORD *)(a1 - 400) * a2;
  v18 = v17 + v16;
  if ( (unsigned int)v18 <= *(_DWORD *)(*(_QWORD *)v5 + 176LL) && a4 )
  {
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0pqqx_EventWriteTransfer(v18, v15, a1 - 504, a2, a4, *((_QWORD *)a3 + 3));
    v19 = (void *)(*(_QWORD *)(a1 - 424) + v16);
    if ( a4 == 2 )
      memset_0(v19, 0, v17);
    else
      memcpy_0(v19, Src, v17);
    v20 = *a3;
    v21 = v10 << 6;
    v22 = a3[1];
    *(_DWORD *)(v21 + *(_QWORD *)(a1 - 360)) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 - 360) + v21 + 4) = v16;
    *(_DWORD *)(*(_QWORD *)(a1 - 360) + v21 + 56) = a2;
    v23 = *(_QWORD *)(a1 - 360);
    *(_OWORD *)(v23 + v21 + 16) = v20;
    *(_QWORD *)&v20 = *((_QWORD *)a3 + 4);
    *(_OWORD *)(v23 + v21 + 32) = v22;
    *(_QWORD *)(v23 + v21 + 48) = v20;
    *(_DWORD *)(*(_QWORD *)(a1 - 360) + v21 + 8) = a4;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 - 416) + 188LL), v10 + 1);
  }
  return 0LL;
}
