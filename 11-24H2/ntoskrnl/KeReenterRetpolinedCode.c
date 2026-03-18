/*
 * XREFs of KeReenterRetpolinedCode @ 0x140447000
 * Callers:
 *     <none>
 * Callees:
 *     KxReenterRetpolinedCode @ 0x140447024 (KxReenterRetpolinedCode.c)
 */

_KPRCB_BPB_RETPOLINE_STATE KeReenterRetpolinedCode()
{
  _KPRCB_BPB_RETPOLINE_STATE result; // al

  result.0 = ($C97C507C7AE1403CABDDE5329A3FB6A7)KeGetPcr()->Prcb.BpbRetpolineState;
  if ( (result.AllFlags & 1) != 0 )
    return (_KPRCB_BPB_RETPOLINE_STATE)KxReenterRetpolinedCode();
  return result;
}
