/*
 * XREFs of IoVerifyPartitionTable @ 0x1407026A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x1406920E8 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1406921D0 (--1SC_DISK@@UEAA@XZ.c)
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140692C30 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140701F58 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS v4; // ebx
  _QWORD v6[50]; // [rsp+20h] [rbp-1A8h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[49] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  v4 = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( v4 >= 0 )
    v4 = SC_DISK::VerifyPartitionTable((SC_DISK *)v6, FixErrors);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return v4;
}
