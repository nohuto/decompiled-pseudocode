/*
 * XREFs of OSOpenAMLINamespaceOverrideHandle @ 0x1400A3C50
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     RtlStringCchCatNA @ 0x14002D6F0 (RtlStringCchCatNA.c)
 *     RtlStringCchCatA @ 0x140030320 (RtlStringCchCatA.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 */

__int64 OSOpenAMLINamespaceOverrideHandle()
{
  __int64 v0; // rdi
  NTSTATUS v1; // ecx
  __int64 v2; // rax
  char pszDest[128]; // [rsp+20h] [rbp-98h] BYREF

  v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763908LL, 0LL, 0LL);
  v1 = RtlStringCchPrintfA(
         pszDest,
         0x75uLL,
         "%s\\",
         "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\NamespaceOverride");
  if ( v1 >= 0 )
  {
    v1 = RtlStringCchCatNA(pszDest, 0x75uLL, (STRSAFE_PCNZCH)(v0 + 10), 6uLL);
    if ( (int)(v1 + 0x80000000) < 0 || v1 == -2147483643 )
    {
      v1 = RtlStringCchCatA(pszDest, 0x75uLL, "\\");
      if ( v1 >= 0 )
      {
        v1 = RtlStringCchCatNA(pszDest, 0x75uLL, (STRSAFE_PCNZCH)(v0 + 16), 8uLL);
        if ( ((v1 + 0x80000000) & 0x80000000) != 0 || v1 == -2147483643 )
        {
          v2 = -1LL;
          do
            ++v2;
          while ( pszDest[v2] );
          v1 = RtlStringCchPrintfA(&pszDest[v2], 117 - v2, "\\%lu", *(_DWORD *)(v0 + 24));
          if ( v1 >= 0 )
            return (unsigned int)OSOpenHandle(pszDest);
        }
      }
    }
  }
  return (unsigned int)v1;
}
