/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x1409E9414
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140774824 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1409E8CD0 (LocalConvertStringSDToSD_Rev1.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  __int16 v4; // cx
  unsigned __int8 *v6; // r12
  unsigned int v7; // edx
  unsigned __int16 *v8; // r15
  unsigned int v9; // r13d
  char *v10; // rax
  unsigned int v11; // eax
  unsigned __int16 *v12; // rbp
  unsigned int v13; // r14d
  ULONG v14; // ecx
  char *v16; // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int Size; // [rsp+60h] [rbp+8h]
  unsigned int v25; // [rsp+68h] [rbp+10h]
  void *Src; // [rsp+70h] [rbp+18h]

  v4 = *((_WORD *)AbsoluteSecurityDescriptor + 1);
  if ( v4 < 0 )
  {
    v21 = *((unsigned int *)AbsoluteSecurityDescriptor + 1);
    if ( !(_DWORD)v21 )
    {
      v6 = 0LL;
      goto LABEL_4;
    }
    v6 = (unsigned __int8 *)AbsoluteSecurityDescriptor + v21;
  }
  else
  {
    v6 = (unsigned __int8 *)*((_QWORD *)AbsoluteSecurityDescriptor + 1);
  }
  if ( !v6 )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v7 = (4 * v6[1] + 11) & 0xFFFFFFFC;
LABEL_5:
  Size = v7;
  if ( (v4 & 4) == 0 )
  {
LABEL_6:
    v8 = 0LL;
LABEL_7:
    v9 = 0;
    goto LABEL_12;
  }
  if ( v4 < 0 )
  {
    v22 = *((unsigned int *)AbsoluteSecurityDescriptor + 4);
    if ( !(_DWORD)v22 )
      goto LABEL_6;
    v8 = (unsigned __int16 *)((char *)AbsoluteSecurityDescriptor + v22);
  }
  else
  {
    v8 = (unsigned __int16 *)*((_QWORD *)AbsoluteSecurityDescriptor + 4);
  }
  if ( !v8 )
    goto LABEL_7;
  v9 = (v8[1] + 3) & 0xFFFFFFFC;
LABEL_12:
  if ( v4 < 0 )
  {
    v20 = *((unsigned int *)AbsoluteSecurityDescriptor + 2);
    if ( !(_DWORD)v20 )
    {
      Src = 0LL;
      goto LABEL_15;
    }
    v10 = (char *)AbsoluteSecurityDescriptor + v20;
  }
  else
  {
    v10 = (char *)*((_QWORD *)AbsoluteSecurityDescriptor + 2);
  }
  Src = v10;
  if ( !v10 )
  {
LABEL_15:
    v11 = 0;
    goto LABEL_16;
  }
  v11 = (4 * (unsigned __int8)v10[1] + 11) & 0xFFFFFFFC;
LABEL_16:
  v25 = v11;
  if ( (v4 & 0x10) == 0 )
  {
LABEL_17:
    v12 = 0LL;
LABEL_18:
    v13 = 0;
    goto LABEL_23;
  }
  if ( v4 < 0 )
  {
    v23 = *((unsigned int *)AbsoluteSecurityDescriptor + 3);
    if ( !(_DWORD)v23 )
      goto LABEL_17;
    v12 = (unsigned __int16 *)((char *)AbsoluteSecurityDescriptor + v23);
  }
  else
  {
    v12 = (unsigned __int16 *)*((_QWORD *)AbsoluteSecurityDescriptor + 3);
  }
  if ( !v12 )
    goto LABEL_18;
  v13 = (v12[1] + 3) & 0xFFFFFFFC;
LABEL_23:
  v14 = v9 + v13 + v7 + v11 + 20;
  if ( v14 <= *BufferLength )
  {
    if ( SelfRelativeSecurityDescriptor )
    {
      memset_0(SelfRelativeSecurityDescriptor, 0, v14);
      v16 = (char *)SelfRelativeSecurityDescriptor + 20;
      *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
      if ( v13 )
      {
        memmove((char *)SelfRelativeSecurityDescriptor + 20, v12, v13);
        v16 += v13;
        v17 = 20;
      }
      else
      {
        v17 = 0;
      }
      *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v17;
      if ( v9 )
      {
        memmove(v16, v8, v9);
        v18 = (int)v16;
        v16 += v9;
        v19 = v18 - (_DWORD)SelfRelativeSecurityDescriptor;
      }
      else
      {
        v19 = 0;
      }
      *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v19;
      if ( Size )
      {
        memmove(v16, v6, Size);
        *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v16 - (_DWORD)SelfRelativeSecurityDescriptor;
        v16 += Size;
      }
      if ( v25 )
      {
        memmove(v16, Src, v25);
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
  else
  {
    *BufferLength = v14;
    return -1073741789;
  }
}
