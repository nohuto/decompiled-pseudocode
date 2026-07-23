/*
 * XREFs of MiIssueDllInitializeCall @ 0x1407E7C54
 * Callers:
 *     MmCallDllInitialize @ 0x1407E7F48 (MmCallDllInitialize.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140447DA0 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DifDllInitializeWrapper @ 0x1406A519C (DifDllInitializeWrapper.c)
 *     MiFormDllRegistryPath @ 0x1407E7A18 (MiFormDllRegistryPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x140B8424C (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140B8C494 (VfDriverInitSuccess.c)
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
    if ( v8 >= 0 && !byte_140E2D96C )
      VfDriverInitSuccess(inited);
    return (unsigned int)v8;
  }
  return result;
}
