/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800665D0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800662F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlpSysVolAllocate @ 0x180066560 (RtlpSysVolAllocate.c)
 *     RtlGetAce @ 0x180066C30 (RtlGetAce.c)
 *     RtlMakeSelfRelativeSD @ 0x180066CA0 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180066F00 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlEqualSid @ 0x180084E60 (RtlEqualSid.c)
 *     NtQuerySecurityObject @ 0x180165F10 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x180166930 (NtSetSecurityObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // esi
  char v8; // si
  __int64 v9; // r8
  unsigned int i; // r15d
  int Ace; // eax
  _BYTE *v12; // rsi
  int v13; // r14d
  void *v14; // rax
  __int64 v15; // rsi
  int v16; // r14d
  int SelfRelativeSD; // eax
  __int16 v19; // ax
  __int16 v20; // ax
  __int64 v21; // rax
  unsigned int v22; // ebx
  size_t Size; // [rsp+30h] [rbp-50h] BYREF
  _BYTE *v24; // [rsp+38h] [rbp-48h] BYREF
  __int16 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+42h] [rbp-3Eh]
  __int16 v27; // [rsp+46h] [rbp-3Ah]
  int v28; // [rsp+48h] [rbp-38h]
  int v29; // [rsp+4Ch] [rbp-34h]
  __int16 v30; // [rsp+58h] [rbp-28h] BYREF
  int v31; // [rsp+5Ah] [rbp-26h]
  __int16 v32; // [rsp+5Eh] [rbp-22h]
  int v33; // [rsp+60h] [rbp-20h]

  v2 = 0;
  LODWORD(Size) = 0;
  v24 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)NtQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  v6 = RtlpSysVolAllocate(Size);
  if ( !v6 )
    return 3221225626LL;
  v7 = NtQuerySecurityObject(a1, 5LL, v6, (unsigned int)Size, &Size);
  if ( v7 < 0 )
  {
LABEL_25:
    RtlpSysVolFree(v6);
    return (unsigned int)v7;
  }
  if ( *(_BYTE *)v6 != 1 )
    goto LABEL_24;
  if ( (*(_BYTE *)(v6 + 2) & 4) != 0 )
  {
    v8 = 1;
    if ( *(__int16 *)(v6 + 2) >= 0 )
    {
      v5 = *(_QWORD *)(v6 + 32);
    }
    else if ( *(_DWORD *)(v6 + 16) )
    {
      v5 = v6 + *(unsigned int *)(v6 + 16);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( *(__int16 *)(v6 + 2) >= 0 )
  {
    v9 = *(_QWORD *)(v6 + 8);
  }
  else if ( *(_DWORD *)(v6 + 4) )
  {
    v9 = v6 + *(unsigned int *)(v6 + 4);
  }
  else
  {
    v9 = 0LL;
  }
  v32 = 1280;
  v27 = 1280;
  v30 = 257;
  v31 = 0;
  v33 = 18;
  v25 = 513;
  v26 = 0;
  v28 = 32;
  v29 = 544;
  if ( v9 && (unsigned __int8)RtlEqualSid(v9, &v25) && v8 && v5 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v5, i, &v24);
      v12 = v24;
      if ( Ace < 0 )
        v12 = 0LL;
      v24 = v12;
      if ( !v12 )
        break;
      if ( !*v12 && (unsigned __int8)RtlEqualSid(v12 + 8, &v30) )
      {
        if ( (v12[1] & 3) != 3 )
        {
          v12[1] |= 3u;
          v2 = NtSetSecurityObject(a1, 4LL, v6);
        }
        v7 = v2;
        goto LABEL_25;
      }
    }
  }
  LODWORD(v24) = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2(v6, &v24) == -1073741789 )
  {
    v13 = (int)v24;
    v14 = (void *)RtlpSysVolAllocate((unsigned int)v24);
    v15 = (__int64)v14;
    if ( !v14 )
    {
LABEL_40:
      v7 = -1073741670;
      goto LABEL_25;
    }
    memmove(v14, (const void *)v6, (unsigned int)Size);
    RtlpSysVolFree(v6);
    LODWORD(Size) = v13;
    v6 = v15;
    v16 = RtlSelfRelativeToAbsoluteSD2(v15, &Size);
    if ( v16 < 0 )
    {
LABEL_23:
      RtlpSysVolFree(v15);
      return (unsigned int)v16;
    }
  }
  SelfRelativeSD = RtlSetOwnerSecurityDescriptor(v6, (__int64)&v25, 0);
  if ( SelfRelativeSD < 0 )
  {
LABEL_48:
    v7 = SelfRelativeSD;
    goto LABEL_25;
  }
  if ( *(_BYTE *)v6 != 1 )
  {
LABEL_24:
    v7 = -1073741736;
    goto LABEL_25;
  }
  v19 = *(_WORD *)(v6 + 2);
  if ( v19 < 0 )
  {
    v7 = -1073741703;
    goto LABEL_25;
  }
  v20 = v19 | 4;
  *(_QWORD *)(v6 + 32) = 0LL;
  if ( a2 )
    *(_QWORD *)(v6 + 32) = a2;
  LODWORD(v24) = 0;
  *(_WORD *)(v6 + 2) = v20 & 0xFFF7;
  SelfRelativeSD = RtlMakeSelfRelativeSD(v6, 0LL, &v24);
  if ( SelfRelativeSD != -1073741789 )
    goto LABEL_48;
  v21 = RtlpSysVolAllocate((unsigned int)v24);
  v15 = v21;
  if ( !v21 )
    goto LABEL_40;
  v16 = RtlMakeSelfRelativeSD(v6, v21, &v24);
  RtlpSysVolFree(v6);
  if ( v16 < 0 )
    goto LABEL_23;
  LODWORD(Size) = (_DWORD)v24;
  v22 = NtSetSecurityObject(a1, 5LL, v15);
  RtlpSysVolFree(v15);
  return v22;
}
