/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180039A70
 * Callers:
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18003C348 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x1800F0910 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     RtlInitializeSidEx @ 0x1800397A0 (RtlInitializeSidEx.c)
 *     ZwAccessCheck @ 0x180161C90 (ZwAccessCheck.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x180162270 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180162290 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1801624D0 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h]
  HANDLE v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h]
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+88h] [rbp-78h] BYREF
  __int128 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h] BYREF
  int v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[232]; // [rsp+D8h] [rbp-28h] BYREF
  char Src; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int8 v43; // [rsp+1C1h] [rbp+C1h]
  _BYTE v44[56]; // [rsp+210h] [rbp+110h] BYREF

  v28 = 0;
  v27 = 0;
  memset_thunk_772440563353939046(&Src, 0, 0x44uLL);
  memset_thunk_772440563353939046(&v40, 0, 0xECuLL);
  Handle = 0LL;
  v36 = 0LL;
  LODWORD(v37) = 0;
  v26 = 0;
  v38 = 0LL;
  v39 = 0;
  v33 = 0LL;
  v30 = 0LL;
  *a4 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v8 = 2;
    if ( a1 )
    {
      Handle = a1;
    }
    else
    {
      v20 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v20 == -1073741700 )
      {
        v20 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &v30);
        if ( v20 < 0 )
          goto LABEL_54;
        v37 = &v38;
        LODWORD(v34) = 48;
        *((_QWORD *)&v34 + 1) = 0LL;
        DWORD2(v35) = 0;
        *(_QWORD *)&v35 = 0LL;
        v36 = 0LL;
        v38 = 0x20000000CLL;
        LOWORD(v39) = 1;
        v20 = NtDuplicateToken(v30, 12LL, &v34);
        NtClose(v30);
      }
      if ( v20 < 0 )
        goto LABEL_54;
    }
    LOBYTE(v31) = 1;
    if ( (SWORD1(v31) & 0x8000u) == 0 )
    {
      *((_QWORD *)&v31 + 1) = 0LL;
      if ( a2 )
        *((_QWORD *)&v31 + 1) = a2;
      v9 = WORD1(v31) & 0xFFFE;
      WORD1(v31) = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)&v32 = 0LL;
        if ( a2 )
          *(_QWORD *)&v32 = a2;
        WORD1(v31) = v9 & 0xFFFD;
      }
    }
    v40 = 15466498LL;
    if ( RtlValidSid(a2) && (unsigned __int8)v40 <= 4u )
    {
      v10 = 2;
      if ( (unsigned __int8)v40 > 2u )
        v10 = v40;
      if ( RtlValidAcl((__int64)&v40) )
      {
        v11 = v41;
        for ( i = 0; i < WORD2(v40); ++i )
        {
          if ( v11 >= &v41[WORD1(v40) - 8] )
            goto LABEL_25;
          v11 += *((unsigned __int16 *)v11 + 1);
        }
        if ( v11 > &v41[WORD1(v40) - 8] )
          v11 = 0LL;
        v13 = 4 * (a2[1] + 4);
        if ( v11 && &v11[v13] <= &v41[WORD1(v40) - 8] )
        {
          *((_WORD *)v11 + 1) = v13;
          *(_WORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 1;
          memmove(v11 + 8, a2, 4LL * a2[1] + 8);
          ++WORD2(v40);
          LOBYTE(v40) = v10;
        }
      }
    }
LABEL_25:
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx((__int64)&Src, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      if ( RtlValidSid(&Src) && (unsigned __int8)v40 <= 4u )
      {
        v14 = 2;
        if ( (unsigned __int8)v40 > 2u )
          v14 = v40;
        if ( RtlValidAcl((__int64)&v40) )
        {
          v15 = v41;
          for ( j = 0; j < WORD2(v40); ++j )
          {
            if ( v15 >= &v41[WORD1(v40) - 8] )
              goto LABEL_40;
            v15 += *((unsigned __int16 *)v15 + 1);
          }
          v17 = &v41[WORD1(v40) - 8];
          v18 = v43;
          if ( v15 > v17 )
            v15 = 0LL;
          v19 = 4 * (v43 + 4);
          if ( v15 && &v15[v19] <= v17 )
          {
            *((_WORD *)v15 + 1) = v19;
            *(_WORD *)v15 = 0;
            *((_DWORD *)v15 + 1) = 1;
            memmove(v15 + 8, &Src, (unsigned int)(4 * v18 + 8));
            ++WORD2(v40);
            LOBYTE(v40) = v14;
          }
        }
      }
    }
LABEL_40:
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx((__int64)&Src, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      if ( RtlValidSid(&Src) && (unsigned __int8)v40 <= 4u )
      {
        if ( (unsigned __int8)v40 > 2u )
          v8 = v40;
        if ( RtlValidAcl((__int64)&v40) )
        {
          v22 = v41;
          for ( k = 0; k < WORD2(v40); ++k )
          {
            if ( v22 >= &v41[WORD1(v40) - 8] )
              goto LABEL_41;
            v22 += *((unsigned __int16 *)v22 + 1);
          }
          v24 = v43;
          if ( v22 > &v41[WORD1(v40) - 8] )
            v22 = 0LL;
          v25 = 4 * (v43 + 4);
          if ( v22 && &v22[v25] <= &v41[WORD1(v40) - 8] )
          {
            *((_WORD *)v22 + 1) = v25;
            *(_WORD *)v22 = 0;
            *((_DWORD *)v22 + 1) = 1;
            memmove(v22 + 8, &Src, (unsigned int)(4 * v24 + 8));
            ++WORD2(v40);
            LOBYTE(v40) = v8;
          }
        }
      }
    }
LABEL_41:
    if ( (_BYTE)v31 == 1 && (SWORD1(v31) & 0x8000u) == 0 )
    {
      v33 = &v40;
      WORD1(v31) = WORD1(v31) & 0xFFF3 | 4;
    }
    v26 = 56;
    v20 = ((__int64 (__fastcall *)(__int128 *, HANDLE, __int64, void *, _BYTE *, int *, int *, int *))ZwAccessCheck)(
            &v31,
            Handle,
            1LL,
            &RtlpCheckTokenMembershipGenericMapping,
            v44,
            &v26,
            &v28,
            &v27);
    if ( v20 >= 0 )
    {
      v20 = 0;
      if ( v27 )
      {
        if ( v27 == -1073741790 )
          goto LABEL_48;
        goto LABEL_47;
      }
      if ( v28 != 1 )
      {
LABEL_47:
        v20 = v27;
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
