/*
 * XREFs of ?evaluate@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXXZ @ 0x1805EC8E4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x1805EC8D0 (-evaluate@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall PinManagerTipTests::_tip_PinManagerPinTest::evaluate(PinManagerTipTests::_tip_PinManagerPinTest *this)
{
  __int64 v1; // r9
  const char *v2; // rdx
  __int64 v3; // r9
  const char *v4; // r10
  int v5; // r8d
  __int16 v6; // r11

  v1 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v1 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 16385;
    goto LABEL_16;
  }
  v2 = (const char *)*((unsigned int *)this + 4);
  if ( (_DWORD)v2 == 2 && *((_DWORD *)this + 265) == 1 )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::trusted_caller_called_shim", v2);
    if ( *(_BYTE *)(v3 + 152) )
      return;
    *(_WORD *)(v3 + 154) = 0;
    goto LABEL_8;
  }
  v5 = *((_DWORD *)this + 268);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147023728 && (unsigned int)((_DWORD)v2 - 8) > 1 )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::pin_failure", v2);
    if ( *(_BYTE *)(v3 + 152) )
      return;
    *(_WORD *)(v3 + 154) = v6;
LABEL_8:
    *(_BYTE *)(v3 + 152) = 3;
    *(_QWORD *)(v3 + 160) = v4;
    return;
  }
  if ( *(_BYTE *)(v1 + 152) )
    return;
  *(_BYTE *)(v1 + 152) = 1;
  *(_WORD *)(v1 + 154) = 0x8000;
LABEL_16:
  *(_QWORD *)(v1 + 160) = 0LL;
}
