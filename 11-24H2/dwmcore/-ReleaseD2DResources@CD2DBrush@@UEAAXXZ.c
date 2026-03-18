/*
 * XREFs of ?ReleaseD2DResources@CD2DBrush@@UEAAXXZ @ 0x180224C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DBrush::ReleaseD2DResources(CD2DBrush *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
