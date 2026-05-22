/*
 * XREFs of ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x18007948C
 * Callers:
 *     ??_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z @ 0x180079450 (--_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x1800794C0 (--1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??1?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAA@XZ @ 0x18009C210 (--1-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAA@XZ.c)
 */

void __fastcall ShellGesturesProcessor::Context::~Context(ShellGesturesProcessor::Context *this)
{
  std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::~_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>((char *)this + 424);
  ShellGesturesProcessor::ShellGesturesContext::~ShellGesturesContext((ShellGesturesProcessor::Context *)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
