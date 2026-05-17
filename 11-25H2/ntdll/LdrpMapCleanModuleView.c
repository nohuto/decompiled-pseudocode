/*
 * XREFs of LdrpMapCleanModuleView @ 0x180160F8C
 * Callers:
 *     LdrpGetImportDescriptorForSnap @ 0x180020E7C (LdrpGetImportDescriptorForSnap.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 */

__int64 __fastcall LdrpMapCleanModuleView(__int64 a1)
{
  NTSTATUS v2; // ebx
  HANDLE ProcessInformation; // [rsp+60h] [rbp+8h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  ProcessInformation = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 56) == LdrpImageEntry )
  {
    v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)89, &ProcessInformation, 8u, 0LL);
    if ( v2 >= 0 )
    {
      v2 = ZwMapViewOfSection(ProcessInformation, -1LL, &v5, 0LL, 0LL, 0LL, &v6, 1, 0x40000, 2);
      if ( v2 >= 0 )
        *(_QWORD *)(a1 + 192) = v5;
      NtClose(ProcessInformation);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
