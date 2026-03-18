/*
 * XREFs of CompositefsBootIsEnabled @ 0x140C4D5F4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     CimfsInitialize @ 0x140C4C9EC (CimfsInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CompositefsBootIsEnabled(bool *a1)
{
  int v2; // edi
  NTSTATUS v3; // ebx
  UNICODE_STRING v5; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  v2 = 0;
  RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v3 = IopOpenRegistryKeyEx(&Handle, 0LL, &v5, 1u);
  if ( v3 >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"CompositefsBoot", 0, &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
    v3 = 0;
    *a1 = v2 != 0;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v3;
}
