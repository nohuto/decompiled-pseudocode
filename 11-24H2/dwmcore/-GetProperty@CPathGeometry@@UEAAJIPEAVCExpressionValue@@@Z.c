/*
 * XREFs of ?GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000E100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathGeometry::GetProperty(CPathGeometry *this, int a2, struct CExpressionValue *a3)
{
  __int64 v5; // rbx
  CPathData *v6; // rcx
  void (*v7)(void); // rax
  __int64 result; // rax
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // rcx
  const struct AnimationHelper::AnimatedProperty *const near *v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 5 )
  {
    v5 = *((_QWORD *)this + 17);
    *((_DWORD *)a3 + 18) = v5 != 0 ? 0xB : 0;
    if ( *((_QWORD *)a3 + 8) != v5 )
    {
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = (CPathData *)*((_QWORD *)a3 + 8);
      *((_QWORD *)a3 + 8) = v5;
      if ( v6 )
      {
        v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
        if ( (char *)v7 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v6);
        else
          v7();
      }
    }
    return 0LL;
  }
  else
  {
    for ( i = &CGeometry::k_rgAnimDef; ; ++i )
    {
      if ( i == &CColorBrush::k_rgAnimDef )
        goto LABEL_11;
      v10 = *i;
      if ( a2 == **(_DWORD **)i )
        break;
    }
    if ( !v10 )
    {
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Bu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Fu, 0LL);
      return 2147942487LL;
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
          return 0LL;
        case 18:
          result = 0LL;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v12);
          *((_DWORD *)a3 + 18) = 18;
          return result;
        case 42:
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v12);
          return 0LL;
        case 52:
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v12);
          *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v12 + 8);
          return 0LL;
        case 69:
          *((_DWORD *)a3 + 18) = 69;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
          return 0LL;
        case 70:
          *((_DWORD *)a3 + 18) = 70;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
          return result;
        case 71:
          *((_DWORD *)a3 + 18) = 71;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
          return 0LL;
        case 104:
          *((_DWORD *)a3 + 18) = 104;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
          result = 0LL;
          *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v12 + 16);
          return result;
        case 265:
          *((_DWORD *)a3 + 18) = 265;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v12 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v12 + 32);
          result = 0LL;
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v12 + 48);
          return result;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    *((_DWORD *)a3 + 18) = 35;
    result = 0LL;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v12);
  }
  return result;
}
