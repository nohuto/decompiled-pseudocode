/*
 * XREFs of ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010CEE0
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x180078A8C (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x18009BF00 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 * Callees:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180084A30 (--1AlpcPort@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009DC44 (--3@YAXPEAX@Z.c)
 */

AlpcPort *__fastcall AlpcPort::`scalar deleting destructor'(AlpcPort *this, char a2)
{
  AlpcPort::~AlpcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
