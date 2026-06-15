/*
 * XREFs of ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x14002DA48
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14002D770 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        void (__fastcall *a6)(__int64),
        __int64 (__fastcall *a7)(__int64))
{
  __int64 v7; // r14
  float v10; // xmm2_4
  __int64 result; // rax
  __int64 v12; // rsi
  float v13; // xmm1_4
  __int64 v14; // rbp

  v7 = a4;
  v10 = (float)*(int *)(a1 + 144);
  result = a3;
  *(float *)(a1 + 136) = v10;
  *(float *)(a1 + 140) = (float)(v10 / (float)(int)a3) * -1.0;
  *(_DWORD *)(a1 + 148) = 1065353216;
  *(_DWORD *)(a1 + 152) = -1082130432;
  if ( a3 )
  {
    v12 = a3;
    do
    {
      v13 = *(float *)(a1 + 136);
      result = (unsigned int)(int)v13;
      *(float *)(a1 + 136) = v13 + *(float *)(a1 + 140);
      if ( (_DWORD)v7 )
      {
        v14 = v7;
        do
        {
          a6(a2);
          result = a7(a2);
          a2 += (unsigned __int64)a5 >> 3;
          --v14;
        }
        while ( v14 );
      }
      --v12;
    }
    while ( v12 );
  }
  return result;
}
