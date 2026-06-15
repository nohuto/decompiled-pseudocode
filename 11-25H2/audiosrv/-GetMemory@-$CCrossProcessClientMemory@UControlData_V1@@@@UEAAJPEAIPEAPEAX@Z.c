/*
 * XREFs of ?GetMemory@?$CCrossProcessClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A5F68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800C3890 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x18015E3E4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessClientMemory<ControlData_V1>::GetMemory(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  void *v9; // rcx
  LPVOID v10; // rax
  const char *v11; // r9
  const void *v12; // rbp
  __int64 v13; // rdx
  unsigned int v14; // eax
  SIZE_T dwNumberOfBytesToMap; // r14
  void *v16; // rax
  void *v17; // rbp
  unsigned int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a3 )
  {
    v6 = 44LL;
LABEL_3:
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a2 )
  {
    v6 = 45LL;
    goto LABEL_3;
  }
  *a3 = 0LL;
  *a2 = 0;
  v9 = *(void **)(a1 + 16);
  if ( (((unsigned __int64)v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2147467261;
    v6 = 52LL;
    goto LABEL_4;
  }
  v10 = MapViewOfFile(v9, 0xF001Fu, 0, 0, 0x190uLL);
  v12 = v10;
  if ( !v10 )
  {
    v13 = 56LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v13,
             (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
             v11);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)a1 + 72LL))(a1, v10);
  dwNumberOfBytesToMap = v14;
  if ( !v14 )
  {
    v7 = -2005139387;
    v6 = 60LL;
    goto LABEL_4;
  }
  UnmapViewOfFile(v12);
  v16 = MapViewOfFile(*(HANDLE *)(a1 + 16), 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
  v17 = v16;
  if ( !v16 )
  {
    v13 = 65LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v13,
             (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
             v11);
  }
  v18 = AERTLockMemory(v16, dwNumberOfBytesToMap);
  wil::details::in1diag3::Log_IfFailedWithExpected(
    retaddr,
    (void *)0x46,
    (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
    (const char *)v18,
    1u,
    0x80070522);
  *(_QWORD *)(a1 + 32) = v17;
  *(_DWORD *)(a1 + 24) = dwNumberOfBytesToMap;
  *a2 = dwNumberOfBytesToMap;
  *a3 = *(_QWORD *)(a1 + 32);
  return 0LL;
}
