/*
 * XREFs of ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18002B408
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDWMDXGIEnumeration::IsWarpAdapterLuid(CDWMDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 20);
  v3 = 0LL;
  if ( !v2 )
    return 0;
  v4 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 8 * v3);
    if ( a2 == *(_QWORD *)(v6 + 336) && *(_DWORD *)(v6 + 296) == 5140 && *(_DWORD *)(v6 + 300) == 140 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return 1;
}
