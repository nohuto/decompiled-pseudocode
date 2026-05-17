/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x180135520
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x180165A50 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(int a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, int *a6)
{
  unsigned int v6; // edi
  __int64 v10; // r12
  __int64 v11; // r9
  int v12; // ebx
  int v13; // eax
  char v14; // cl
  __int64 result; // rax
  _BYTE v16[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h]
  int v18; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v20; // [rsp+50h] [rbp-39h]
  int v21; // [rsp+58h] [rbp-31h]
  _OWORD v22[3]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v23; // [rsp+90h] [rbp+7h]

  v6 = 0;
  v16[0] = 0;
  v23 = 0LL;
  v18 = 0;
  v10 = -5LL;
  if ( a4 )
    v10 = a4;
  memset(v22, 0, sizeof(v22));
  NtQueryInformationToken(v10, 10LL, v22, 56LL, &v18);
  if ( a1 < 0 )
    a1 |= *a5;
  if ( (a1 & 0x40000000) != 0 )
    a1 |= a5[1];
  if ( (a1 & 0x20000000) != 0 )
    a1 |= a5[2];
  if ( (a1 & 0x10000000) != 0 )
    a1 |= a5[3];
  v12 = a1 & 0xFFFFFFF;
  *a6 = v12;
  if ( (v12 & 0x1000000) != 0 )
  {
    v17 = 8LL;
    v20 = 8LL;
    v19[0] = 1;
    v19[1] = 1;
    v21 = 0;
    v13 = ZwPrivilegeCheck(v10, v19, v16, v11);
    v14 = v16[0];
    if ( (v13 < 0 || !v16[0]) && !v16[0] )
      return 3221225569LL;
    *a6 &= ~0x1000000u;
  }
  else
  {
    v14 = v16[0];
  }
  if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    if ( v14 )
    {
      *(_DWORD *)a2 = 1;
      v6 = 0x80000000;
      v17 = 8LL;
    }
    else
    {
      *(_DWORD *)a2 = 0;
      v17 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v17;
    result = 0LL;
    *(_DWORD *)(a2 + 16) = v6;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
  return result;
}
