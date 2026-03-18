/*
 * XREFs of ??0_lambda_9000b013b54c5d4fd00007edcb0ed276_@@QEAA@AEA_N0AEAU_DXGK_DIAG_DISPLAYMUX_SWITCH_CANCEL_PACKET@@AEAE0@Z @ 0x140081E58
 * Callers:
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x1400877FC (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

_lambda_9000b013b54c5d4fd00007edcb0ed276_ *__fastcall _lambda_9000b013b54c5d4fd00007edcb0ed276_::_lambda_9000b013b54c5d4fd00007edcb0ed276_(
        _lambda_9000b013b54c5d4fd00007edcb0ed276_ *this,
        bool *a2,
        bool *a3,
        struct _DXGK_DIAG_DISPLAYMUX_SWITCH_CANCEL_PACKET *a4,
        unsigned __int8 *a5,
        bool *a6)
{
  _lambda_9000b013b54c5d4fd00007edcb0ed276_ *result; // rax

  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  result = this;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a4;
  return result;
}
