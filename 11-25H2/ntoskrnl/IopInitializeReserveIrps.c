/*
 * XREFs of IopInitializeReserveIrps @ 0x140C0B9D0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14048ADBC (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140F8C0C0 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( !IopReserveIrps )
    return 0;
  dword_140F8BFE8 = 0;
  qword_140F8C000 = (__int64)&qword_140F8BFF8;
  qword_140F8BFF8 = (__int64)&qword_140F8BFF8;
  word_140F8BFF0 = 1;
  byte_140F8BFF2 = 6;
  dword_140F8BFF4 = 0;
  Irp = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
  if ( !Irp )
    return 0;
  dword_140F8C010 = 0;
  qword_140F8C028 = (__int64)&qword_140F8C020;
  qword_140F8C020 = (__int64)&qword_140F8C020;
  word_140F8C018 = 1;
  byte_140F8C01A = 6;
  dword_140F8C01C = 0;
  qword_140F8C030 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
  if ( !qword_140F8C030 )
    return 0;
  dword_140F8C038 = 0;
  stru_140F8C040.Header.WaitListHead.Blink = &stru_140F8C040.Header.WaitListHead;
  v4 = 0;
  stru_140F8C040.Header.WaitListHead.Flink = &stru_140F8C040.Header.WaitListHead;
  LOWORD(stru_140F8C040.Header.Lock) = 1;
  stru_140F8C040.Header.Size = 6;
  stru_140F8C040.Header.SignalState = 0;
  qword_140F8C0B8 = 0LL;
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
        qword_140F8C088 = IrpWithExtension;
      }
      else
      {
        *(_QWORD *)&IrpWithExtension->Type = qword_140F8C0B8;
        qword_140F8C0B8 = IrpWithExtension;
      }
    }
    else
    {
      qword_140F8C058 = IrpWithExtension;
    }
    ++v4;
  }
  dword_140F8C060 = 0;
  qword_140F8C080 = (__int64)&qword_140F8C078;
  result = 1;
  qword_140F8C078 = (__int64)&qword_140F8C078;
  stru_140F8C0A0.Header.WaitListHead.Blink = &stru_140F8C0A0.Header.WaitListHead;
  stru_140F8C0A0.Header.WaitListHead.Flink = &stru_140F8C0A0.Header.WaitListHead;
  dword_140F8C090 = 0;
  qword_140F8C068 = 0LL;
  qword_140F8C098 = 0LL;
  word_140F8C070 = 1;
  byte_140F8C072 = 6;
  dword_140F8C074 = 0;
  LOWORD(stru_140F8C0A0.Header.Lock) = 1;
  stru_140F8C0A0.Header.Size = 6;
  stru_140F8C0A0.Header.SignalState = 0;
  return result;
}
