/*
 * XREFs of ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x14004BDDC
 * Callers:
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0 (NtOpenCompositionSurfaceRealizationInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::GetSwapChainRealizationInfo(
        CCompositionSurface *this,
        __int64 a2,
        unsigned int *a3,
        struct CSM_REALIZATION_INFO *a4)
{
  unsigned int v6; // r10d
  _QWORD **v7; // rcx
  _QWORD *i; // rax
  _QWORD *v9; // rbx

  v6 = -1073741275;
  if ( *((_DWORD *)this + 34) )
  {
    v7 = (_QWORD **)((char *)this + 120);
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
    {
      v9 = i - 3;
      if ( *(i - 1) == a2 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v9 + 88LL))(i - 3) )
          return (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, unsigned int *, struct CSM_REALIZATION_INFO *))(*v9 + 80LL))(
                   v9,
                   0LL,
                   a3,
                   a4);
        else
          return (unsigned int)-1073741811;
      }
    }
  }
  return v6;
}
