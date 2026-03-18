/*
 * XREFs of ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x180219858
 * Callers:
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800E5410 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::GetCurrentVelocity(CMotion *this)
{
  __int64 v1; // r8
  _BYTE v3[24]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 3), v3) + 8);
  else
    return *((float *)this + 13);
}
