/*
 * XREFs of ?GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z @ 0x1400430B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCrossProcessServerMemory::GetMemory(CCrossProcessServerMemory *this, unsigned int *a2, void **a3)
{
  void *v5; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  LPVOID v10; // rax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (void *)*((_QWORD *)this + 2);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2147467261;
    v8 = 82LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v7 = -2147467259;
    v8 = 85LL;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 4) )
    goto LABEL_8;
  v10 = MapViewOfFile(v5, 0xF001Fu, 0, 0, *((unsigned int *)this + 6));
  if ( v10 )
  {
    *((_QWORD *)this + 4) = v10;
LABEL_8:
    *a2 = *((_DWORD *)this + 6);
    *a3 = (void *)*((_QWORD *)this + 4);
    return 0LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x5D,
           (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
           v11);
}
