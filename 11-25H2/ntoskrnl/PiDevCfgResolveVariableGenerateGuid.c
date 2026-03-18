/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x14071FD10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlUpcaseUnicodeString @ 0x140827CF0 (RtlUpcaseUnicodeString.c)
 *     ExUuidCreate @ 0x1408DB8F0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  unsigned int v6; // edi
  void *Pool2; // rax
  void *v8; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-20h] BYREF

  Uuid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = ExUuidCreate(&Uuid);
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = 1;
    v4 = RtlStringFromGUIDEx(&Uuid, &DestinationString, v5);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( v4 >= 0 )
      {
        v6 = DestinationString.Length + 2;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v8 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, DestinationString.Buffer, v6);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v6;
          *(_QWORD *)(a3 + 40) = v8;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v4;
}
