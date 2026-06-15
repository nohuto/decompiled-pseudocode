/*
 * XREFs of ??0IVolumeControlHandler@@QEAA@XZ @ 0x1800A6FA8
 * Callers:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x18002DF44 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIVolumeControlHandler@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800D0504 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIVolumeControlHandler@@@Detai.c)
 * Callees:
 *     <none>
 */

IVolumeControlHandler *__fastcall IVolumeControlHandler::IVolumeControlHandler(IVolumeControlHandler *this)
{
  *(_QWORD *)this = &IVolumeControlHandler::`vftable';
  return this;
}
