/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063214
 * Callers:
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401C58C0 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1403680C0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1403F7BD8 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(
        DXGSESSIONDATA *this,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rax

  if ( !*((_QWORD *)this + 2343) && a2 )
  {
    *((_WORD *)this + 9368) = 0;
    v6 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v6 = -1LL;
    *((_QWORD *)this + 2343) = operator new[](v6, 0x4B677844u, 256LL, a4);
    *((_WORD *)this + 9369) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18736);
}
