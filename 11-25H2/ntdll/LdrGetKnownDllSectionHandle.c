/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x18010CBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     NtOpenSection @ 0x180163900 (NtOpenSection.c)
 */

__int64 __fastcall LdrGetKnownDllSectionHandle(const wchar_t *a1, char a2, __int64 a3)
{
  __int64 v6; // rdi
  int inited; // ebx
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]
  __int128 v12; // [rsp+60h] [rbp-10h]

  *(_QWORD *)&v12 = 0LL;
  DWORD2(v12) = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    5578,
    (__int64)"LdrGetKnownDllSectionHandle",
    3,
    "DLL name: %ws\n",
    (char)a1);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    5579,
    (__int64)"LdrGetKnownDllSectionHandle",
    5,
    "%ws\n",
    (char)a1);
  if ( a2 )
    return 3221225485LL;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx((__int64)&v9, a1);
    if ( inited >= 0 )
    {
      LODWORD(v10) = 48;
      *(_QWORD *)&v11 = &v9;
      *((_QWORD *)&v10 + 1) = v6;
      DWORD2(v11) = 64;
      v12 = 0LL;
      inited = NtOpenSection(a3, 13LL, &v10);
    }
  }
  else
  {
    inited = -1073741816;
  }
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    5608,
    (__int64)"LdrGetKnownDllSectionHandle",
    4,
    "Status: 0x%08lx\n",
    inited);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrapi.c", 5609, (__int64)"LdrGetKnownDllSectionHandle", 6, "%x\n", inited);
  return (unsigned int)inited;
}
