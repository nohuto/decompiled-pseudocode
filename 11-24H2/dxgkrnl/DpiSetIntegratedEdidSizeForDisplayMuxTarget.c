/*
 * XREFs of DpiSetIntegratedEdidSizeForDisplayMuxTarget @ 0x14007DC68
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetIntegratedEdidSizeForDisplayMuxTarget(__int64 a1, int a2, __int16 a3)
{
  unsigned int v3; // r9d
  _QWORD **v4; // r10
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  v3 = -1073741072;
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 64) + 3600LL);
  v5 = *v4;
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == v4 )
      break;
    v5 = (_QWORD *)*v5;
    if ( *((_DWORD *)v6 - 2) == a2 )
    {
      *((_WORD *)v6 + 30) = a3;
      return 0;
    }
  }
  return v3;
}
