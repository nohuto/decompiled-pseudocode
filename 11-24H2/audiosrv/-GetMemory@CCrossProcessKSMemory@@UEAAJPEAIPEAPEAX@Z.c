/*
 * XREFs of ?GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z @ 0x180165D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180167AA4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall CCrossProcessKSMemory::GetMemory(CCrossProcessKSMemory *this, unsigned int *a2, void **a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  void *v9; // rcx
  unsigned int *v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  SIZE_T dwNumberOfBytesToMap; // rbp
  void *v14; // rax
  void *v15; // r14
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a3 )
  {
    v6 = 28LL;
LABEL_3:
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a2 )
  {
    v6 = 29LL;
    goto LABEL_3;
  }
  *a3 = 0LL;
  *a2 = 0;
  v9 = (void *)*((_QWORD *)this + 2);
  if ( (((unsigned __int64)v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2147467261;
    v6 = 36LL;
    goto LABEL_4;
  }
  v10 = (unsigned int *)MapViewOfFile(v9, 0xF001Fu, 0, 0, 0x58uLL);
  if ( !v10 )
  {
    v12 = 47LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
             v11);
  }
  dwNumberOfBytesToMap = *v10;
  UnmapViewOfFile(v10);
  v14 = MapViewOfFile(*((HANDLE *)this + 2), 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
  v15 = v14;
  if ( !v14 )
  {
    v12 = 60LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
             v11);
  }
  v16 = AERTLockMemory(v14, dwNumberOfBytesToMap);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      64LL,
      (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
      (const char *)(unsigned int)v16);
  *((_QWORD *)this + 4) = v15;
  *((_DWORD *)this + 6) = dwNumberOfBytesToMap;
  *a2 = dwNumberOfBytesToMap;
  *a3 = (void *)*((_QWORD *)this + 4);
  return 0LL;
}
