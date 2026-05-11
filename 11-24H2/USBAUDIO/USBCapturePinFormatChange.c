/*
 * XREFs of USBCapturePinFormatChange @ 0x14002E2B0
 * Callers:
 *     USBCaptureCreatePin @ 0x14003EB00 (USBCaptureCreatePin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBCapturePinFormatChange(PVOID *PointerToPointerToItem)
{
  _DWORD *v1; // r8
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  NTSTATUS v5; // r8d
  _DWORD *v6; // rcx

  v1 = PointerToPointerToItem[12];
  v3 = PointerToPointerToItem[2];
  v4 = v3[19];
  *((_DWORD *)v3 + 26) = v1[17];
  *(_DWORD *)(v4 + 116) = v1[18];
  *(_DWORD *)(v4 + 8) = *((unsigned __int16 *)v1 + 33) * (*((unsigned __int16 *)v1 + 39) >> 3);
  v5 = _KsEdit(PointerToPointerToItem[1], PointerToPointerToItem, 0x88u, 0x88u, 0x41627845u);
  if ( v5 >= 0 )
  {
    v5 = _KsEdit(PointerToPointerToItem[1], (PVOID *)*PointerToPointerToItem + 15, 0x70u, 0x70u, 0x41627845u);
    if ( v5 >= 0 )
    {
      v6 = (_DWORD *)*((_QWORD *)*PointerToPointerToItem + 15);
      v6[23] = *(_DWORD *)(v4 + 8) * (*((_DWORD *)v3 + 26) / 0x64u);
      v6[24] = *(_DWORD *)(v4 + 8) * (*((_DWORD *)v3 + 26) / 0x64u);
      v6[25] = *(_DWORD *)(v4 + 8);
    }
  }
  return (unsigned int)v5;
}
