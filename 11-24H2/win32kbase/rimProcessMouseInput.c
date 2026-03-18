/*
 * XREFs of rimProcessMouseInput @ 0x1400E3B2C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1400E3BB8 (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  if ( !*(_QWORD *)(a1 + 832) && !*(_DWORD *)(a1 + 1056) )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 452, (int)a2 + 240, 0);
  result = *(_DWORD *)(a2 + 168);
  if ( (result & 0x2000) == 0 || (result & 0x80000) == 0 || (result & 0x1000000) != 0 )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 452, (int)a2 + 240, 0);
  if ( (result & 0x400000) == 0 )
  {
    *(_DWORD *)(a2 + 168) = result | 0x400000;
    result = ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
  }
  *(_BYTE *)(a1 + 776) = 1;
  return result;
}
