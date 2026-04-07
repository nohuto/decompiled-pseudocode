/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180018180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnGlobalTimeUpdated(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v2; // rbx

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x1000) != 0 )
    return 0LL;
  v2 = *((_QWORD *)this + 3);
  for ( *((_DWORD *)this + 22) = v1 | 0x1000; v2; v2 = *(_QWORD *)(v2 + 24) )
  {
    if ( (*(_BYTE *)(v2 + 88) & 1) != 0 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  return 0LL;
}
