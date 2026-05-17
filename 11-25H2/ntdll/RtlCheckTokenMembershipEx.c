/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1800601A0
 * Callers:
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18008FD38 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x1800F2480 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 *     RtlInitializeSidEx @ 0x180060720 (RtlInitializeSidEx.c)
 *     ZwAccessCheck @ 0x180163220 (ZwAccessCheck.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x180163800 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180163820 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180163A60 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, unsigned __int8 *a2, int a3, _BYTE *a4)
{
  char v8; // si
  __int16 v9; // ax
  char v10; // di
  _BYTE *v11; // rcx
  unsigned int i; // r8d
  unsigned __int16 v13; // r8
  char v14; // bl
  _BYTE *v15; // rdx
  unsigned int j; // r8d
  _BYTE *v17; // r8
  int v18; // r9d
  unsigned __int16 v19; // cx
  int v20; // edi
  _BYTE *v22; // rdx
  unsigned int k; // r8d
  int v24; // r9d
  unsigned __int16 v25; // cx
  HANDLE *p_Handle; // [rsp+20h] [rbp-E0h]
  HANDLE *v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int64 *v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+88h] [rbp-78h] BYREF
  __int128 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v43[232]; // [rsp+D8h] [rbp-28h] BYREF
  char Src; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int8 v45; // [rsp+1C1h] [rbp+C1h]
  _BYTE v46[56]; // [rsp+210h] [rbp+110h] BYREF

  v30 = 0;
  v29 = 0;
  memset_thunk_772440563353939046(&Src, 0, 0x44uLL);
  memset_thunk_772440563353939046(&v42, 0, 0xECuLL);
  Handle = 0LL;
  v38 = 0LL;
  LODWORD(v39) = 0;
  v28 = 0;
  v40 = 0LL;
  v41 = 0;
  v35 = 0LL;
  v32 = 0LL;
  *a4 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v8 = 2;
    if ( a1 )
    {
      Handle = a1;
    }
    else
    {
      p_Handle = &Handle;
      v20 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v20 == -1073741700 )
      {
        v20 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &v32);
        if ( v20 < 0 )
          goto LABEL_54;
        v39 = &v40;
        LODWORD(v36) = 48;
        v27 = &Handle;
        *((_QWORD *)&v36 + 1) = 0LL;
        DWORD2(v37) = 0;
        *(_QWORD *)&v37 = 0LL;
        v38 = 0LL;
        v40 = 0x20000000CLL;
        LOWORD(v41) = 1;
        v20 = NtDuplicateToken(v32, 12LL, &v36);
        NtClose(v32);
      }
      if ( v20 < 0 )
        goto LABEL_54;
    }
    LOBYTE(v33) = 1;
    if ( (SWORD1(v33) & 0x8000u) == 0 )
    {
      *((_QWORD *)&v33 + 1) = 0LL;
      if ( a2 )
        *((_QWORD *)&v33 + 1) = a2;
      v9 = WORD1(v33) & 0xFFFE;
      WORD1(v33) = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)&v34 = 0LL;
        if ( a2 )
          *(_QWORD *)&v34 = a2;
        WORD1(v33) = v9 & 0xFFFD;
      }
    }
    v42 = 15466498LL;
    if ( RtlValidSid(a2) && (unsigned __int8)v42 <= 4u )
    {
      v10 = 2;
      if ( (unsigned __int8)v42 > 2u )
        v10 = v42;
      if ( RtlValidAcl((__int64)&v42) )
      {
        v11 = v43;
        for ( i = 0; i < WORD2(v42); ++i )
        {
          if ( v11 >= &v43[WORD1(v42) - 8] )
            goto LABEL_25;
          v11 += *((unsigned __int16 *)v11 + 1);
        }
        if ( v11 > &v43[WORD1(v42) - 8] )
          v11 = 0LL;
        v13 = 4 * (a2[1] + 4);
        if ( v11 && &v11[v13] <= &v43[WORD1(v42) - 8] )
        {
          *((_WORD *)v11 + 1) = v13;
          *(_WORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 1;
          memmove(v11 + 8, a2, 4LL * a2[1] + 8);
          ++WORD2(v42);
          LOBYTE(v42) = v10;
        }
      }
    }
LABEL_25:
    if ( (a3 & 3) != 0 )
    {
      LODWORD(p_Handle) = 1;
      RtlInitializeSidEx(&Src, &RtlpAppPackageAuthority, 2LL, 2LL, p_Handle, v27);
      if ( RtlValidSid(&Src) && (unsigned __int8)v42 <= 4u )
      {
        v14 = 2;
        if ( (unsigned __int8)v42 > 2u )
          v14 = v42;
        if ( RtlValidAcl((__int64)&v42) )
        {
          v15 = v43;
          for ( j = 0; j < WORD2(v42); ++j )
          {
            if ( v15 >= &v43[WORD1(v42) - 8] )
              goto LABEL_40;
            v15 += *((unsigned __int16 *)v15 + 1);
          }
          v17 = &v43[WORD1(v42) - 8];
          v18 = v45;
          if ( v15 > v17 )
            v15 = 0LL;
          v19 = 4 * (v45 + 4);
          if ( v15 && &v15[v19] <= v17 )
          {
            *((_WORD *)v15 + 1) = v19;
            *(_WORD *)v15 = 0;
            *((_DWORD *)v15 + 1) = 1;
            memmove(v15 + 8, &Src, (unsigned int)(4 * v18 + 8));
            ++WORD2(v42);
            LOBYTE(v42) = v14;
          }
        }
      }
    }
LABEL_40:
    if ( (a3 & 2) != 0 )
    {
      LODWORD(p_Handle) = 2;
      RtlInitializeSidEx(&Src, &RtlpAppPackageAuthority, 2LL, 2LL, p_Handle, v27);
      if ( RtlValidSid(&Src) && (unsigned __int8)v42 <= 4u )
      {
        if ( (unsigned __int8)v42 > 2u )
          v8 = v42;
        if ( RtlValidAcl((__int64)&v42) )
        {
          v22 = v43;
          for ( k = 0; k < WORD2(v42); ++k )
          {
            if ( v22 >= &v43[WORD1(v42) - 8] )
              goto LABEL_41;
            v22 += *((unsigned __int16 *)v22 + 1);
          }
          v24 = v45;
          if ( v22 > &v43[WORD1(v42) - 8] )
            v22 = 0LL;
          v25 = 4 * (v45 + 4);
          if ( v22 && &v22[v25] <= &v43[WORD1(v42) - 8] )
          {
            *((_WORD *)v22 + 1) = v25;
            *(_WORD *)v22 = 0;
            *((_DWORD *)v22 + 1) = 1;
            memmove(v22 + 8, &Src, (unsigned int)(4 * v24 + 8));
            ++WORD2(v42);
            LOBYTE(v42) = v8;
          }
        }
      }
    }
LABEL_41:
    if ( (_BYTE)v33 == 1 && (SWORD1(v33) & 0x8000u) == 0 )
    {
      v35 = &v42;
      WORD1(v33) = WORD1(v33) & 0xFFF3 | 4;
    }
    v28 = 56;
    v20 = ((__int64 (__fastcall *)(__int128 *, HANDLE, __int64, void *, _BYTE *, int *, int *, int *))ZwAccessCheck)(
            &v33,
            Handle,
            1LL,
            &RtlpCheckTokenMembershipGenericMapping,
            v46,
            &v28,
            &v30,
            &v29);
    if ( v20 >= 0 )
    {
      v20 = 0;
      if ( v29 )
      {
        if ( v29 == -1073741790 )
          goto LABEL_48;
        goto LABEL_47;
      }
      if ( v30 != 1 )
      {
LABEL_47:
        v20 = v29;
        goto LABEL_48;
      }
      *a4 = 1;
    }
LABEL_48:
    if ( a1 )
      return (unsigned int)v20;
LABEL_54:
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v20;
  }
  return 3221225485LL;
}
