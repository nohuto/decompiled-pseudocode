/*
 * XREFs of LdrpFindKnownDll @ 0x180074D50
 * Callers:
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateUnicodeString @ 0x1800760E0 (LdrpAllocateUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenSection @ 0x180162370 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  __int64 v11; // rbx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v14 = 0LL;
  DWORD2(v14) = 0;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrmap.c",
    1795,
    (__int64)"LdrpFindKnownDll",
    3,
    "DLL name: %wZ\n",
    (char)a1);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 1796, (__int64)"LdrpFindKnownDll", 5, "%wZ\n", (char)a1);
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
      v11 = *((_QWORD *)a3 + 1) + *a3;
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
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrmap.c",
    1866,
    (__int64)"LdrpFindKnownDll",
    4,
    "Status: 0x%08lx\n",
    UnicodeString);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 1867, (__int64)"LdrpFindKnownDll", 6, "%x\n", UnicodeString);
  return (unsigned int)UnicodeString;
}
