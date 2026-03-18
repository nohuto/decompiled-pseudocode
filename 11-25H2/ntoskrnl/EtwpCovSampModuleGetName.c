/*
 * XREFs of EtwpCovSampModuleGetName @ 0x140A3DCA4
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x14090D0F0 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlDuplicateUnicodeString @ 0x140932190 (RtlDuplicateUnicodeString.c)
 *     FsRtlReleaseFileNameInformation @ 0x1409F5600 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall EtwpCovSampModuleGetName(__int64 a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  NTSTATUS v6; // edi
  wchar_t *Buffer; // rcx
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+40h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 48);
  v10 = 0LL;
  StringOut = 0LL;
  if ( v4 && FltMgrCallbacks && (int)guard_dispatch_icall_no_overrides(v4) >= 0 )
  {
    v6 = 0;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v10 + 1);
    *(_WORD *)(a1 + 120) = (unsigned __int16)v10 >> 1;
    *(_QWORD *)(a1 + 104) = 1LL;
  }
  else if ( a3 && a3->Length )
  {
    v6 = RtlDuplicateUnicodeString(0, a3, &StringOut);
    if ( v6 >= 0 )
    {
      Buffer = StringOut.Buffer;
      v6 = 0;
      *(_WORD *)(a1 + 120) = StringOut.Length >> 1;
      *(_QWORD *)(a1 + 112) = Buffer;
      *(_QWORD *)(a1 + 104) = Buffer;
      StringOut = 0LL;
    }
  }
  else
  {
    v6 = -1073741275;
  }
  if ( StringOut.Buffer )
    ExFreePool(StringOut.Buffer);
  return (unsigned int)v6;
}
