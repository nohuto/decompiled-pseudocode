/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800348D0
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C07C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *a1,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        struct CExpressionValue *a4)
{
  int v4; // r10d
  int v9; // r8d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int i; // edx
  unsigned int v13; // ecx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rax

  v4 = *((_DWORD *)a1 + 18);
  v9 = *(_DWORD *)a3 - 1;
  if ( !v9 )
  {
    v10 = (unsigned int)(v4 - 18);
    if ( (unsigned int)v10 <= 0x33 )
    {
      v11 = 0x8000400020001LL;
      if ( _bittest64(&v11, v10) )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x77Au, 0LL);
    return 2147942487LL;
  }
  if ( v9 == 1 )
  {
    if ( v4 == 104 || v4 == 265 )
    {
LABEL_4:
      CExpressionValue::CopyFrom(a4, a1);
      for ( i = 0; ; ++i )
      {
        v13 = *((unsigned __int8 *)a3 + 4);
        if ( i >= v13 )
          return 0LL;
        if ( *(_DWORD *)a3 == 1 )
        {
          LODWORD(v15) = (*((unsigned __int8 *)a3 + 8) >> (2 * (v13 - i) - 2)) & 3;
        }
        else if ( *(_DWORD *)a3 == 2 )
        {
          v15 = (*((_QWORD *)a3 + 1) >> (4 * ((unsigned __int8)v13 - (unsigned __int8)i) - 4)) & 0xFLL;
        }
        else
        {
          LODWORD(v15) = -1;
        }
        v16 = *((_DWORD *)a1 + 18);
        if ( v16 != 42 )
        {
          switch ( v16 )
          {
            case 17:
            case 18:
            case 35:
            case 52:
            case 69:
            case 70:
            case 71:
            case 104:
            case 265:
              break;
            default:
              goto LABEL_22;
          }
        }
        if ( (unsigned int)v15 >= v16 >> 4 || (unsigned int)v15 >= 0x10 )
          break;
        v17 = i;
        *((_DWORD *)a4 + (unsigned int)v15) = *((_DWORD *)a2 + v17);
      }
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x7B4u, 0LL);
      return 2147500037LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x783u, 0LL);
    return 2147942487LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x78Du, 0LL);
  return 2147500037LL;
}
