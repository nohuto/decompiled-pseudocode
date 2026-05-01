/*
 * XREFs of ?SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z @ 0x18049F98C
 * Callers:
 *     ??$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA?AV?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@0@$$QEAH@Z @ 0x18049BB9C (--$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA-AV-$unique_ptr@VMinimizeAnim.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18049C670 (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MinimizeAnimationSystemStateOverride::SetSystemAnimationsStateForMinimize(
        MinimizeAnimationSystemStateOverride *this,
        int a2)
{
  int pvParam; // [rsp+30h] [rbp+8h] BYREF
  int pvParam_4; // [rsp+34h] [rbp+Ch]

  pvParam_4 = a2;
  pvParam = 8;
  SystemParametersInfoW(0x49u, 8u, &pvParam, 0);
}
