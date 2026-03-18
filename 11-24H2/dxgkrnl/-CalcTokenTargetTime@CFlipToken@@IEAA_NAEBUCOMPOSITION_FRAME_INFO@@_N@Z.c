/*
 * XREFs of ?CalcTokenTargetTime@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@_N@Z @ 0x14009BAE0
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005F200 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline @ 0x14009BF78 (Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall CFlipToken::CalcTokenTargetTime(CFlipToken *this, const struct COMPOSITION_FRAME_INFO *a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  char v9; // cl
  bool v10; // zf
  const struct COMPOSITION_FRAME_INFO *v11; // rax
  int v13; // eax
  char v14; // cl
  const struct COMPOSITION_FRAME_INFO *v15; // rax
  unsigned __int64 v16; // rbp
  int v17; // eax
  char v18; // cl
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx

  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    return *((_QWORD *)a2 + 3) >= v3;
  v7 = *((_QWORD *)this + 4);
  if ( !a3 )
  {
    IsEnabledDeviceUsageNoInline = Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline();
    v9 = *((_BYTE *)this + 576);
    v10 = IsEnabledDeviceUsageNoInline == 0;
    v11 = (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 104);
    if ( v10 )
    {
      if ( !v9 )
        v11 = (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 96);
    }
    else if ( !v9 )
    {
      v11 = a2;
    }
    if ( v7 > *(_QWORD *)v11 )
      return 0;
  }
  v13 = Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline();
  v14 = *((_BYTE *)this + 576);
  v10 = v13 == 0;
  v15 = (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 72);
  if ( v10 )
  {
    if ( !v14 )
      v15 = (const struct COMPOSITION_FRAME_INFO *)((char *)a2 + 64);
  }
  else if ( !v14 )
  {
    v15 = a2;
  }
  v16 = *(_QWORD *)v15;
  v17 = Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline();
  v18 = *((_BYTE *)this + 576);
  if ( v17 )
  {
    if ( !v18 )
    {
      v19 = *((_QWORD *)a2 + 2);
      goto LABEL_23;
    }
    goto LABEL_21;
  }
  if ( v18 )
  {
LABEL_21:
    v19 = *((_QWORD *)a2 + 11);
    goto LABEL_23;
  }
  v19 = *((_QWORD *)a2 + 10);
LABEL_23:
  if ( v7 > v16 )
  {
    v22 = (v7 - v16) % v19;
    if ( a3 )
    {
      v3 = v19 - v22 + v7;
      goto LABEL_31;
    }
    v21 = 2 * v19 - v22;
  }
  else
  {
    v20 = (v16 - v7) % v19;
    if ( a3 )
    {
      v3 = v20 + v7;
      goto LABEL_31;
    }
    v21 = v20 + v19;
  }
  v3 = v7 + v21;
LABEL_31:
  *((_QWORD *)this + 14) = v3;
  return *((_QWORD *)a2 + 3) >= v3;
}
