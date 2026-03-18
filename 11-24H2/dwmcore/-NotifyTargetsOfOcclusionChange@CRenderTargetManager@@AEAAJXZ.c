/*
 * XREFs of ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x18021D4B0
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180102E70 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::NotifyTargetsOfOcclusionChange(CRenderTargetManager *this)
{
  int (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rbx
  int v3; // edi
  int (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  int v8; // ebp
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 744) = 1;
  v2 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 10);
  v3 = 0;
  v4 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  while ( v2 != v4 )
  {
    v6 = *v2;
    v9 = 0LL;
    if ( (**v6)(v6, &GUID_12cee53f_ea34_40cf_8dd9_24a64ad480fe, &v9) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      v8 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xEBu, 0LL);
      if ( !v3 || v3 >= 0 && v8 < 0 )
        v3 = v8;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    ++v2;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
