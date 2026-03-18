/*
 * XREFs of ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1401EDE84
 * Callers:
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x140201F94 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(DXG_GUEST_REMOTEOBJECTCHANNEL *this, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+5Ch] [rbp-24h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  _DWORD v13[4]; // [rsp+68h] [rbp-18h] BYREF

  if ( DXGPROCESS::GetCurrent() )
  {
    if ( a2 )
    {
      v5 = *((_QWORD *)this + 1);
      v12 = 0;
      v13[2] = 3;
      v13[0] = 1869901170;
      v9 = 1869901170;
      v13[1] = -1073741823;
      v10 = -1073741823;
      v11 = 4;
      v8 = 16;
      v13[3] = a2;
      v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v5 + 32LL))(
             v5,
             v13,
             16LL,
             &v9,
             &v8);
      v4 = v6;
      if ( v6 >= 0 )
      {
        if ( v8 == 16 )
        {
          if ( v11 == 4 )
            return v10;
          WdLogSingleEntry2(3LL, v11, -1073741823LL);
          WdLogGlobalForLineNumber = 1064;
        }
        else
        {
          WdLogSingleEntry2(3LL, v8, -1073741823LL);
          WdLogGlobalForLineNumber = 1055;
        }
        return (unsigned int)-1073741823;
      }
      else
      {
        WdLogSingleEntry1(3LL, v6);
        WdLogGlobalForLineNumber = 1046;
      }
    }
    else
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, 0LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1021;
    }
  }
  else
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1012;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v4;
}
