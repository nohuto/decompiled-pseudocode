/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180011B08
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800118F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180012060 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x180012FEC (McTemplateU0j_EtwEventWriteTransfer.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(CAnimationClock *this)
{
  CAnimationClock *v1; // rbx
  unsigned int v2; // edx

  v1 = this;
  switch ( *((_DWORD *)this + 20) )
  {
    case 1:
      v2 = 3;
      break;
    case 2:
      v2 = 4;
      break;
    case 4:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0j_EtwEventWriteTransfer(this, &UdwmAnimationClock_Finish, (char *)this + 120);
      v2 = 6;
      this = v1;
      break;
    default:
      if ( (unsigned int)(*((_DWORD *)this + 20) - 5) > 1 )
        return;
      v2 = 7;
      break;
  }
  CAnimationClock::_SetState((__int64)this, v2);
}
