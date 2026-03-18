/*
 * XREFs of EtwTracePointerNoCoalesce @ 0x1C013AEB0
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C0CF0 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C1040 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D7EFC (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     McTemplateK0hhq_EtwWriteTransfer @ 0x1C013C6A0 (McTemplateK0hhq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerNoCoalesce(int a1, char a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a4 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return McTemplateK0hhq_EtwWriteTransfer(
               a1,
               (unsigned int)&PointerDelegateNoCoalesce,
               a3,
               (unsigned __int16)a1,
               a2,
               a3);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return McTemplateK0hhq_EtwWriteTransfer(a1, (unsigned int)&PointerNoCoalesce, a3, (unsigned __int16)a1, a2, a3);
  }
  return result;
}
