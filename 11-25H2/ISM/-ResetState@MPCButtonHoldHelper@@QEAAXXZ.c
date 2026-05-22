/*
 * XREFs of ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x180080484
 * Callers:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180069408 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800C82B4 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCButtonHoldHelper::ResetState(MPCButtonHoldHelper *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
}
