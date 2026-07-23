/*
 * XREFs of IopInitializeReserveIrps @ 0x140C1EBE0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140F8C900 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2, 0LL);
  if ( !IopReserveIrps )
    return 0;
  dword_140F8C828 = 0;
  qword_140F8C840 = (__int64)&qword_140F8C838;
  LOBYTE(v2) = 42;
  qword_140F8C838 = (__int64)&qword_140F8C838;
  word_140F8C830 = 1;
  byte_140F8C832 = 6;
  dword_140F8C834 = 0;
  Irp = (PIRP)IopAllocateIrpWithExtension(v3, v2, 0LL);
  if ( !Irp )
    return 0;
  dword_140F8C850 = 0;
  qword_140F8C868 = (__int64)&qword_140F8C860;
  LOBYTE(v4) = 42;
  qword_140F8C860 = (__int64)&qword_140F8C860;
  word_140F8C858 = 1;
  byte_140F8C85A = 6;
  dword_140F8C85C = 0;
  qword_140F8C870 = (PIRP)IopAllocateIrpWithExtension(v5, v4, 0LL);
  if ( !qword_140F8C870 )
    return 0;
  dword_140F8C878 = 0;
  stru_140F8C880.Header.WaitListHead.Blink = &stru_140F8C880.Header.WaitListHead;
  v8 = 0;
  stru_140F8C880.Header.WaitListHead.Flink = &stru_140F8C880.Header.WaitListHead;
  LOWORD(stru_140F8C880.Header.Lock) = 1;
  stru_140F8C880.Header.Size = 6;
  stru_140F8C880.Header.SignalState = 0;
  qword_140F8C8F8 = 0LL;
  while ( v8 < 8 )
  {
    LOBYTE(v6) = 42;
    IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v7, v6, 0LL);
    v7 = (__int64)IrpWithExtension;
    if ( !IrpWithExtension )
      return 0;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        qword_140F8C8C8 = IrpWithExtension;
      }
      else
      {
        *(_QWORD *)&IrpWithExtension->Type = qword_140F8C8F8;
        qword_140F8C8F8 = IrpWithExtension;
      }
    }
    else
    {
      qword_140F8C898 = IrpWithExtension;
    }
    ++v8;
  }
  dword_140F8C8A0 = 0;
  qword_140F8C8C0 = (__int64)&qword_140F8C8B8;
  result = 1;
  qword_140F8C8B8 = (__int64)&qword_140F8C8B8;
  stru_140F8C8E0.Header.WaitListHead.Blink = &stru_140F8C8E0.Header.WaitListHead;
  stru_140F8C8E0.Header.WaitListHead.Flink = &stru_140F8C8E0.Header.WaitListHead;
  dword_140F8C8D0 = 0;
  qword_140F8C8A8 = 0LL;
  qword_140F8C8D8 = 0LL;
  word_140F8C8B0 = 1;
  byte_140F8C8B2 = 6;
  dword_140F8C8B4 = 0;
  LOWORD(stru_140F8C8E0.Header.Lock) = 1;
  stru_140F8C8E0.Header.Size = 6;
  stru_140F8C8E0.Header.SignalState = 0;
  return result;
}
