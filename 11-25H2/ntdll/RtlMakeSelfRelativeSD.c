/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x180066CA0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x180066C80 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  __int16 v3; // r9
  int v4; // ebp
  char *v7; // rax
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  unsigned __int16 *v10; // r12
  size_t v11; // rbx
  char *v12; // rax
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  ULONG v15; // ecx
  char *v16; // rsi
  int v17; // eax
  int v18; // ebp
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int Size; // [rsp+70h] [rbp+8h]
  void *v26; // [rsp+78h] [rbp+10h]
  void *Src; // [rsp+80h] [rbp+18h]
  void *v28; // [rsp+88h] [rbp+20h]

  v3 = *((_WORD *)AbsoluteSecurityDescriptor + 1);
  v4 = 0;
  if ( v3 < 0 )
  {
    v22 = *((unsigned int *)AbsoluteSecurityDescriptor + 1);
    if ( !(_DWORD)v22 )
    {
      Src = 0LL;
      goto LABEL_42;
    }
    v7 = (char *)AbsoluteSecurityDescriptor + v22;
  }
  else
  {
    v7 = (char *)*((_QWORD *)AbsoluteSecurityDescriptor + 1);
  }
  Src = v7;
  if ( v7 )
  {
    v8 = (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
    goto LABEL_5;
  }
LABEL_42:
  v8 = 0;
LABEL_5:
  Size = v8;
  v9 = (unsigned int *)((char *)AbsoluteSecurityDescriptor + 16);
  if ( (v3 & 4) == 0 )
  {
LABEL_6:
    v10 = 0LL;
LABEL_7:
    v11 = 0LL;
    goto LABEL_12;
  }
  if ( v3 < 0 )
  {
    v23 = *v9;
    if ( !(_DWORD)v23 )
      goto LABEL_6;
    v10 = (unsigned __int16 *)((char *)AbsoluteSecurityDescriptor + v23);
  }
  else
  {
    v10 = (unsigned __int16 *)*((_QWORD *)AbsoluteSecurityDescriptor + 4);
  }
  if ( !v10 )
    goto LABEL_7;
  v11 = (v10[1] + 3) & 0xFFFFFFFC;
LABEL_12:
  if ( v3 < 0 )
  {
    v21 = *((unsigned int *)AbsoluteSecurityDescriptor + 2);
    if ( !(_DWORD)v21 )
    {
      v28 = 0LL;
      goto LABEL_36;
    }
    v12 = (char *)AbsoluteSecurityDescriptor + v21;
  }
  else
  {
    v12 = *(char **)v9;
  }
  v28 = v12;
  if ( v12 )
  {
    v13 = (4 * (unsigned __int8)v12[1] + 11) & 0xFFFFFFFC;
    goto LABEL_16;
  }
LABEL_36:
  v13 = 0;
LABEL_16:
  if ( (v3 & 0x10) == 0 )
  {
LABEL_17:
    v26 = 0LL;
LABEL_18:
    v14 = 0;
    goto LABEL_19;
  }
  if ( v3 < 0 )
  {
    v24 = *((unsigned int *)AbsoluteSecurityDescriptor + 3);
    if ( !(_DWORD)v24 )
      goto LABEL_17;
    v20 = (char *)AbsoluteSecurityDescriptor + v24;
  }
  else
  {
    v20 = (char *)*((_QWORD *)AbsoluteSecurityDescriptor + 3);
  }
  v26 = v20;
  if ( !v20 )
    goto LABEL_18;
  v14 = (*((unsigned __int16 *)v20 + 1) + 3) & 0xFFFFFFFC;
LABEL_19:
  v15 = v11 + v14 + v13 + v8 + 20;
  if ( v15 > *BufferLength )
  {
    *BufferLength = v15;
    return -1073741789;
  }
  else if ( SelfRelativeSecurityDescriptor )
  {
    memset_thunk_772440563353939046(SelfRelativeSecurityDescriptor, 0, v15);
    v16 = (char *)SelfRelativeSecurityDescriptor + 20;
    *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
    if ( v14 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 20, v26, v14);
      v16 += v14;
      v17 = 20;
    }
    else
    {
      v17 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v17;
    if ( (_DWORD)v11 )
    {
      memmove(v16, v10, v11);
      v18 = (int)v16;
      v16 += v11;
      v4 = v18 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v4;
    if ( Size )
    {
      memmove(v16, Src, Size);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v16 - (_DWORD)SelfRelativeSecurityDescriptor;
      v16 += Size;
    }
    if ( v13 )
    {
      memmove(v16, v28, v13);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 2) = (_DWORD)v16 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
