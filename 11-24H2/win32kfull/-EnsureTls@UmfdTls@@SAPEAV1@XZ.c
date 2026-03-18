/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140160078
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x140113AD4 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x14015FE28 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x14015FF54 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1401E0DF0 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140330634 (-UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401601C0 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

struct UmfdTls *__fastcall UmfdTls::EnsureTls(__int64 a1, __int64 a2)
{
  unsigned __int64 *CurrentThreadNonPaged; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  struct UmfdTls *result; // rax

  CurrentThreadNonPaged = (unsigned __int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  v4 = (v3 + 8) & ((unsigned __int128)-(__int128)v3 >> 64);
  if ( !v4 )
    return 0LL;
  result = *(struct UmfdTls **)(((v3 + 8) & ((unsigned __int128)-(__int128)v3 >> 64)) + 0x138);
  if ( !result )
  {
    result = UmfdTls::Create();
    *(_QWORD *)(v4 + 312) = result;
  }
  return result;
}
