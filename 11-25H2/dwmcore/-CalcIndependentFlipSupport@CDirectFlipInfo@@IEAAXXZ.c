/*
 * XREFs of ?CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ @ 0x180287C44
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1748 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDirectFlipInfo::CalcIndependentFlipSupport(CDirectFlipInfo *this)
{
  char v2; // bl
  __int64 v3; // rax

  if ( CCommonRegistryData::m_fDisableIndependentFlip
    || (v2 = 1, *((_DWORD *)this + 13) == 1)
    || *((int *)this + 13) >= 3
    || (v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this),
        !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 288LL))(v3)) )
  {
    v2 = 0;
  }
  *((_BYTE *)this + 106) = v2;
}
