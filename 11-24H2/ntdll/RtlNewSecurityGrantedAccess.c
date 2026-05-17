/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x180133A40
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1801644C0 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(int a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, int *a6)
{
  unsigned int v6; // edi
  __int64 v10; // r12
  int v11; // ebx
  int v12; // eax
  char v13; // cl
  __int64 result; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h]
  int v17; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v19; // [rsp+50h] [rbp-39h]
  int v20; // [rsp+58h] [rbp-31h]
  _OWORD v21[3]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+90h] [rbp+7h]

  v6 = 0;
  v15[0] = 0;
  v22 = 0LL;
  v17 = 0;
  v10 = -5LL;
  if ( a4 )
    v10 = a4;
  memset(v21, 0, sizeof(v21));
  NtQueryInformationToken(v10, 10LL, v21, 56LL, &v17);
  if ( a1 < 0 )
    a1 |= *a5;
  if ( (a1 & 0x40000000) != 0 )
    a1 |= a5[1];
  if ( (a1 & 0x20000000) != 0 )
    a1 |= a5[2];
  if ( (a1 & 0x10000000) != 0 )
    a1 |= a5[3];
  v11 = a1 & 0xFFFFFFF;
  *a6 = v11;
  if ( (v11 & 0x1000000) != 0 )
  {
    v16 = 8LL;
    v19 = 8LL;
    v18[0] = 1;
    v18[1] = 1;
    v20 = 0;
    v12 = ZwPrivilegeCheck(v10, v18, v15);
    v13 = v15[0];
    if ( (v12 < 0 || !v15[0]) && !v15[0] )
      return 3221225569LL;
    *a6 &= ~0x1000000u;
  }
  else
  {
    v13 = v15[0];
  }
  if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    if ( v13 )
    {
      *(_DWORD *)a2 = 1;
      v6 = 0x80000000;
      v16 = 8LL;
    }
    else
    {
      *(_DWORD *)a2 = 0;
      v16 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v16;
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
