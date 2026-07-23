/*
 * XREFs of WmipQueueNotification @ 0x140A4DAF4
 * Callers:
 *     WmipWriteWnodeToObject @ 0x1403CBB50 (WmipWriteWnodeToObject.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueueNotification(struct _KEVENT *a1, char **a2, unsigned int *a3)
{
  char *v3; // r14
  unsigned int *v4; // r12
  unsigned int v5; // esi
  const void *v6; // r9
  size_t v7; // r8
  unsigned int v8; // ebx
  char *v9; // r15
  struct _KEVENT *v11; // r13
  unsigned int v12; // ebp
  char *Pool2; // rax
  unsigned int *v14; // rdx
  char *v15; // rcx
  void *v17; // rcx
  unsigned int Size; // [rsp+68h] [rbp+10h]

  v3 = *a2;
  v4 = (unsigned int *)a2 + 5;
  v5 = *((_DWORD *)a2 + 4);
  v6 = a3;
  v7 = *a3;
  v8 = 0;
  v9 = a2[1];
  v11 = a1;
  Size = v7;
  v12 = (*((_DWORD *)a2 + 5) + v7 + 7) & 0xFFFFFFF8;
  if ( *a2 && v12 <= v5 )
  {
    v14 = (unsigned int *)a2 + 5;
  }
  else
  {
    if ( v12 > 0x80000 )
      goto LABEL_6;
    if ( v12 > v5 )
      v5 = (v12 + 0x3FFF) & 0xFFFFC000;
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v5, 0x70696D57u);
    v3 = Pool2;
    if ( !Pool2 )
    {
LABEL_6:
      ++*((_DWORD *)a2 + 6);
      return (unsigned int)-1073741670;
    }
    memset_0(Pool2, 0, v5);
    if ( *a2 )
    {
      memmove(v3, *a2, *v4);
      v17 = *a2;
      v9 += v3 - *a2;
      a2[1] = v9;
      ExFreePoolWithTag(v17, 0);
    }
    v6 = a3;
    v14 = (unsigned int *)a2 + 5;
    v7 = Size;
    v11 = a1;
    *a2 = v3;
    *((_DWORD *)a2 + 4) = v5;
  }
  v15 = &v3[*v4];
  if ( v9 )
    *((_DWORD *)v9 + 3) = (_DWORD)v15 - (_DWORD)v9;
  *v14 = v12;
  a2[1] = v15;
  memmove(v15, v6, v7);
  KeSetEvent(v11, 0, 0);
  return v8;
}
