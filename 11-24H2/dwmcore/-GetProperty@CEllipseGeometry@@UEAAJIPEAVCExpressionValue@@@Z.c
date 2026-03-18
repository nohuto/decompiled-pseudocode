/*
 * XREFs of ?GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x18000E4B0 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEllipseGeometry::GetProperty(CEllipseGeometry *this, int a2, struct CExpressionValue *a3)
{
  void **v3; // rax
  unsigned int v5; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rax
  __int64 result; // rax
  const struct AnimationHelper::AnimatedProperty *v9; // rdx
  const struct AnimationHelper::AnimatedProperty *const near *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (void **)&CEllipseGeometry::k_rgAnimDef;
  v5 = 0;
  while ( v3 != &CResourceWeakRef::`vftable' )
  {
    v9 = (const struct AnimationHelper::AnimatedProperty *)*v3;
    if ( a2 == *(_DWORD *)*v3 )
    {
      if ( v9 )
      {
        CResource::GetPropertyImpl(this, v9, a3);
        return 0LL;
      }
      break;
    }
    ++v3;
  }
  for ( i = &CGeometry::k_rgAnimDef; ; ++i )
  {
    if ( i == &CColorBrush::k_rgAnimDef )
      goto LABEL_5;
    v10 = *i;
    if ( a2 == **(_DWORD **)i )
      break;
  }
  if ( !v10 )
  {
LABEL_5:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Bu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3Du, 0LL);
    return v5;
  }
  v11 = *((_DWORD *)v10 + 1);
  v12 = *((_QWORD *)v10 + 1);
  if ( v11 != 35 )
  {
    switch ( v11 )
    {
      case 17:
        *(_BYTE *)a3 = *((_BYTE *)this + v12);
        *((_DWORD *)a3 + 18) = 17;
        return v5;
      case 18:
        result = 0LL;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v12);
        *((_DWORD *)a3 + 18) = 18;
        return result;
      case 42:
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v12);
        return v5;
      case 52:
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v12);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v12 + 8);
        return 0LL;
      case 69:
        *((_DWORD *)a3 + 18) = 69;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
        return v5;
      case 70:
        *((_DWORD *)a3 + 18) = 70;
        result = 0LL;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
        return result;
      case 71:
        *((_DWORD *)a3 + 18) = 71;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
        return v5;
      case 104:
        *((_DWORD *)a3 + 18) = 104;
        result = 0LL;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
        *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v12 + 16);
        return result;
      case 265:
        *((_DWORD *)a3 + 18) = 265;
        result = 0LL;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
        *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v12 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v12 + 32);
        *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v12 + 48);
        return result;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  *((_DWORD *)a3 + 18) = 35;
  result = 0LL;
  *(_QWORD *)a3 = *(_QWORD *)((char *)this + v12);
  return result;
}
