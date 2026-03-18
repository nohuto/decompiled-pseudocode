/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180081480
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(CComponentTransform2D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rcx
  __int64 result; // rax
  const struct AnimationHelper::AnimatedProperty *const near *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  float v10; // xmm0_4
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( a2 == 5 )
  {
    v10 = *((float *)this + 48) * 57.295776;
LABEL_12:
    *(float *)a3 = v10;
    *((_DWORD *)a3 + 18) = 18;
    return v3;
  }
  else
  {
    for ( i = &CComponentTransform2D::k_rgAnimDef; ; ++i )
    {
      if ( i == (const struct AnimationHelper::AnimatedProperty *const near *const *)&unk_1802F8FC8 )
        goto LABEL_4;
      v7 = *i;
      if ( a2 == **(_DWORD **)i )
        break;
    }
    if ( !v7 )
    {
LABEL_4:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x6Fu, 0LL);
      return v3;
    }
    v8 = *((_QWORD *)v7 + 1);
    v9 = *((_DWORD *)v7 + 1);
    if ( v9 != 35 )
    {
      switch ( v9 )
      {
        case 17:
          *(_BYTE *)a3 = *((_BYTE *)this + v8);
          *((_DWORD *)a3 + 18) = 17;
          return v3;
        case 18:
          v10 = *(float *)((char *)this + v8);
          goto LABEL_12;
        case 42:
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
          return v3;
        case 52:
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
          *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
          return 0LL;
        case 69:
          *((_DWORD *)a3 + 18) = 69;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          return v3;
        case 70:
          *((_DWORD *)a3 + 18) = 70;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          return result;
        case 71:
          *((_DWORD *)a3 + 18) = 71;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          return v3;
        case 104:
          *((_DWORD *)a3 + 18) = 104;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
          return result;
        case 265:
          *((_DWORD *)a3 + 18) = 265;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v8 + 48);
          return result;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    *((_DWORD *)a3 + 18) = 35;
    result = 0LL;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
  }
  return result;
}
