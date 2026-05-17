/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1800665D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800663F4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolAllocate @ 0x180066560 (RtlpSysVolAllocate.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  size_t v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  __int16 v5; // si
  void *v6; // rax
  unsigned __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdi
  char *v10; // rcx
  __int128 v12; // [rsp+60h] [rbp-19h] BYREF
  __int128 v13; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v14[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int128 *v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  __int64 v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF
  char *v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+77h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v12 = 0LL;
  v14[1] = 0;
  v18 = 0;
  Handle = 0LL;
  v13 = 0LL;
  v2 = wcslen(L"System Volume Information");
  v3 = 2 * v2;
  if ( 2 * v2 >= 0xFFFE )
    v3 = -4;
  v4 = v3 + *a1;
  LOWORD(v12) = v4;
  if ( v4 < *a1 || v4 < v3 )
    return 3221225485LL;
  v5 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v5 != 92 )
  {
    v4 += 2;
    LOWORD(v12) = v4;
  }
  WORD1(v12) = v4 + 2;
  v6 = (void *)RtlpSysVolAllocate((unsigned __int16)(v4 + 2));
  *((_QWORD *)&v12 + 1) = v6;
  if ( !v6 )
    return 3221225626LL;
  memmove(v6, *((const void **)a1 + 1), *a1);
  v7 = *a1;
  LOWORD(v12) = *a1;
  if ( v5 != 92 )
  {
    *(_WORD *)(*((_QWORD *)&v12 + 1) + 2 * (v7 >> 1)) = 92;
    LOWORD(v7) = v12 + 2;
    LOWORD(v12) = v12 + 2;
  }
  memmove((void *)(*((_QWORD *)&v12 + 1) + (unsigned __int16)v7), L"System Volume Information", v3);
  LOWORD(v12) = v3 + v12;
  *(_WORD *)(*((_QWORD *)&v12 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v12 >> 1)) = 0;
  v8 = RtlpSysVolCreateSecurityDescriptor(&v23, &v22);
  if ( v8 < 0 )
  {
    v10 = (char *)*((_QWORD *)&v12 + 1);
  }
  else
  {
    v9 = v23;
    v14[0] = 48;
    v15 = 0LL;
    v17 = 576;
    v16 = &v12;
    v19 = v23;
    v20 = 0LL;
    if ( (int)ZwCreateFile(&Handle, 0x10000LL, v14, &v13, 0LL, 0, 7, 1, 2101344, 0LL, 0) >= 0 )
      NtClose(Handle);
    v8 = ZwCreateFile(&Handle, 1966080LL, v14, &v13, 0LL, 6, 7, 3, 33, 0LL, 0);
    if ( v8 < 0 )
    {
      RtlpSysVolTakeOwnership(&v12);
      v8 = ZwCreateFile(&Handle, 1966080LL, v14, &v13, 0LL, 6, 7, 3, 33, 0LL, 0);
    }
    RtlpSysVolFree(*((__int64 *)&v12 + 1));
    if ( v8 < 0 )
    {
      RtlpSysVolFree((__int64)v22);
      v10 = (char *)v9;
    }
    else
    {
      RtlpSysVolFree(v9);
      v8 = RtlpSysVolCheckOwnerAndSecurity(Handle, v22);
      NtClose(Handle);
      v10 = v22;
    }
  }
  RtlpSysVolFree((__int64)v10);
  return (unsigned int)v8;
}
