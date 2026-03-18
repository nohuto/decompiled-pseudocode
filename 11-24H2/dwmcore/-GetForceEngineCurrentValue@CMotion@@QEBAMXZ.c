/*
 * XREFs of ?GetForceEngineCurrentValue@CMotion@@QEBAMXZ @ 0x18021DF2C
 * Callers:
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::GetForceEngineCurrentValue(CMotion *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-28h] BYREF

  return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                      *((_QWORD *)this + 3),
                      v2)
                  + 4);
}
