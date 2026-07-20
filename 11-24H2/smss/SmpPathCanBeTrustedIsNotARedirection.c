/*
 * XREFs of SmpPathCanBeTrustedIsNotARedirection @ 0x140017580
 * Callers:
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     SmpForceDeleteTargetFile @ 0x140014C44 (SmpForceDeleteTargetFile.c)
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 * Callees:
 *     GetFinalPathNameByHandleW @ 0x14001B934 (GetFinalPathNameByHandleW.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

bool __fastcall SmpPathCanBeTrustedIsNotARedirection(HANDLE Handle, unsigned __int16 *a2, int a3)
{
  wchar_t *v6; // rdi
  bool v7; // r14
  unsigned int FinalPathNameByHandleW; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  const WCHAR *v11; // r8
  wchar_t *Heap; // rax
  __int16 v13; // cx
  __int64 v14; // rdx
  wchar_t pszDest; // [rsp+30h] [rbp-248h] BYREF
  char v17; // [rsp+38h] [rbp-240h] BYREF

  v6 = 0LL;
  v7 = 0;
  if ( *a2 >= 0xCu )
  {
    FinalPathNameByHandleW = GetFinalPathNameByHandleW(Handle, &pszDest);
    v9 = FinalPathNameByHandleW;
    if ( FinalPathNameByHandleW )
    {
      v10 = FinalPathNameByHandleW + 2;
      if ( v10 > 0x106 )
      {
        Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 2LL * v10);
        v6 = Heap;
        if ( !Heap )
          return v7;
        v9 = GetFinalPathNameByHandleW(Handle, Heap);
        if ( !v9 )
        {
LABEL_15:
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v6);
          return v7;
        }
        v11 = v6 + 4;
      }
      else
      {
        v11 = (const WCHAR *)&v17;
      }
      if ( *a2 >= (unsigned __int64)(2LL * (int)v9) )
      {
        if ( a3 && v9 > 7 )
        {
          v13 = 92;
          v14 = v9 - 4;
          v11[v9 - 3] = 0;
          ++v9;
        }
        else
        {
          v13 = 0;
          v14 = v9 - 4;
        }
        v11[v14] = v13;
        v7 = RtlCompareUnicodeStrings((PCWCH)(*((_QWORD *)a2 + 1) + 8LL), v9 - 3, v11, v9 - 3, 1u) == 0;
      }
      if ( v6 )
        goto LABEL_15;
    }
  }
  return v7;
}
