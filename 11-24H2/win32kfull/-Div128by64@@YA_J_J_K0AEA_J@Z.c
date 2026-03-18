/*
 * XREFs of ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x140162868
 * Callers:
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x140160948 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x140160DD8 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140161950 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x140162910 (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 */

unsigned __int64 __fastcall Div128by64(signed __int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = a1 >> 63;
  if ( a1 < 0 )
  {
    a2 = ~a2;
    a1 = (unsigned __int128)-(__int128)__PAIR128__(a1, a2) >> 64;
  }
  v6 = a3 >> 63;
  v7 = abs64(a3);
  if ( a1 >= v7 )
    goto LABEL_4;
  v10 = v4 ^ v6;
  v8 = (v10 ^ uDiv128by64(a1, a2, v7, &v11)) - v10;
  if ( v4 )
    *a4 = -(__int64)v11;
  if ( ((v8 ^ v10) & 0x8000000000000000uLL) != 0LL && v8 )
  {
LABEL_4:
    v8 = 0x8000000000000000uLL;
    *a4 = 0x8000000000000000uLL;
  }
  return v8;
}
