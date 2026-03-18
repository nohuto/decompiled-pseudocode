/*
 * XREFs of IopInitializeReserveIrps @ 0x140C1CBA0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14037592C (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140F8C840 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( !IopReserveIrps )
    return 0;
  dword_140F8C768 = 0;
  qword_140F8C780 = (__int64)&qword_140F8C778;
  qword_140F8C778 = (__int64)&qword_140F8C778;
  word_140F8C770 = 1;
  byte_140F8C772 = 6;
  dword_140F8C774 = 0;
  Irp = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
  if ( !Irp )
    return 0;
  dword_140F8C790 = 0;
  qword_140F8C7A8 = (__int64)&qword_140F8C7A0;
  qword_140F8C7A0 = (__int64)&qword_140F8C7A0;
  word_140F8C798 = 1;
  byte_140F8C79A = 6;
  dword_140F8C79C = 0;
  qword_140F8C7B0 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
  if ( !qword_140F8C7B0 )
    return 0;
  dword_140F8C7B8 = 0;
  stru_140F8C7C0.Header.WaitListHead.Blink = &stru_140F8C7C0.Header.WaitListHead;
  v4 = 0;
  stru_140F8C7C0.Header.WaitListHead.Flink = &stru_140F8C7C0.Header.WaitListHead;
  LOWORD(stru_140F8C7C0.Header.Lock) = 1;
  stru_140F8C7C0.Header.Size = 6;
  stru_140F8C7C0.Header.SignalState = 0;
  qword_140F8C838 = 0LL;
  while ( v4 < 8 )
  {
    IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
    v3 = (__int64)IrpWithExtension;
    if ( !IrpWithExtension )
      return 0;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        qword_140F8C808 = IrpWithExtension;
      }
      else
      {
        *(_QWORD *)&IrpWithExtension->Type = qword_140F8C838;
        qword_140F8C838 = IrpWithExtension;
      }
    }
    else
    {
      qword_140F8C7D8 = IrpWithExtension;
    }
    ++v4;
  }
  dword_140F8C7E0 = 0;
  qword_140F8C800 = (__int64)&qword_140F8C7F8;
  result = 1;
  qword_140F8C7F8 = (__int64)&qword_140F8C7F8;
  stru_140F8C820.Header.WaitListHead.Blink = &stru_140F8C820.Header.WaitListHead;
  stru_140F8C820.Header.WaitListHead.Flink = &stru_140F8C820.Header.WaitListHead;
  dword_140F8C810 = 0;
  qword_140F8C7E8 = 0LL;
  qword_140F8C818 = 0LL;
  word_140F8C7F0 = 1;
  byte_140F8C7F2 = 6;
  dword_140F8C7F4 = 0;
  LOWORD(stru_140F8C820.Header.Lock) = 1;
  stru_140F8C820.Header.Size = 6;
  stru_140F8C820.Header.SignalState = 0;
  return result;
}
