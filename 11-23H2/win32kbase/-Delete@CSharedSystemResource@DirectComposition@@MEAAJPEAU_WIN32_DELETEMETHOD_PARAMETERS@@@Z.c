/*
 * XREFs of ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0025FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0026120 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CSharedSystemResource *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  __int64 v3; // rcx

  (*(void (__fastcall **)(DirectComposition::CSharedSystemResource *, struct _WIN32_DELETEMETHOD_PARAMETERS *))(*(_QWORD *)this + 8LL))(
    this,
    a2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *((_DWORD *)this + 4) )
      DirectComposition::CConnection::ReleaseSystemResource(v3, *((unsigned int *)this + 4));
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  return 0LL;
}
