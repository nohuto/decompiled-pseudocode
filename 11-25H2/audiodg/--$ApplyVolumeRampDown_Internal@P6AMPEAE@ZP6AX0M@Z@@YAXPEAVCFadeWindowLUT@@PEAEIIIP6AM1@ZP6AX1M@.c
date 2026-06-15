/*
 * XREFs of ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x14002DC1C
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14002DA70 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050E00 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        void (__fastcall *a6)(__int64),
        __int64 (__fastcall *a7)(__int64))
{
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v11; // rsi
  float v12; // xmm1_4
  __int64 v13; // rbp

  *(_DWORD *)(a1 + 136) = 0;
  v8 = a4;
  result = a3;
  *(float *)(a1 + 140) = (float)*(int *)(a1 + 144) / (float)(int)a3;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 1065353216;
  if ( a3 )
  {
    v11 = a3;
    do
    {
      v12 = *(float *)(a1 + 136);
      result = (unsigned int)(int)v12;
      *(float *)(a1 + 136) = v12 + *(float *)(a1 + 140);
      if ( (_DWORD)v8 )
      {
        v13 = v8;
        do
        {
          a6(a2);
          result = a7(a2);
          a2 += (unsigned __int64)a5 >> 3;
          --v13;
        }
        while ( v13 );
      }
      --v11;
    }
    while ( v11 );
  }
  return result;
}
