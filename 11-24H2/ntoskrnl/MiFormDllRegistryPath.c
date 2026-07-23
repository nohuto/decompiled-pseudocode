/*
 * XREFs of MiFormDllRegistryPath @ 0x1407E7A18
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFormDllRegistryPath(__int64 a1, UNICODE_STRING *a2)
{
  unsigned __int16 v4; // ax
  wchar_t *Pool; // rax
  unsigned int v7; // ebx
  wchar_t *v8; // rdi
  unsigned __int64 Length; // rsi
  const void *v10; // rdx
  unsigned __int16 v11; // dx
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-18h] BYREF

  Source = 0LL;
  *a2 = 0LL;
  v4 = *(_WORD *)(a1 + 88);
  if ( (unsigned __int16)(v4 + 2) < v4 )
    return 3221225734LL;
  Source.MaximumLength = v4 + 2;
  Pool = (wchar_t *)MiAllocatePool(0x100uLL, (unsigned __int16)(v4 + 2), 1413770573);
  v7 = 0;
  Source.Buffer = Pool;
  v8 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(const void **)(a1 + 96);
  Source.Length = *(_WORD *)(a1 + 88);
  Length = Source.Length;
  memmove(Pool, v10, Source.Length);
  v11 = CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length;
  if ( (unsigned __int16)(CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length) <= CmRegistryMachineSystemCurrentControlSetServices.Length
    || (unsigned __int16)(v11 + 4) < v11 )
  {
    v7 = -1073741562;
  }
  else
  {
    a2->MaximumLength = v11 + 4;
    v12 = (wchar_t *)MiAllocatePool(0x40uLL, (unsigned __int16)(v11 + 4), 1413770573);
    a2->Buffer = v12;
    if ( v12 )
    {
      a2->Length = CmRegistryMachineSystemCurrentControlSetServices.Length;
      memmove(
        v12,
        CmRegistryMachineSystemCurrentControlSetServices.Buffer,
        CmRegistryMachineSystemCurrentControlSetServices.Length);
      RtlAppendUnicodeToString(a2, L"\\");
      v8[Length >> 1] = 0;
      v13 = wcschr(v8, 0x2Eu);
      if ( v13 )
      {
        LOWORD(Length) = 2 * (v13 - v8);
        Source.Length = Length;
      }
      v8[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
      RtlAppendUnicodeStringToString(a2, &Source);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  ExFreePoolWithTag(v8, 0);
  return v7;
}
