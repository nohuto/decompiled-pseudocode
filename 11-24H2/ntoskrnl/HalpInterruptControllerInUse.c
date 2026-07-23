/*
 * XREFs of HalpInterruptControllerInUse @ 0x140553CAC
 * Callers:
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpInterruptControllerInUse(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // r11
  unsigned int i; // edx

  v1 = *(_QWORD **)(a1 + 264);
  while ( v1 != (_QWORD *)(a1 + 264) )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    for ( i = 0; i < *((_DWORD *)v2 + 6) - *((_DWORD *)v2 + 5); ++i )
    {
      if ( (*(_DWORD *)(56LL * i + v2[5] + 12) & 0x10) != 0 )
        return 1;
    }
  }
  return 0;
}
