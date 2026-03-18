/*
 * XREFs of ?IsValid@CD2DBrush@@UEBAJXZ @ 0x1802CD090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBrush::IsValid(CD2DBrush *this)
{
  if ( *((_QWORD *)this + 9) )
    return *(_DWORD *)((*(__int64 (__fastcall **)(CD2DBrush *))(*(_QWORD *)this + 40LL))(this) + 1112) != 0
         ? 0x8898008D
         : 0;
  else
    return 2291662989LL;
}
