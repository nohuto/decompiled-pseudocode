/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x1409E62A0
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE4930 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 SessionById; // rax
  __int64 v12; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  v5 = (_QWORD *)a4;
  LOBYTE(a4) = a3;
  if ( !a2 )
  {
    *v5 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v7 = a1 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v9 = SeCaptureSid(a2, a3, a3, a4, Tag, 0, (PSID *)a5);
      if ( v9 >= 0 )
        *v5 = *(_QWORD *)a5;
      return (unsigned int)v9;
    }
    if ( v8 == 1 )
    {
      v9 = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)a2,
             0,
             (__int64)PsProcessType,
             a3,
             0x20666E57u,
             (_QWORD *)a5,
             0LL,
             0LL);
      if ( v9 >= 0 )
        *v5 = a5;
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)a3 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v10 = *(_DWORD *)v12;
  }
  else
  {
    v10 = *(_DWORD *)a2;
  }
  *(_DWORD *)(a5 + 8) = v10;
  SessionById = PsGetSessionById(v10);
  *(_QWORD *)a5 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *v5 = a5 + 8;
  return 0;
}
