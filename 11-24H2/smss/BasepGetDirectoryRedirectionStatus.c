/*
 * XREFs of BasepGetDirectoryRedirectionStatus @ 0x14001D3E0
 * Callers:
 *     CreateFileInternal @ 0x14001C20C (CreateFileInternal.c)
 * Callees:
 *     BasepGetFileRedirectionStatus @ 0x14001D50C (BasepGetFileRedirectionStatus.c)
 *     RtlStringCchCopyW @ 0x14001D9D4 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x14001DA14 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall BasepGetDirectoryRedirectionStatus(NTSTRSAFE_PCWSTR pszSrc, __int64 a2)
{
  wchar_t *v3; // rsi
  NTSTATUS result; // eax
  size_t v6; // rdi
  NTSTRSAFE_PCWSTR v7; // r11
  wchar_t *p_pszDest; // r11
  wchar_t *Heap; // rax
  NTSTATUS FileRedirectionStatus; // ebx
  size_t pcchLength[2]; // [rsp+20h] [rbp-258h] BYREF
  wchar_t pszDest; // [rsp+30h] [rbp-248h] BYREF

  pcchLength[0] = 0LL;
  v3 = 0LL;
  result = RtlStringCchLengthW(pszSrc, 0x7FFFFFFFuLL, pcchLength);
  if ( result >= 0 )
  {
    v6 = pcchLength[0];
    if ( pszSrc[pcchLength[0] - 1] == 92 )
    {
      v7 = pszSrc;
    }
    else
    {
      p_pszDest = &pszDest;
      if ( pcchLength[0] + 2 > 0x104 )
      {
        Heap = (wchar_t *)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            0,
                            2 * (pcchLength[0] + 2));
        p_pszDest = Heap;
        if ( !Heap )
          return -1073741801;
        v3 = Heap;
      }
      FileRedirectionStatus = RtlStringCchCopyW(p_pszDest, v6 + 2, pszSrc);
      if ( FileRedirectionStatus < 0 )
      {
LABEL_11:
        if ( v3 )
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
        return FileRedirectionStatus;
      }
      *(_DWORD *)&v7[v6] = 92;
    }
    FileRedirectionStatus = BasepGetFileRedirectionStatus(v7, a2);
    goto LABEL_11;
  }
  return result;
}
