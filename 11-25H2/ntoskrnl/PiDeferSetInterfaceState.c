/*
 * XREFs of PiDeferSetInterfaceState @ 0x140A8B230
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDeferSetInterfaceState(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 Pool2; // rax
  UNICODE_STRING *v5; // rdi
  int UnicodeString; // ebx
  UNICODE_STRING **v7; // rcx

  Pool2 = ExAllocatePool2(0x100uLL);
  v5 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    UnicodeString = IopAllocateUnicodeString(Pool2 + 16, a2->Length);
    if ( UnicodeString < 0 )
    {
      UnicodeString = -1073741670;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      RtlCopyUnicodeString(v5 + 1, a2);
      v7 = *(UNICODE_STRING ***)(a1 + 616);
      if ( *v7 != (UNICODE_STRING *)(a1 + 608) )
        __fastfail(3u);
      *(_QWORD *)&v5->Length = a1 + 608;
      v5->Buffer = (wchar_t *)v7;
      *v7 = v5;
      *(_QWORD *)(a1 + 616) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnicodeString;
}
