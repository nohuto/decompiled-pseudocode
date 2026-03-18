/*
 * XREFs of MiIssueDllInitializeCall @ 0x1407E7684
 * Callers:
 *     MmCallDllInitialize @ 0x1407E7978 (MmCallDllInitialize.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140452CF0 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     DifDllInitializeWrapper @ 0x1406A419C (DifDllInitializeWrapper.c)
 *     MiFormDllRegistryPath @ 0x1407E7448 (MiFormDllRegistryPath.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfDriverInitStarting @ 0x140B82248 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140B8A494 (VfDriverInitSuccess.c)
 */

__int64 __fastcall MiIssueDllInitializeCall(__int64 a1, __int64 (__fastcall *a2)(UNICODE_STRING *))
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned int inited; // esi
  int v7; // eax
  int v8; // ebx
  UNICODE_STRING v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  result = MiFormDllRegistryPath(a1, &v9);
  if ( (int)result >= 0 )
  {
    RtlPcToFileHeader(*(_QWORD *)(a1 + 48), &v10);
    v5 = *(_QWORD *)(a1 + 48);
    if ( v10 != v5 )
      KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)a2);
    inited = VfDriverInitStarting();
    if ( (unsigned int)VfIsVerifierEnabled() )
      v7 = DifDllInitializeWrapper((__int64)&v9, v5, (__int64)a2);
    else
      v7 = a2(&v9);
    v8 = v7;
    ExFreePoolWithTag(v9.Buffer, 0);
    if ( v8 >= 0 && !byte_140E2D82C )
      VfDriverInitSuccess(inited);
    return (unsigned int)v8;
  }
  return result;
}
