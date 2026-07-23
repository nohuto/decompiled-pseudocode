/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x140860E10
 * Callers:
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     MmIsFileMapped @ 0x140860F44 (MmIsFileMapped.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned __int64 *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v12; // rax
  char v13; // si
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v6 = (unsigned __int64 *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  v16 = 0LL;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    NextProcess = PsGetNextProcess(i);
    v11 = (struct _EX_RUNDOWN_REF *)NextProcess;
    if ( !NextProcess )
      break;
    v12 = ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      LOBYTE(v16) = v11 == (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(v12, IopIsFileOpenOrSection, &v15, 0LL);
      ExReleaseRundownProtection_0(v11 + 61);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)MmIsFileMapped(v11, a1) )
    {
      if ( v8 < v7 )
      {
        *v6 = v11[58].Count;
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
