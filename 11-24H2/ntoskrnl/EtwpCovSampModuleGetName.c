/*
 * XREFs of EtwpCovSampModuleGetName @ 0x140A428E0
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140901050 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlDuplicateUnicodeString @ 0x140926680 (RtlDuplicateUnicodeString.c)
 *     FsRtlReleaseFileNameInformation @ 0x140A13E20 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall EtwpCovSampModuleGetName(__int64 a1, __int64 a2, const UNICODE_STRING *a3, __int64 a4)
{
  __int64 v5; // rcx
  NTSTATUS v7; // edi
  wchar_t *Buffer; // rcx
  __int64 v10; // rax
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  v13 = 0LL;
  v12 = 0LL;
  StringOut = 0LL;
  if ( v5 && FltMgrCallbacks && (int)guard_dispatch_icall_no_overrides(v5, 512LL, &v12, &v13) >= 0 )
  {
    v7 = 0;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v12 + 1);
    *(_WORD *)(a1 + 120) = (unsigned __int16)v12 >> 1;
    v10 = v13 | 1;
    v13 = 0LL;
    *(_QWORD *)(a1 + 104) = v10;
  }
  else
  {
    if ( a3 && a3->Length )
    {
      v7 = RtlDuplicateUnicodeString(0, a3, &StringOut);
      if ( v7 >= 0 )
      {
        Buffer = StringOut.Buffer;
        v7 = 0;
        *(_WORD *)(a1 + 120) = StringOut.Length >> 1;
        *(_QWORD *)(a1 + 112) = Buffer;
        *(_QWORD *)(a1 + 104) = Buffer;
        StringOut = 0LL;
      }
    }
    else
    {
      v7 = -1073741275;
    }
    if ( v13 )
      FsRtlReleaseFileNameInformation(v13, a2, (__int64)a3, a4);
  }
  if ( StringOut.Buffer )
    ExFreePool(StringOut.Buffer);
  return (unsigned int)v7;
}
