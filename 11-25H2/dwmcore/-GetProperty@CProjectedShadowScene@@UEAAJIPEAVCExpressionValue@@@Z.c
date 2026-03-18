/*
 * XREFs of ?GetProperty@CProjectedShadowScene@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802ABCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::GetProperty(CProjectedShadowScene *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // xmm0_4

  v3 = 0;
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *((_DWORD *)this + 32);
    goto LABEL_14;
  }
  v5 = v4 - 3;
  if ( !v5 )
  {
    v9 = *((_DWORD *)this + 30);
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((_DWORD *)this + 33);
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *((_DWORD *)this + 31);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *((_DWORD *)this + 34);
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    v9 = *((_DWORD *)this + 35);
LABEL_14:
    *((_DWORD *)a3 + 18) = 18;
    *(_DWORD *)a3 = v9;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x97u, 0LL);
  return v3;
}
