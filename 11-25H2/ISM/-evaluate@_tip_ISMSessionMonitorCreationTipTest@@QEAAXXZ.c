/*
 * XREFs of ?evaluate@_tip_ISMSessionMonitorCreationTipTest@@QEAAXXZ @ 0x1800A6330
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x1800A62B0 (-evaluate@-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1800A6ABC (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ISMSessionMonitorCreationTipTest::evaluate(
        _tip_ISMSessionMonitorCreationTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::wait_failed", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return;
    *(_WORD *)(v5 + 154) = v3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::fallback_failed", a2);
    v5 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v5 + 152) == v7 )
    {
      *(_WORD *)(v5 + 154) = 1;
LABEL_4:
      *(_BYTE *)(v5 + 152) = 3;
      *(_QWORD *)(v5 + 160) = v2;
    }
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v8 + 152) )
    {
      *(_BYTE *)(v8 + 152) = 1;
      *(_WORD *)(v8 + 154) = 0x8000;
      *(_QWORD *)(v8 + 160) = 0LL;
    }
  }
}
