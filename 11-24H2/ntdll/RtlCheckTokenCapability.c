/*
 * XREFs of RtlCheckTokenCapability @ 0x18003BE90
 * Callers:
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180039260 (RtlValidAcl.c)
 *     RtlIsCapabilitySid @ 0x18003C300 (RtlIsCapabilitySid.c)
 *     ZwAccessCheck @ 0x180161C90 (ZwAccessCheck.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x180162270 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180162290 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1801624D0 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCheckTokenCapability(void *a1, unsigned __int8 *a2, _BYTE *a3)
{
  __int64 v6; // r8
  char v7; // si
  void *v8; // rcx
  unsigned __int8 *v9; // rbx
  __int16 v10; // ax
  char v11; // di
  _BYTE *v12; // rdx
  unsigned int i; // r8d
  unsigned __int16 v14; // cx
  _BYTE *v15; // rcx
  unsigned int j; // r8d
  unsigned __int16 v17; // r8
  int v18; // ebx
  HANDLE v20; // [rsp+40h] [rbp-C0h]
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h]
  __int64 *v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+88h] [rbp-78h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 *v32; // [rsp+B0h] [rbp-50h]
  void *Src[12]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+120h] [rbp+20h] BYREF
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v37[152]; // [rsp+138h] [rbp+38h] BYREF
  char v38[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v24 = 0;
  v23 = 0;
  memset_thunk_772440563353939046(&v36, 0, 0xA0uLL);
  v20 = 0LL;
  v31 = 0LL;
  LODWORD(v32) = 0;
  v34 = 0LL;
  v35 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v22 = 0;
  v26 = 0LL;
  v27 = 0LL;
  memset_thunk_772440563353939046(Src, 0, 0x58uLL);
  v21 = 0;
  Handle = 0LL;
  *a3 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(a2) )
  {
    v18 = -1073741811;
    goto LABEL_47;
  }
  v7 = 2;
  if ( a1 )
  {
    v8 = a1;
    v20 = a1;
LABEL_4:
    v21 = 88;
    NtQueryInformationToken(v8, 1LL, Src, 88LL, &v21);
    v9 = (unsigned __int8 *)Src[0];
    LOBYTE(v26) = 1;
    if ( (SWORD1(v26) & 0x8000u) == 0 )
    {
      *((_QWORD *)&v26 + 1) = 0LL;
      if ( Src[0] )
        *((void **)&v26 + 1) = Src[0];
      v10 = WORD1(v26) & 0xFFFE;
      WORD1(v26) = v10;
      if ( v10 >= 0 )
      {
        *(_QWORD *)&v27 = 0LL;
        if ( Src[0] )
          *(void **)&v27 = Src[0];
        WORD1(v26) = v10 & 0xFFFD;
      }
    }
    v36 = 10485762LL;
    if ( RtlValidSid((_BYTE *)Src[0]) && (unsigned __int8)v36 <= 4u )
    {
      v11 = 2;
      if ( (unsigned __int8)v36 > 2u )
        v11 = v36;
      if ( RtlValidAcl((__int64)&v36) )
      {
        v12 = v37;
        for ( i = 0; i < WORD2(v36); ++i )
        {
          if ( v12 >= &v37[WORD1(v36) - 8] )
            goto LABEL_25;
          v12 += *((unsigned __int16 *)v12 + 1);
        }
        if ( v12 > &v37[WORD1(v36) - 8] )
          v12 = 0LL;
        v14 = 4 * (v9[1] + 4);
        if ( v12 && &v12[v14] <= &v37[WORD1(v36) - 8] )
        {
          *((_WORD *)v12 + 1) = v14;
          *(_WORD *)v12 = 0;
          *((_DWORD *)v12 + 1) = 65537;
          memmove(v12 + 8, v9, 4LL * v9[1] + 8);
          ++WORD2(v36);
          LOBYTE(v36) = v11;
        }
      }
    }
LABEL_25:
    if ( RtlValidSid(a2) && (unsigned __int8)v36 <= 4u )
    {
      if ( (unsigned __int8)v36 > 2u )
        v7 = v36;
      if ( RtlValidAcl((__int64)&v36) )
      {
        v15 = v37;
        for ( j = 0; j < WORD2(v36); ++j )
        {
          if ( v15 >= &v37[WORD1(v36) - 8] )
            goto LABEL_39;
          v15 += *((unsigned __int16 *)v15 + 1);
        }
        if ( v15 > &v37[WORD1(v36) - 8] )
          v15 = 0LL;
        v17 = 4 * (a2[1] + 4);
        if ( v15 && &v15[v17] <= &v37[WORD1(v36) - 8] )
        {
          *((_WORD *)v15 + 1) = v17;
          *(_WORD *)v15 = 0;
          *((_DWORD *)v15 + 1) = 65537;
          memmove(v15 + 8, a2, 4LL * a2[1] + 8);
          ++WORD2(v36);
          LOBYTE(v36) = v7;
        }
      }
    }
LABEL_39:
    if ( (_BYTE)v26 == 1 && (SWORD1(v26) & 0x8000u) == 0 )
    {
      v28 = &v36;
      WORD1(v26) = WORD1(v26) & 0xFFF3 | 4;
    }
    v22 = 56;
    v18 = ZwAccessCheck(&v26, v20, 65537LL, &RtlpCheckTokenCapabilityGenericMapping, v38, &v22, &v24, &v23, v20);
    if ( v18 >= 0 )
    {
      if ( !v23 && v24 == 65537 )
        *a3 = 1;
      v18 = 0;
    }
LABEL_47:
    if ( a1 )
      return (unsigned int)v18;
    goto LABEL_55;
  }
  LOBYTE(v6) = 1;
  v18 = NtOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v18 == -1073741700 )
  {
    v18 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v18 < 0 )
      goto LABEL_55;
    v32 = &v34;
    LODWORD(v29) = 48;
    *((_QWORD *)&v29 + 1) = 0LL;
    DWORD2(v30) = 0;
    *(_QWORD *)&v30 = 0LL;
    v31 = 0LL;
    v34 = 0x20000000CLL;
    LOWORD(v35) = 1;
    v18 = NtDuplicateToken(Handle, 8LL, &v29);
    NtClose(Handle);
  }
  if ( v18 >= 0 )
  {
    v8 = 0LL;
    goto LABEL_4;
  }
LABEL_55:
  if ( v20 )
    NtClose(v20);
  return (unsigned int)v18;
}
