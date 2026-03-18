/*
 * XREFs of ?WaitForVBlank@CRemoteRenderTarget@@UEBAJPEAX@Z @ 0x18028BA40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::WaitForVBlank(CRemoteRenderTarget *this, void *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v2 + 144LL))(v2, a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x15Fu, 0LL);
  }
  else
  {
    v4 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x163u, 0LL);
  }
  return v4;
}
