/*
 * XREFs of ??1?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAA@XZ @ 0x18009C210
 * Callers:
 *     ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x18007948C (--1Context@ShellGesturesProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??1HandlerContext@ShellGesturesProcessor@@QEAA@XZ @ 0x1801591AC (--1HandlerContext@ShellGesturesProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::~_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>(
        ShellGesturesProcessor::HandlerContext *a1)
{
  if ( *((_BYTE *)a1 + 32) )
    ShellGesturesProcessor::HandlerContext::~HandlerContext(a1);
}
