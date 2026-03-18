/*
 * XREFs of ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x140160948
 * Callers:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x140160ABC (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 * Callees:
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x140160A3C (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z.c)
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x140162868 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 */

__int64 __fastcall Prediction::tagRlsFilter::vInit(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v6; // rcx
  __int64 *v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r8
  __int64 i; // rdx
  __int64 j; // rcx
  _BYTE *v14; // r9
  char v15; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v16[16]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = (_QWORD *)(a1 + 424);
  if ( v6 != a2 )
    *v6 = *a2;
  v7 = (__int64 *)(a1 + 400);
  if ( (__int64 *)(a1 + 400) != a3 )
    *v7 = *a3;
  if ( (_QWORD *)(a1 + 408) != a4 )
    *(_QWORD *)(a1 + 408) = *a4;
  v8 = (__int64 *)(a1 + 384);
  if ( (__int64 *)(a1 + 384) != v7 )
    *v8 = *v7;
  v9 = Div128by64(1LL, 0LL, *v8, &v17);
  if ( (char *)(a1 + 392) != &v15 )
    *(_QWORD *)(a1 + 392) = v9;
  if ( (_QWORD *)(a1 + 416) != a5 )
    *(_QWORD *)(a1 + 416) = *a5;
  result = Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 144, a1 + 424);
  v11 = 0LL;
  for ( i = 0LL; i < 9; i += 3LL )
  {
    for ( j = 0LL; j < 3; ++j )
    {
      if ( v11 == j )
      {
        v14 = (_BYTE *)(a1 + 8 * (i + j + 36));
        result = (__int64)v16;
        if ( v14 != v16 )
        {
          result = 0x100000000LL;
          *(_QWORD *)v14 = 0x100000000LL;
        }
      }
    }
    ++v11;
  }
  return result;
}
