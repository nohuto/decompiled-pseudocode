/*
 * XREFs of DpiGetIntegratedEdidSizeForDisplayMuxTarget @ 0x14007D0A4
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetIntegratedEdidSizeForDisplayMuxTarget(__int64 a1, int a2, _WORD *a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  struct _ERESOURCE *v7; // rsi
  _QWORD **v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  v6 = -1073741072;
  KeEnterCriticalRegion();
  v7 = (struct _ERESOURCE *)(v3 + 3440);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3440), 1u);
  v8 = (_QWORD **)(v3 + 3600);
  v9 = *v8;
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == v8 )
      break;
    v9 = (_QWORD *)*v9;
    if ( *((_DWORD *)v10 - 2) == a2 )
    {
      v6 = 0;
      *a3 = *((_WORD *)v10 + 30);
      break;
    }
  }
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return v6;
}
