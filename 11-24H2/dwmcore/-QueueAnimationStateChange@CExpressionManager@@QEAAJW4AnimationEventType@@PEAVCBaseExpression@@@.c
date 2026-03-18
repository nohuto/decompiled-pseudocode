/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180154694
 * Callers:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18015459C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18000DD58 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 (__fastcall *v8)(CMILRefCountImpl *); // rax
  unsigned int v9; // ebx
  int v11; // esi
  int v12; // r9d
  unsigned int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  __int128 *v15; // [rsp+60h] [rbp+18h] BYREF

  if ( a3[2] <= 0 )
    return 0;
  v5 = a1 + 224;
  LODWORD(v14) = a2;
  v6 = *(_DWORD *)(a1 + 248);
  *((_QWORD *)&v14 + 1) = a3;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v11 = -2147024362;
    v13 = 181;
    v12 = -2147024362;
LABEL_12:
    v9 = v11;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x27Bu, 0LL);
    return v9;
  }
  if ( v7 <= *(_DWORD *)(a1 + 244) )
  {
    *(_OWORD *)(*(_QWORD *)v5 + 16LL * v6) = v14;
    *(_DWORD *)(a1 + 248) = v7;
    goto LABEL_5;
  }
  v15 = &v14;
  v11 = DynArrayImpl<1>::Grow(a1 + 224, 0x10u, 1, a4, (unsigned __int64 *)&v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 192;
    goto LABEL_12;
  }
  *(_OWORD *)((unsigned int)(16 * (*(_DWORD *)(v5 + 24))++) + *(_QWORD *)v5) = *v15;
LABEL_5:
  v8 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a3 + 8LL);
  if ( v8 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)a3);
  else
    v8((CMILRefCountImpl *)a3);
  return 0;
}
