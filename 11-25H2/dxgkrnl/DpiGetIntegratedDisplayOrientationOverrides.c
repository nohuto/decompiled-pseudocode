/*
 * XREFs of DpiGetIntegratedDisplayOrientationOverrides @ 0x14040162C
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x14040D524 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028918 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall DpiGetIntegratedDisplayOrientationOverrides(__int64 a1, int a2, int *a3, _DWORD *a4)
{
  _QWORD *ChildDescriptor; // rax
  int *v6; // r9
  unsigned int v7; // r10d
  unsigned int *v8; // rcx
  unsigned int v9; // ecx

  *a4 = 0;
  *a3 = 0;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  if ( ChildDescriptor )
  {
    v8 = (unsigned int *)ChildDescriptor[13];
    if ( v8 )
    {
      v9 = *v8;
      if ( (((unsigned __int8)v9 | (unsigned __int8)(v9 >> 2)) & 3) != 0 )
      {
        *v6 = (v9 >> 2) & 3;
        *a3 = *(_DWORD *)ChildDescriptor[13] & 3;
        return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
