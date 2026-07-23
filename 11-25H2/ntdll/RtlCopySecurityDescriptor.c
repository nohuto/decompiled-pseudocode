/*
 * XREFs of RtlCopySecurityDescriptor @ 0x1800F6AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySecurityDescriptor(
        PSECURITY_DESCRIPTOR InputSecurityDescriptor,
        PSECURITY_DESCRIPTOR *OutputSecurityDescriptor)
{
  __int16 v3; // cx
  char *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  PVOID Heap; // rax
  char *v15; // rax

  v3 = *((_WORD *)InputSecurityDescriptor + 1);
  if ( v3 < 0 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 1) )
      goto LABEL_28;
    v5 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 1);
  }
  else
  {
    v5 = (char *)*((_QWORD *)InputSecurityDescriptor + 1);
  }
  if ( !v5 )
  {
LABEL_28:
    v6 = 0LL;
    goto LABEL_5;
  }
  v6 = (4LL * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFCLL;
LABEL_5:
  if ( (v3 & 4) == 0 )
    goto LABEL_6;
  if ( v3 < 0 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 4) )
      goto LABEL_6;
    v8 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 4);
  }
  else
  {
    v8 = (char *)*((_QWORD *)InputSecurityDescriptor + 4);
  }
  if ( !v8 )
  {
LABEL_6:
    v7 = 0LL;
    goto LABEL_11;
  }
  v7 = (*((unsigned __int16 *)v8 + 1) + 3LL) & 0xFFFFFFFCLL;
LABEL_11:
  if ( v3 < 0 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 2) )
      goto LABEL_23;
    v9 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 2);
  }
  else
  {
    v9 = (char *)*((_QWORD *)InputSecurityDescriptor + 2);
  }
  if ( !v9 )
  {
LABEL_23:
    v10 = 0LL;
    goto LABEL_15;
  }
  v10 = (4LL * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFCLL;
LABEL_15:
  if ( (v3 & 0x10) == 0 )
    goto LABEL_16;
  if ( v3 < 0 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 3) )
      goto LABEL_16;
    v15 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 3);
  }
  else
  {
    v15 = (char *)*((_QWORD *)InputSecurityDescriptor + 3);
  }
  if ( !v15 )
  {
LABEL_16:
    v11 = 0LL;
    goto LABEL_17;
  }
  v11 = (*((unsigned __int16 *)v15 + 1) + 3LL) & 0xFFFFFFFCLL;
LABEL_17:
  v12 = v10 + v6 + v7 + v11;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v12 + 20);
  *OutputSecurityDescriptor = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap, InputSecurityDescriptor, v12 + 20);
  return 0;
}
