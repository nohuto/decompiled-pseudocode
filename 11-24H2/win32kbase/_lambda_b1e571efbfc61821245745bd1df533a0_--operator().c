/*
 * XREFs of _lambda_b1e571efbfc61821245745bd1df533a0_::operator() @ 0x1400CCECC
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400CD1FC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400CDD58 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EF2C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 */

char __fastcall lambda_b1e571efbfc61821245745bd1df533a0_::operator()(CPTPEngine **a1, char a2, int a3)
{
  CPTPEngine *v3; // r10
  char v5; // bl
  int v7; // eax
  struct PTPInput ***v9; // rsi
  char v10; // dl
  int v11; // eax
  struct PTPInput ***v12; // r14
  struct PTPInput *v13; // rcx

  v3 = *a1;
  v5 = a2;
  v7 = *((_DWORD *)*a1 + 705) & a3;
  if ( a2 )
  {
    if ( !v7 )
      return 0;
    goto LABEL_22;
  }
  if ( !v7 )
    return v5;
  if ( !*((_DWORD *)v3 + 698)
    || (v9 = (struct PTPInput ***)(a1 + 1), *(_DWORD *)(*(_QWORD *)a1[1] + 36LL))
    || *((_DWORD *)v3 + 26) == 2 )
  {
    v10 = 1;
    v9 = (struct PTPInput ***)(a1 + 1);
  }
  else
  {
    v10 = 0;
  }
  v11 = *((_DWORD *)v3 + 706);
  if ( v11 == 3 )
    goto LABEL_21;
  if ( v11 == 6 )
    goto LABEL_21;
  if ( a3 == 16 )
  {
    if ( *((_DWORD *)v3 + 697) )
      goto LABEL_21;
    if ( *((_DWORD *)v3 + 762) )
    {
      v9 = (struct PTPInput ***)(a1 + 1);
      if ( !*(_DWORD *)(*(_QWORD *)a1[1] + 36LL) )
        goto LABEL_21;
    }
  }
  if ( *((_DWORD *)**v9 + 10) || *((_DWORD *)v3 + 6) )
    goto LABEL_21;
  v12 = v9;
  if ( !v10 )
    goto LABEL_16;
  if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(v3, **v9, 0x40u, 0) )
  {
LABEL_21:
    v5 = 1;
LABEL_22:
    *((_DWORD *)*a1 + 705) &= ~a3;
    return v5;
  }
  v12 = (struct PTPInput ***)(a1 + 1);
LABEL_16:
  v5 = 0;
  CPTPEngine::CancelMouseUpTimer(*a1, 1);
  v13 = **v9;
  if ( *((_DWORD *)v13 + 10) || *((_DWORD *)v13 + 13) )
  {
    CBasePTPEngine::SendInertiaOutput(*a1, 3LL);
    *((_DWORD *)**v12 + 10) = 0;
  }
  if ( a3 == 16 )
    CPTPEngine::TPAAPSetCurtainState(*a1, 0);
  return v5;
}
