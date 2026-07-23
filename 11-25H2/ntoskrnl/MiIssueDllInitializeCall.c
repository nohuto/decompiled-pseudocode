/*
 * XREFs of MiIssueDllInitializeCall @ 0x1407D77CC
 * Callers:
 *     MmCallDllInitialize @ 0x1407D7AC0 (MmCallDllInitialize.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14025DBF0 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     DifDllInitializeWrapper @ 0x140698F6C (DifDllInitializeWrapper.c)
 *     MiFormDllRegistryPath @ 0x1407D7590 (MiFormDllRegistryPath.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x140B72248 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140B7A4B4 (VfDriverInitSuccess.c)
 */

__int64 __fastcall MiIssueDllInitializeCall(__int64 a1, __int64 (__fastcall *a2)(UNICODE_STRING *))
{
  __int64 result; // rax
  PVOID v5; // rdi
  unsigned int inited; // esi
  int v7; // eax
  int v8; // ebx
  UNICODE_STRING v9; // [rsp+30h] [rbp-18h] BYREF
  PVOID BaseOfImage; // [rsp+60h] [rbp+18h] BYREF

  BaseOfImage = 0LL;
  v9 = 0LL;
  result = MiFormDllRegistryPath(a1, &v9);
  if ( (int)result >= 0 )
  {
    RtlPcToFileHeader(*(PVOID *)(a1 + 48), &BaseOfImage);
    v5 = *(PVOID *)(a1 + 48);
    if ( BaseOfImage != v5 )
      KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)a2);
    inited = VfDriverInitStarting();
    if ( (unsigned int)VfIsVerifierEnabled() )
      v7 = DifDllInitializeWrapper((__int64)&v9, (__int64)v5, (__int64)a2);
    else
      v7 = a2(&v9);
    v8 = v7;
    ExFreePoolWithTag(v9.Buffer, 0);
    if ( v8 >= 0 && !byte_140E2D5EC )
      VfDriverInitSuccess(inited);
    return (unsigned int)v8;
  }
  return result;
}
