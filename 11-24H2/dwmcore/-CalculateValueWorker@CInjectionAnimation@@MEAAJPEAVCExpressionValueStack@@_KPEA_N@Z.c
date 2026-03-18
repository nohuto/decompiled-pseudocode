/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18029C250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18028A68C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18028CAFC (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  struct CResource *v6; // rax
  CManipulation *v7; // r14
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edi

  v6 = CBaseExpression::ResolveTargetNoRef(this);
  v7 = v6;
  if ( v6 && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 64LL))(v6, 105LL) )
  {
    *a4 = 1;
    v8 = (_DWORD *)((char *)this + 336);
    while ( 1 )
    {
      v9 = *((int *)this + 82);
      v10 = *((_DWORD *)this + 83);
      if ( (int)v9 >= v10 )
        break;
      v11 = *((_QWORD *)this + 40);
      v8 = (_DWORD *)((char *)this + 336);
      if ( *(_DWORD *)(132 * v9 + v11) != *((_DWORD *)this + 84) )
        break;
      v12 = CManipulation::InjectManipulation(v7, (const struct InjectManipulationArgs *)(132 * v9 + v11 + 4));
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xA7u, 0LL);
        return v13;
      }
      ++*((_DWORD *)this + 82);
    }
    ++*v8;
    if ( (_DWORD)v9 == v10 )
    {
      *((_BYTE *)this + 224) &= ~1u;
      CBaseExpression::NotifyAnimationCompleted(this);
      *a4 = 0;
    }
  }
  return 1;
}
