/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x180099350
 * Callers:
 *     RtlDestroyQueryDebugBuffer @ 0x180098820 (RtlDestroyQueryDebugBuffer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcess @ 0x1801636E0 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall RtlpChangeQueryDebugBufferTarget(__int64 a1, void *a2, int a3, HANDLE *a4)
{
  void *v4; // rax
  __int64 v5; // rdi
  __int64 v10; // rcx
  PVOID *v11; // rsi
  __int128 v12; // xmm0
  _OWORD *v13; // rbx
  NTSTATUS result; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // esi
  NTSTATUS v17; // r14d
  HANDLE v18; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-29h] BYREF
  _CLIENT_ID ClientId; // [rsp+70h] [rbp-21h] BYREF
  _CLIENT_ID v23; // [rsp+80h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1h] BYREF
  HANDLE ProcessHandle; // [rsp+F8h] [rbp+67h] BYREF

  v4 = *(void **)(a1 + 48);
  v5 = a1 + *(_QWORD *)(a1 + 88);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ProcessHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  ClientId = 0LL;
  v23 = 0LL;
  if ( v4 )
  {
    ClientId.UniqueProcess = v4;
    ClientId.UniqueThread = 0LL;
    result = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    if ( result < 0 )
      return result;
    v10 = (__int64)ProcessHandle;
  }
  else
  {
    v10 = -1LL;
    ProcessHandle = (HANDLE)-1LL;
  }
  if ( a2
    && (v23.UniqueProcess = a2,
        v23.UniqueThread = 0LL,
        v15 = NtOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &v23),
        v10 = (__int64)ProcessHandle,
        v16 = v15,
        v15 < 0) )
  {
    if ( ProcessHandle != (HANDLE)-1LL )
      NtClose(ProcessHandle);
    return v16;
  }
  else
  {
    v11 = (PVOID *)(a1 + 16);
    if ( v10 == -1 )
    {
      *v11 = (PVOID)(*(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 8));
    }
    else
    {
      if ( *v11 )
      {
        NtUnmapViewOfSection((HANDLE)v10, *v11);
        v10 = (__int64)ProcessHandle;
        *v11 = 0LL;
      }
      NtClose((HANDLE)v10);
    }
    ViewSize = *(_QWORD *)(a1 + 88);
    SectionOffset.QuadPart = ViewSize;
    if ( Handle )
    {
      v17 = ZwMapViewOfSection(
              *(HANDLE *)a1,
              Handle,
              (PVOID *)(a1 + 16),
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
      if ( v17 == -1073741800 )
      {
        v18 = Handle;
        *v11 = 0LL;
        v17 = ZwMapViewOfSection(
                *(HANDLE *)a1,
                v18,
                (PVOID *)(a1 + 16),
                0LL,
                0LL,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                4u);
      }
      if ( v17 < 0 )
      {
        NtClose(Handle);
        return v17;
      }
      if ( a4 )
        *a4 = Handle;
      else
        NtClose(Handle);
    }
    *(_QWORD *)(a1 + 48) = a2;
    *(_QWORD *)(a1 + 24) = a1 - (_QWORD)*v11;
    if ( a3 == 1 )
    {
      *(_DWORD *)v5 = 0;
      *(_DWORD *)(v5 + 4) = *(_DWORD *)v11;
      *(_DWORD *)(v5 + 8) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(v5 + 12) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v5 + 20) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v5 + 36) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v5 + 44) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v5 + 80) = *(_DWORD *)(a1 + 160);
    }
    else
    {
      *(_OWORD *)v5 = *(_OWORD *)a1;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v5 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v5 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(v5 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(v5 + 96) = *(_OWORD *)(a1 + 96);
      v12 = *(_OWORD *)(a1 + 112);
      v13 = (_OWORD *)(a1 + 128);
      *(_OWORD *)(v5 + 112) = v12;
      *(_OWORD *)(v5 + 128) = *v13;
      *(_OWORD *)(v5 + 144) = v13[1];
      *(_OWORD *)(v5 + 160) = v13[2];
      *(_OWORD *)(v5 + 176) = v13[3];
      *(_OWORD *)(v5 + 192) = v13[4];
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 16);
      *(_QWORD *)v5 = 0LL;
    }
    return 0;
  }
}
