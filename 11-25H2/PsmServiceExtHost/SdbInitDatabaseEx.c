/*
 * XREFs of SdbInitDatabaseEx @ 0x180094584
 * Callers:
 *     SdbInitDatabase @ 0x18009453C (SdbInitDatabase.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x180091E98 (SdbCloseDatabaseRead.c)
 *     SdbGetMergeStubPath @ 0x1800922C4 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x180094A10 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbGetPathSystemSdb @ 0x180095BA4 (SdbGetPathSystemSdb.c)
 *     SdbpInitializeMatchers @ 0x18009B54C (SdbpInitializeMatchers.c)
 *     ShimExceptionHandler @ 0x18009BD2C (ShimExceptionHandler.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

_WORD *__fastcall SdbInitDatabaseEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v4; // ebx
  _WORD *Heap; // rax
  __int64 v6; // rdx
  _WORD *v7; // rdi
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // r14
  __int64 v12; // rax
  int MergeStubPath; // eax
  __int64 v14; // rdx
  const wchar_t ***v15; // rax
  const wchar_t **v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+38h] [rbp-390h] BYREF
  __int64 v21; // [rsp+40h] [rbp-388h] BYREF
  int v22; // [rsp+48h] [rbp-380h]
  _WORD *v23; // [rsp+50h] [rbp-378h]
  _WORD *v24; // [rsp+58h] [rbp-370h]
  _WORD *v25; // [rsp+60h] [rbp-368h]
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-358h] BYREF
  char v27; // [rsp+18Ah] [rbp-23Eh]
  wchar_t String2; // [rsp+190h] [rbp-238h] BYREF
  char v29[526]; // [rsp+192h] [rbp-236h] BYREF

  v4 = 0;
  String2 = 0;
  memset_0(v29, 0, 0x206uLL);
  v21 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x6F8uLL);
  v7 = Heap;
  v23 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  Heap[292] = a3;
  v20 = a3;
  if ( (unsigned int)SdbGetPathSystemSdb(&String2, v6, 1LL, &v20) )
  {
    v10 = 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
    v10 = -1073741823;
  }
  if ( v10 < 0 )
  {
    AslLogCallPrintf(1LL);
    v11 = (__int64 *)(v7 + 4);
LABEL_20:
    if ( *v11 )
      SdbCloseDatabaseRead(*v11);
    v19 = *((_QWORD *)v7 + 2);
    if ( v19 )
      SdbCloseDatabaseRead(v19);
    AslFree(NtCurrentPeb()->ProcessHeap, v7);
    if ( v21 )
      AslFree(NtCurrentPeb()->ProcessHeap, v21);
    return 0LL;
  }
  v22 = 0;
  *((_QWORD *)v7 + 1) = SdbOpenDatabaseEx((__int64)&String2, v9, 0);
  v11 = (__int64 *)(v7 + 4);
  v25 = v7 + 4;
  v12 = *((_QWORD *)v7 + 1);
  if ( !v12 )
    goto LABEL_19;
  *((_QWORD *)v7 + 7) = v12;
  *((_DWORD *)v7 + 16) = 3;
  *(_OWORD *)(v7 + 20) = *(_OWORD *)(v12 + 28);
  v24 = v7 + 18;
  *((_DWORD *)v7 + 9) |= 1u;
  MergeStubPath = SdbGetMergeStubPath(&v21, (__int64)&String2);
  if ( MergeStubPath == -1073741772 )
  {
LABEL_27:
    *((_QWORD *)v7 + 2) = 0LL;
    goto LABEL_28;
  }
  if ( MergeStubPath < 0 )
  {
LABEL_19:
    AslLogCallPrintf(1LL);
    goto LABEL_20;
  }
  v15 = (const wchar_t ***)*v11;
  if ( *v11 && (v16 = *v15) != 0LL && *v16 && _wcsicmp(*v16, &String2) != 0 )
    goto LABEL_27;
  v22 = 0;
  *((_QWORD *)v7 + 2) = SdbOpenDatabaseEx(v21, v14, 0);
  v18 = *((_QWORD *)v7 + 2);
  if ( !v18 )
    goto LABEL_19;
  *((_QWORD *)v7 + 15) = v18;
  *((_DWORD *)v7 + 32) = 3;
  *(_OWORD *)(v7 + 52) = *(_OWORD *)(v18 + 28);
  *((_DWORD *)v7 + 9) |= 4u;
LABEL_28:
  if ( v21 )
    AslFree(NtCurrentPeb()->ProcessHeap, v21);
  SdbpInitializeMatchers(v7);
  *((_DWORD *)v7 + 138) = SdbpGetBinaryRuntimePlatform(a3);
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  LOBYTE(v4) = v27 != 1;
  *((_DWORD *)v7 + 142) = v4 + 1;
  return v7;
}
