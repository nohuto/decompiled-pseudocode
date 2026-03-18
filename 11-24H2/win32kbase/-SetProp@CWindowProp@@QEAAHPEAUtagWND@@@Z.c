/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x140156DE8
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C900 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140042BA0 (_FindProp.c)
 *     InternalSetProp @ 0x14019CC3C (InternalSetProp.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  __int16 v4; // bx
  __int64 v5; // rbp
  CWindowProp **Prop; // rax
  __int64 v7; // r8
  CWindowProp *v8; // rcx
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a2 + 144));
  v5 = *(_QWORD *)(a2 + 144);
  LockRefactorStagingAssertOwned((struct _KTHREAD **)v5);
  Prop = (CWindowProp **)FindProp(v5, v4, 1);
  if ( Prop )
  {
    v7 = *(_QWORD *)(v5 + 24);
    v8 = *Prop;
    v9 = 2LL * (unsigned int)--*(_DWORD *)(v7 + 4);
    *(_OWORD *)Prop = *(_OWORD *)(v7 + 16LL * *(unsigned int *)(v7 + 4) + 8);
    *(_OWORD *)(v7 + 8 * v9 + 8) = 0LL;
    if ( v8 )
    {
      if ( v8 != this )
        (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
    }
  }
  v10 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  result = InternalSetProp(a2, v10, this);
  *((_QWORD *)this + 2) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
