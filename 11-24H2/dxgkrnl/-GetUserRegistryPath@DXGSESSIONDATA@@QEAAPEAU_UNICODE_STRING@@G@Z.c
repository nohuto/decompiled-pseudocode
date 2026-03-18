/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063B04
 * Callers:
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401CAB10 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x14033C7C0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1403F19C8 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(DXGSESSIONDATA *this, unsigned __int16 a2)
{
  unsigned __int64 v4; // rax

  if ( !*((_QWORD *)this + 2343) && a2 )
  {
    *((_WORD *)this + 9368) = 0;
    v4 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v4 = -1LL;
    *((_QWORD *)this + 2343) = operator new[](v4, 0x4B677844u, 256LL);
    *((_WORD *)this + 9369) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18736);
}
