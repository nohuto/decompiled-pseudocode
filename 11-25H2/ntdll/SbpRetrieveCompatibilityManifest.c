/*
 * XREFs of SbpRetrieveCompatibilityManifest @ 0x1800F3E18
 * Callers:
 *     SbpDetermineDllContext @ 0x180071D10 (SbpDetermineDllContext.c)
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall SbpRetrieveCompatibilityManifest(PACTIVATION_CONTEXT ActivationContext, void **a2, SIZE_T *a3)
{
  struct _PEB *v3; // rax
  unsigned int v4; // ebx
  PVOID v5; // rbp
  ULONG v9; // r12d
  NTSTATUS v10; // ecx
  SIZE_T ActivationContextInformationLength; // rsi
  PVOID ActivationContextInformation; // rdi
  SIZE_T Size; // [rsp+70h] [rbp+8h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v5 = *a2;
  *a2 = 0LL;
  Size = 0LL;
  v9 = 1073741826;
  if ( ActivationContext == v3->ImageBaseAddress )
    v9 = 2;
  v10 = RtlQueryInformationActivationContext(
          v9,
          ActivationContext,
          0LL,
          CompatibilityInformationInActivationContext,
          0LL,
          0LL,
          &Size);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    ActivationContextInformationLength = Size;
    if ( !Size )
      return 1;
    if ( Size > *a3 )
    {
      ActivationContextInformationLength = Size;
      ActivationContextInformation = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size);
      if ( !ActivationContextInformation )
        return v4;
    }
    else
    {
      ActivationContextInformation = v5;
    }
    if ( RtlQueryInformationActivationContext(
           v9,
           ActivationContext,
           0LL,
           CompatibilityInformationInActivationContext,
           ActivationContextInformation,
           ActivationContextInformationLength,
           &Size) >= 0 )
    {
      *a3 = Size;
      *a2 = ActivationContextInformation;
      return 1;
    }
    if ( ActivationContextInformation && ActivationContextInformation != v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ActivationContextInformation);
  }
  return v4;
}
