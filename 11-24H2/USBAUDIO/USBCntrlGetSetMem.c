/*
 * XREFs of USBCntrlGetSetMem @ 0x1400396E0
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetMemory @ 0x1400358F0 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBCntrlGetSetMem(IRP *a1, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  int SetMemory; // edi
  ULONG_PTR Length; // rbp
  PKSDEVICE Device; // rax

  FilterFromIrp = KsGetFilterFromIrp(a1);
  SetMemory = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( FilterFromIrp )
  {
    Device = KsGetDevice(FilterFromIrp);
    if ( Device )
    {
      SetMemory = USBHwGetSetMemory(
                    (int)Device,
                    ((unsigned __int8)*(_DWORD *)(a2 + 20) << 7) + 5,
                    *(_BYTE *)(a2 + 24),
                    *(unsigned __int16 *)(a2 + 28),
                    *(_WORD *)(a2 + 32),
                    *(_WORD *)(a2 + 36),
                    Length,
                    a3);
      if ( SetMemory >= 0 )
        a1->IoStatus.Information = Length;
    }
  }
  return (unsigned int)SetMemory;
}
