/*
 * XREFs of RtlpValidLabelSubjectContext @ 0x1800E831C
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x1800DD780 (RtlSidDominates.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x180165A50 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall RtlpValidLabelSubjectContext(__int64 a1, char *a2, char a3, int *a4)
{
  char *v6; // rbx
  int v8; // eax
  char *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  _BYTE v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  _DWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h]
  int v19; // [rsp+50h] [rbp-B0h]
  _DWORD Buf2[20]; // [rsp+60h] [rbp-A0h] BYREF
  void *Buf1; // [rsp+B0h] [rbp-50h] BYREF

  v15 = 0;
  v14[0] = 0;
  Buf2[0] = 257;
  Buf2[1] = 0x10000000;
  Buf2[2] = 0x2000;
  v6 = (char *)Buf2;
  if ( a2 )
    v6 = a2;
  v8 = NtQueryInformationToken(a1, 25LL, &Buf1, 84LL, &v15);
  *a4 = v8;
  if ( v8 < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(v6, (char *)Buf2, v14) < 0 )
      return 0;
    v9 = v6;
    v6 = (char *)Buf2;
    if ( v14[0] )
      v6 = v9;
  }
  v10 = RtlSidDominates((char *)Buf1, v6, v14);
  *a4 = v10;
  if ( v10 < 0 )
    return 0;
  if ( !v14[0] )
  {
    v19 = 0;
    v16 = 32LL;
    v18 = 32LL;
    v17[0] = 1;
    v17[1] = 1;
    if ( !((int)ZwPrivilegeCheck(a1, v17, v14, v11) >= 0 ? v14[0] : 0) )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
