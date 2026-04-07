/*
 * XREFs of ?WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x18007D704
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B358 (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 * Callees:
 *     ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x1800153C0 (-Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall UDwmTrace::WindowMoveResizeCrossfadeAnimationTeardownComplete(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v3[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ch] [rbp+23h]
  void *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  __int64 *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  v1 = UDwmTrace::Provider(a1);
  if ( *(_DWORD *)v1 > 5u
    && (*((_QWORD *)v1 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x200000000000LL) == *((_QWORD *)v1 + 3) )
  {
    v13 = 0;
    v11 = &v2;
    v3[1] = 5;
    v5 = (unsigned __int16 *)*((_QWORD *)v1 + 1);
    v4 = 0x200000000000LL;
    v2 = 0x1000000LL;
    v12 = 8;
    v3[0] = 184549376;
    v6 = *v5;
    v8 = &unk_180112432;
    v7 = 2;
    v9 = 70;
    v10 = 1;
    EtwEventWriteTransfer(*((_QWORD *)v1 + 4), v3);
  }
}
