/*
 * XREFs of Debugger @ 0x14006E888
 * Callers:
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1400256A0 (RtlStringCchCopyA.c)
 *     RtlStringCchCatA @ 0x140030320 (RtlStringCchCatA.c)
 *     _stricmp_0 @ 0x1400567F7 (_stricmp_0.c)
 *     ConPrompt @ 0x14006DB08 (ConPrompt.c)
 *     DbgExecuteCmd @ 0x14006E740 (DbgExecuteCmd.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall Debugger(__int64 a1)
{
  char *v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax
  char *Context; // [rsp+28h] [rbp-E0h] BYREF
  CHAR Name[8]; // [rsp+30h] [rbp-D8h] BYREF
  CHAR Command[272]; // [rsp+38h] [rbp-D0h] BYREF
  char pszSrc[256]; // [rsp+148h] [rbp+40h] BYREF
  char pszDest[256]; // [rsp+248h] [rbp+140h] BYREF

  Context = 0LL;
  do
  {
    do
    {
LABEL_2:
      ConPrompt(a1, pszSrc);
      RtlStringCchCopyA(pszDest, 0x100uLL, pszSrc);
      v1 = strtok_s(pszSrc, " \t\n", &Context);
    }
    while ( !v1 );
    for ( i = 0LL; (unsigned int)i < 0x11; i = (unsigned int)(i + 1) )
    {
      if ( !stricmp_0(off_1400750A0[i], v1) )
      {
        memset(Command, 0, 0x109uLL);
        strcpy(Name, "ACPI");
        RtlStringCchCopyA(Command, 0x109uLL, "!AMLI ");
        RtlStringCchCatA(Command, 0x109uLL, pszDest);
        RtlStringCchCatA(Command, 0x109uLL, " ; g");
        DbgCommandString(Name, Command);
        goto LABEL_2;
      }
    }
    result = DbgExecuteCmd(a1, v1, &Context);
  }
  while ( (_DWORD)result != -1 );
  return result;
}
