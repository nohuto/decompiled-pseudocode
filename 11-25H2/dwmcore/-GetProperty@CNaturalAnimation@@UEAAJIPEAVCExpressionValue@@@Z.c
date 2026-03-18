/*
 * XREFs of ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802162D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180216360 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1802375B4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::GetProperty(CNaturalAnimation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // xmm0_8
  int v10; // eax
  float v12; // xmm0_4
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // xmm0_4
  float *v18; // rbx
  float v19; // xmm0_4
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v6 = a2 - 15;
  if ( v6 )
  {
    v7 = v6 - 23;
    if ( v7 )
    {
      v8 = v7 - 4;
      if ( v8 )
      {
        v13 = v8 - 4;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 != 1 )
                {
                  v3 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x284u, 0LL);
                  return v3;
                }
                CNaturalAnimation::EnsureAccelerator(this, 1LL);
                v17 = *(_DWORD *)(*((_QWORD *)this + 54) + 28LL);
              }
              else
              {
                CNaturalAnimation::EnsureAccelerator(this, 1LL);
                v17 = *(_DWORD *)(*((_QWORD *)this + 54) + 20LL);
              }
              *(_DWORD *)a3 = v17;
              *((_DWORD *)a3 + 18) = 18;
              return v3;
            }
            CNaturalAnimation::EnsureAccelerator(this, 2LL);
            v18 = (float *)*((_QWORD *)this + 54);
            if ( v18 )
              (**(void (__fastcall ***)(float *))v18)(v18);
            v19 = 1.0 / v18[8];
          }
          else
          {
            CNaturalAnimation::EnsureAccelerator(this, 2LL);
            v18 = (float *)*((_QWORD *)this + 54);
            if ( v18 )
              (**(void (__fastcall ***)(float *))v18)(v18);
            v19 = v18[7];
          }
          *(float *)a3 = v19;
          *((_DWORD *)a3 + 18) = 18;
          (*(void (__fastcall **)(float *))(*(_QWORD *)v18 + 8LL))(v18);
          return v3;
        }
        v9 = *(_QWORD *)((char *)this + 356);
        v10 = *((_DWORD *)this + 91);
      }
      else
      {
        v9 = *((_QWORD *)this + 40);
        v10 = *((_DWORD *)this + 82);
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 43);
      v10 = *((_DWORD *)this + 88);
    }
    v20 = v9;
    v21 = v10;
    CNaturalAnimation::ExpressionValueFromInternalValue(this, &v20);
  }
  else
  {
    v12 = (float)*((int *)this + 100);
    *((_DWORD *)a3 + 18) = 42;
    *(float *)a3 = v12;
  }
  return v3;
}
