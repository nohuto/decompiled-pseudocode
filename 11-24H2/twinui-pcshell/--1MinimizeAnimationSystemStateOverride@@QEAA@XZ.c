/*
 * XREFs of ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18049C670
 * Callers:
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x18049CEAC (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 * Callees:
 *     ?SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z @ 0x18049F98C (-SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z.c)
 */

void __fastcall MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(
        MinimizeAnimationSystemStateOverride *this)
{
  if ( *(_DWORD *)this != -1 )
    MinimizeAnimationSystemStateOverride::SetSystemAnimationsStateForMinimize(this, *(_DWORD *)this);
}
