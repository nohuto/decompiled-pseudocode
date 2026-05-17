/*
 * XREFs of LdrpFindKnownDll @ 0x18006D200
 * Callers:
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateUnicodeString @ 0x180071000 (LdrpAllocateUnicodeString.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenSection @ 0x180163900 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  const wchar_t *v11; // rbx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v14 = 0LL;
  DWORD2(v14) = 0;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1805, (int)"LdrpFindKnownDll", 3, "DLL name: %wZ\n", (char)a1);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1806, (int)"LdrpFindKnownDll", 5, "%wZ\n", (char)a1);
  if ( !LdrpKnownDllDirectoryHandle )
    goto LABEL_4;
  LODWORD(v12) = 48;
  *((_QWORD *)&v12 + 1) = LdrpKnownDllDirectoryHandle;
  DWORD2(v13) = 64;
  *(_QWORD *)&v13 = a1;
  v14 = 0LL;
  v8 = NtOpenSection(a4, 13LL, &v12);
  UnicodeString = v8;
  if ( v8 >= 0 )
  {
    UnicodeString = LdrpAllocateUnicodeString(a3, *a1 + (unsigned int)(unsigned __int16)LdrpKnownDllPath + 2);
    if ( UnicodeString < 0 )
    {
      NtClose(*a4);
    }
    else
    {
      RtlAppendUnicodeStringToString(a3, &LdrpKnownDllPath);
      RtlAppendUnicodeToString(a3, L"\\");
      v11 = (const wchar_t *)(*((_QWORD *)a3 + 1) + *a3);
      RtlAppendUnicodeStringToString(a3, a1);
      RtlInitUnicodeStringEx(a2, v11);
      UnicodeString = 0;
    }
  }
  else if ( v8 == -1073741772 )
  {
LABEL_4:
    UnicodeString = -1073741515;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1876, (int)"LdrpFindKnownDll", 4, "Status: 0x%08lx\n", UnicodeString);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1877, (int)"LdrpFindKnownDll", 6, "%x\n", UnicodeString);
  return (unsigned int)UnicodeString;
}
