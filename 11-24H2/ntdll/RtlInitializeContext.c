/*
 * XREFs of RtlInitializeContext @ 0x180144C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

ULONG64 __cdecl RtlInitializeContext(
        HANDLE Reserved,
        PCONTEXT Context,
        PVOID Parameter,
        PVOID InitialPc,
        PVOID InitialSp)
{
  struct _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414 *Header; // rbx
  ULONG64 result; // rax

  if ( ((unsigned __int8)InitialSp & 0xF) != 0 )
    RtlRaiseStatus(-1073741815);
  Context->Rax = 0LL;
  Header = (struct _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414 *)Context->Header;
  Context->Rbp = 0LL;
  Context->EFlags = 512;
  Context->Rbx = 1LL;
  Context->Rsp = (DWORD64)InitialSp;
  Context->Rsi = 4LL;
  Context->Rdi = 5LL;
  Context->R8 = 8LL;
  Context->R10 = 10LL;
  Context->R11 = 11LL;
  Context->R12 = 12LL;
  Context->R13 = 13LL;
  Context->R14 = 14LL;
  Context->R15 = 15LL;
  memset_thunk_772440563353939046(&Context->FltSave, 0, 0x200uLL);
  LOWORD(Header->Header[0].Low) = 639;
  result = 0xF0E0D0C0A0908070uLL;
  Context->Rip = (DWORD64)InitialPc;
  Context->Rcx = (DWORD64)Parameter;
  Context->MxCsr = 8064;
  Context->FltSave.MxCsr = 8064;
  Context->R9 = 0xF0E0D0C0A0908070uLL;
  Context->ContextFlags = 1048587;
  return result;
}
