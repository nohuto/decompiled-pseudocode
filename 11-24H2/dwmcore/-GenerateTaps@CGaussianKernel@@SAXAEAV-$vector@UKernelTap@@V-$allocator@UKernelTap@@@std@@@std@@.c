/*
 * XREFs of ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1801F5744
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180047968 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1801F5550 (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 *     ?reserve@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z @ 0x1801F595C (-reserve@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     expf_0 @ 0x1802DF5F0 (expf_0.c)
 */

char *__fastcall CGaussianKernel::GenerateTaps(const void **a1, char a2, float a3, float a4)
{
  float v6; // xmm1_4
  __int64 v7; // r14
  __int64 v8; // rbp
  char *result; // rax
  __int64 v10; // rbx
  float v11; // xmm7_4
  int v12; // esi
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  char *v17; // rdx
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  int v22[16]; // [rsp+30h] [rbp-88h] BYREF
  float v23; // [rsp+D0h] [rbp+18h] BYREF
  float v24; // [rsp+D8h] [rbp+20h] BYREF

  v6 = fmaxf(1.0, ceilf_0(a3 * a4));
  v7 = (unsigned int)(int)ceilf_0((float)(int)v6 * 0.5);
  v8 = v7;
  result = (char *)std::vector<KernelTap>::reserve(a1, (unsigned int)v7);
  v10 = 0LL;
  v11 = 0.0;
  v12 = 0;
  if ( (_DWORD)v7 )
  {
    v13 = (float)(a3 * a3) + (float)(a3 * a3);
    while ( 1 )
    {
      v14 = (float)v12 + (float)v12;
      v15 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 * v14) ^ _xmm) / v13);
      v16 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v14 + 1.0) * (float)(v14 + 1.0)) ^ _xmm) / v13);
      if ( !v12 )
        v15 = v15 * 0.5;
      v22[0] = 0;
      v17 = (char *)a1[1];
      v18 = v16 + v15;
      v23 = v16 + v15;
      v19 = (float)(v16 / (float)(v16 + v15)) + v14;
      v24 = v19;
      if ( a2 )
      {
        if ( v17 == a1[2] )
        {
          std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(a1, v17, v22, (int *)&v24, (int *)&v23);
          goto LABEL_9;
        }
        *((float *)v17 + 1) = v19;
        *(_DWORD *)v17 = 0;
      }
      else
      {
        if ( v17 == a1[2] )
        {
          std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(a1, v17, &v24, v22, (int *)&v23);
          goto LABEL_9;
        }
        *(float *)v17 = v19;
        *((_DWORD *)v17 + 1) = 0;
      }
      *((float *)v17 + 2) = v18;
      a1[1] = v17 + 12;
LABEL_9:
      v11 = v11 + v23;
      if ( ++v12 >= (unsigned int)v7 )
      {
        result = (char *)*a1;
        v20 = v11 + v11;
        do
        {
          v21 = *(float *)&result[v10 + 8];
          v10 += 12LL;
          *(float *)&result[v10 - 4] = v21 / v20;
          --v8;
        }
        while ( v8 );
        return result;
      }
    }
  }
  return result;
}
