/*
 * XREFs of ??_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140079A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x1400793E8 (--1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::ModuleCommandResult *__fastcall Windows::Media::Devices::ModuleCommandResult::`scalar deleting destructor'(
        Windows::Media::Devices::ModuleCommandResult *this,
        char a2)
{
  Windows::Media::Devices::ModuleCommandResult::~ModuleCommandResult(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
