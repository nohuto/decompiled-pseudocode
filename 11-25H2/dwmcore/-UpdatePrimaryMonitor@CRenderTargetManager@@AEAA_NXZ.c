/*
 * XREFs of ?UpdatePrimaryMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x18013E5E4
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRenderTargetManager::UpdatePrimaryMonitor(CRenderTargetManager *this)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  bool result; // al

  v1 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  v3 = 0LL;
  *((_BYTE *)this + 752) = CCommonRegistryData::UseFastestMonitorAsPrimary;
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v4 != v5 )
  {
    v3 = *v4;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4) )
      *(_QWORD *)this = v3;
    else
      v3 = *(_QWORD *)this;
    ++v4;
  }
  if ( *((_QWORD *)this + 4) - *((_QWORD *)this + 3) != 8LL
    && v3
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3) )
  {
    *((_BYTE *)this + 752) = 1;
    *((_BYTE *)this + 748) = 1;
  }
  result = *(_QWORD *)this != v1;
  *((_BYTE *)this + 747) = 0;
  return result;
}
