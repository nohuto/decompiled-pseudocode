/*
 * XREFs of ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1800A57C0
 * Callers:
 *     ?evaluate@_tip_ISMSessionMonitorCreationTipTest@@QEAAXXZ @ 0x1800A5010 (-evaluate@_tip_ISMSessionMonitorCreationTipTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

const char *__fastcall tip2::details::reason_string(tip2::details *this, const char *a2)
{
  const char *result; // rax
  const char *v3; // rdx
  char v4; // r8

  for ( result = (const char *)this; ; result = v3 )
  {
    v4 = *(_BYTE *)this;
    if ( !*(_BYTE *)this )
      break;
    this = (tip2::details *)((char *)this + 1);
    v3 = (const char *)this;
    if ( v4 != 58 )
      v3 = result;
  }
  return result;
}
