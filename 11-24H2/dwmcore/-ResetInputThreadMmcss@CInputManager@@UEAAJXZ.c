/*
 * XREFs of ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ @ 0x18021A6C0
 * Callers:
 *     ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x18021A640 (-ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::ResetInputThreadMmcss(CInputManager *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x5Fu, 0LL);
  }
  return v2;
}
