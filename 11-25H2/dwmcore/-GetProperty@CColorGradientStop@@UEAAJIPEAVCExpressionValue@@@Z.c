/*
 * XREFs of ?GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B5A40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CColorGradientStop::GetProperty(CColorGradientStop *this, int a2, struct CExpressionValue *a3)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *v4; // rcx
  unsigned int v5; // ebx
  __int64 result; // rax
  const struct AnimationHelper::AnimatedProperty *const near *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = &CColorGradientStop::k_rgAnimDef;
  v5 = 0;
  while ( 1 )
  {
    if ( v4 == &CSpriteVectorShape::k_rgAnimDef )
      goto LABEL_3;
    v7 = *v4;
    if ( a2 == **(_DWORD **)v4 )
      break;
    ++v4;
  }
  if ( !v7 )
  {
LABEL_3:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2Fu, 0LL);
    return v5;
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
        return v5;
      case 18:
        result = 0LL;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
        *((_DWORD *)a3 + 18) = 18;
        return result;
      case 42:
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
        return v5;
      case 52:
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
        return 0LL;
      case 69:
        *((_DWORD *)a3 + 18) = 69;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
        return v5;
      case 70:
        *((_DWORD *)a3 + 18) = 70;
        result = 0LL;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
        return result;
      case 71:
        *((_DWORD *)a3 + 18) = 71;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
        return v5;
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
  return result;
}
