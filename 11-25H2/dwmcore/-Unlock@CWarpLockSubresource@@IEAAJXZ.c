/*
 * XREFs of ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x1801025E0
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x180100EEC (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 32LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         *((unsigned int *)this + 8));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x5Eu, 0LL);
  *((_QWORD *)this + 5) = 0LL;
  result = v3;
  *((_DWORD *)this + 12) = 0;
  return result;
}
