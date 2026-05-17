/*
 * XREFs of LdrpLogDbgPrint @ 0x18011D6D4
 * Callers:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EBA20 (vDbgPrintExWithPrefixInternal.c)
 *     StringCbPrintfA @ 0x18011D7D4 (StringCbPrintfA.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

struct _TEB *__fastcall LdrpLogDbgPrint(__int64 a1, __int64 a2, const char *a3, int a4, __int64 a5, __int64 a6)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF

  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      NtCurrentTeb()->ClientId.UniqueProcess,
      NtCurrentTeb()->ClientId.UniqueThread,
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_180174088)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal((int)pszDest, 85, 0, a5, a6, 1);
  }
  return result;
}
