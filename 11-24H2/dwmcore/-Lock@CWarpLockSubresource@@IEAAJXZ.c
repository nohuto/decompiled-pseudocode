/*
 * XREFs of ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x180195ADC
 * Callers:
 *     ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x180195A20 (-Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Lock(CWarpLockSubresource *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, char *))(**((_QWORD **)this + 2) + 24LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         *((unsigned int *)this + 8),
         1LL,
         0,
         (char *)this + 40);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x4Cu, 0LL);
  return v2;
}
