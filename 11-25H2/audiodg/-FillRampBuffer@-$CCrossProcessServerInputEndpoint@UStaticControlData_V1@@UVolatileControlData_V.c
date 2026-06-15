/*
 * XREFs of ?FillRampBuffer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@AEAAXXZ @ 0x140051438
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050E00 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 * Callees:
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_N_J@Z @ 0x140051CC8 (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCont.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 */

void *__fastcall CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::FillRampBuffer(
        __int64 a1)
{
  unsigned int v1; // ebp
  int v2; // edx
  bool v3; // zf
  void *v5; // rcx
  signed __int64 v6; // rdi
  signed __int64 v7; // rbx
  void *result; // rax
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // ebx

  v1 = *(_DWORD *)(a1 + 104) * *(_DWORD *)(a1 + 500);
  v2 = 128;
  v3 = *(_DWORD *)(a1 + 120) == 8;
  v5 = *(void **)(a1 + 128);
  if ( !v3 )
    v2 = 0;
  memset_0(v5, v2, v1);
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 16LL), 0LL, 0LL);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 24LL), 0LL, 0LL);
  result = (void *)CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsValidOffset(
                     a1,
                     v6);
  if ( (_BYTE)result )
  {
    result = (void *)CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsValidOffset(
                       a1,
                       v7);
    if ( (_BYTE)result )
    {
      if ( v6 >= v7 )
      {
        v9 = *(_QWORD *)(a1 + 96);
        v10 = v6 - v7;
        v11 = *(_DWORD *)(v9 + 160) + (unsigned int)(v7 % *(unsigned int *)(a1 + 168));
        if ( v1 >= v10 )
          v1 = v10;
        v12 = v1;
        if ( *(_DWORD *)(v9 + 164) - (int)v11 < v1 )
          v12 = *(_DWORD *)(v9 + 164) - v11;
        memcpy_0(*(void **)(a1 + 128), (const void *)(*(_QWORD *)(a1 + 80) + v11), v12);
        return memcpy_0(
                 (void *)(v12 + *(_QWORD *)(a1 + 128)),
                 (const void *)(*(_QWORD *)(a1 + 80) + *(unsigned int *)(*(_QWORD *)(a1 + 96) + 160LL)),
                 v1 - v12);
      }
    }
  }
  return result;
}
