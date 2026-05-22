/*
 * XREFs of ??1AsyncHRESULTPrincipal@@UEAA@XZ @ 0x180174258
 * Callers:
 *     ??_EAsyncHRESULTPrincipal@@UEAAPEAXI@Z @ 0x1801742B0 (--_EAsyncHRESULTPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AsyncHRESULTPrincipal::~AsyncHRESULTPrincipal(
        AsyncHRESULTPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rdi
  char *v6; // rcx

  v4 = (char *)this + 56;
  v6 = (char *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    a2,
    a3,
    a4);
}
