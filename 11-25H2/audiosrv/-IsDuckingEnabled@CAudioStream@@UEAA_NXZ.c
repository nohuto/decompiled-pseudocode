/*
 * XREFs of ?IsDuckingEnabled@CAudioStream@@UEAA_NXZ @ 0x180079D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAudioStream::IsDuckingEnabled(CAudioStream *this)
{
  return !_InterlockedCompareExchange((volatile signed __int32 *)this + 138, 1, 1)
      && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 120LL))(*((_QWORD *)this + 6)) == 0;
}
