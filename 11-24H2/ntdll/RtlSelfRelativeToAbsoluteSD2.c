/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x1800C6DD0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C677C (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD2(PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor, PULONG BufferSize)
{
  __int16 v4; // cx
  char *v5; // rbx
  __int64 v6; // r10
  char *v7; // rsi
  __int64 v8; // rdx
  char *v9; // rbp
  __int64 v10; // rax
  char *v11; // r14
  char *v12; // r11
  __int64 v13; // r14
  bool v14; // zf
  __int64 v15; // r9
  char *v16; // rax
  char *v17; // rcx
  ULONG v18; // eax

  if ( !SelfRelativeSecurityDescriptor )
    return -1073741585;
  if ( !BufferSize )
    return -1073741584;
  if ( *BufferSize < 0x14 )
    return -1073741811;
  v4 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
  if ( v4 >= 0 )
    return -1073741593;
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 1) )
  {
    v5 = 0LL;
    goto LABEL_39;
  }
  v5 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 1);
  if ( !v5 )
  {
LABEL_39:
    v6 = 0LL;
    goto LABEL_8;
  }
  v6 = (4LL * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFCLL;
LABEL_8:
  if ( (v4 & 4) == 0 || !*((_DWORD *)SelfRelativeSecurityDescriptor + 4) )
  {
    v7 = 0LL;
LABEL_10:
    v8 = 0LL;
    goto LABEL_14;
  }
  v7 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 4);
  if ( !v7 )
    goto LABEL_10;
  v8 = (*((unsigned __int16 *)v7 + 1) + 3LL) & 0xFFFFFFFCLL;
LABEL_14:
  if ( !*((_DWORD *)SelfRelativeSecurityDescriptor + 2) )
  {
    v9 = 0LL;
    goto LABEL_36;
  }
  v9 = (char *)SelfRelativeSecurityDescriptor + *((unsigned int *)SelfRelativeSecurityDescriptor + 2);
  if ( !v9 )
  {
LABEL_36:
    v10 = 0LL;
    goto LABEL_17;
  }
  v10 = (4LL * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFCLL;
LABEL_17:
  if ( (v4 & 0x10) != 0 && *((_DWORD *)SelfRelativeSecurityDescriptor + 3) )
  {
    v13 = *((unsigned int *)SelfRelativeSecurityDescriptor + 3);
    v14 = (char *)SelfRelativeSecurityDescriptor + v13 == 0LL;
    v11 = (char *)SelfRelativeSecurityDescriptor + v13;
    v12 = v11;
    if ( !v14 )
    {
      v15 = (*((unsigned __int16 *)v11 + 1) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_22;
    }
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
  }
  v15 = 0LL;
LABEL_22:
  v16 = &v9[v10];
  v17 = &v5[v6];
  if ( v5 <= v9 )
    v17 = v16;
  if ( v17 <= v7 )
    v17 = &v7[v8];
  if ( v17 <= v11 )
    v17 = &v12[v15];
  v18 = 40;
  if ( v17 )
    v18 = (((_DWORD)v17 - (_DWORD)SelfRelativeSecurityDescriptor - 13) & 0xFFFFFFF8) + 40;
  if ( v18 > *BufferSize )
  {
    *BufferSize = v18;
    return -1073741789;
  }
  else
  {
    if ( v17 )
      memmove((char *)SelfRelativeSecurityDescriptor + 40, (char *)SelfRelativeSecurityDescriptor + 20, v18 - 40LL);
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 1) = (unsigned __int64)(v5 + 20) & -(__int64)(v5 != 0LL);
    *((_QWORD *)SelfRelativeSecurityDescriptor + 2) = (unsigned __int64)(v9 + 20) & -(__int64)(v9 != 0LL);
    *((_QWORD *)SelfRelativeSecurityDescriptor + 3) = (unsigned __int64)(v11 + 20) & -(__int64)(v11 != 0LL);
    *((_QWORD *)SelfRelativeSecurityDescriptor + 4) = (unsigned __int64)(v7 + 20) & -(__int64)(v7 != 0LL);
    return 0;
  }
}
