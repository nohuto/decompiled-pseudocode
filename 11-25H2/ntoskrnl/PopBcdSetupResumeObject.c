/*
 * XREFs of PopBcdSetupResumeObject @ 0x140A25128
 * Callers:
 *     PopBcdSetPendingResume @ 0x140753F0C (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A24DD4 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(HANDLE BcdObjectHandle)
{
  ULONG BufferSize; // esi
  _DWORD *Pool2; // rax
  void *v4; // rdi
  BCD_FLAGS v5; // r8d
  NTSTATUS v6; // ebx
  BCD_FLAGS v7; // r8d
  BCD_FLAGS v8; // r8d
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  BufferSize = PoHiberFileRoot.Length + 22;
  DestinationString = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 2;
    memmove(Pool2 + 5, PoHiberFileRoot.Buffer, PoHiberFileRoot.Length);
    v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000001u, v5, v4, BufferSize);
    if ( v6 >= 0 )
    {
      v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000026u, v7, v4, BufferSize);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
        v6 = BcdSetElementDataWithFlags(
               BcdObjectHandle,
               0x22000002u,
               v8,
               DestinationString.Buffer,
               DestinationString.Length + 2);
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
