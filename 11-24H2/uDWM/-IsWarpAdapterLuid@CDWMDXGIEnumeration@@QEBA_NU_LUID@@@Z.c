/*
 * XREFs of ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18007C210
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDWMDXGIEnumeration::IsWarpAdapterLuid(CDWMDXGIEnumeration *this, struct _LUID a2)
{
  __int64 i; // r9
  __int64 v4; // rcx

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 20) )
      return 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
    if ( a2 == *(_QWORD *)(v4 + 336) && *(_DWORD *)(v4 + 296) == 5140 && *(_DWORD *)(v4 + 300) == 140 )
      break;
  }
  return 1;
}
