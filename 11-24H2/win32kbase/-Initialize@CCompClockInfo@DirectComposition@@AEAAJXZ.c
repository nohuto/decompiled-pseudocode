/*
 * XREFs of ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1401947C8
 * Callers:
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14015C068 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ @ 0x140222BDC (-EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Initialize(DirectComposition::CCompClockInfo *this)
{
  int v1; // edi
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  v1 = 0;
  if ( *((_DWORD *)this + 1) || *((_DWORD *)this + 2) )
  {
    v4 = *(_QWORD *)((char *)this + 4);
    v5 = 0;
    v1 = DxgkOpenAdapterFromLuidInternal(&v4);
    if ( v1 >= 0 )
    {
      *((_DWORD *)this + 4) = v5;
      DirectComposition::CCompClockInfo::EnsureVBlankEvent(this);
    }
  }
  return (unsigned int)v1;
}
