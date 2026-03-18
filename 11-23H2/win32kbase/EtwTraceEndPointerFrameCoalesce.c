/*
 * XREFs of EtwTraceEndPointerFrameCoalesce @ 0x1C0139380
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01BD524 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D7EFC (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00DF728 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceEndPointerFrameCoalesce(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (_DWORD)a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return McTemplateK0qqq_EtwWriteTransfer(a1, &EndPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return McTemplateK0qqq_EtwWriteTransfer(a1, &EndPointerFrameCoalesce, a3, a1, a2, 0);
  }
  return result;
}
