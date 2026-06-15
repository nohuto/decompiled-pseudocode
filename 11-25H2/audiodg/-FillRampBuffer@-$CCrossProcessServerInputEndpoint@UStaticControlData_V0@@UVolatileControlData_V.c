/*
 * XREFs of ?FillRampBuffer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@AEAAXXZ @ 0x140086338
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140086450 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlD.c)
 * Callees:
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 */

char __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::FillRampBuffer(
        __int64 a1)
{
  unsigned int v1; // ebp
  int v2; // edx
  bool v3; // zf
  void *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  char result; // al
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
  result = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(a1, v6);
  if ( result )
  {
    result = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
               a1,
               v7);
    if ( result )
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
        return (unsigned __int8)memcpy_0(
                                  (void *)(v12 + *(_QWORD *)(a1 + 128)),
                                  (const void *)(*(_QWORD *)(a1 + 80) + *(unsigned int *)(*(_QWORD *)(a1 + 96) + 160LL)),
                                  v1 - v12);
      }
    }
  }
  return result;
}
