/*
 * XREFs of ??1AsyncPVPrincipal@@UEAA@XZ @ 0x180173204
 * Callers:
 *     ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x1801732B0 (--_EAsyncPVPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AsyncPVPrincipal::~AsyncPVPrincipal(AsyncPVPrincipal *this, __int64 a2, __int64 a3, const char *a4)
{
  char *v4; // rdi
  char *v6; // rcx
  __int64 v7; // rcx

  v4 = (char *)this + 120;
  v6 = (char *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != (_QWORD)this + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)this + 14) = 0LL;
  }
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    a2,
    a3,
    a4);
}
