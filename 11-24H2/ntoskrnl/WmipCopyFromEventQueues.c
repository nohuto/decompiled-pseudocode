/*
 * XREFs of WmipCopyFromEventQueues @ 0x140A4CE20
 * Callers:
 *     WmipReceiveNotifications @ 0x140475EC4 (WmipReceiveNotifications.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

LONG __fastcall WmipCopyFromEventQueues(
        struct _KEVENT **a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        char a7)
{
  char v7; // r13
  __int64 v8; // rsi
  struct _KEVENT **v9; // rdi
  struct _KEVENT **v10; // r9
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // r15d
  _DWORD *v18; // r12
  _DWORD *v19; // r13
  __int64 *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r14
  unsigned int *v23; // rbp
  size_t v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rax
  struct _KEVENT *v27; // rbp
  __int64 v28; // rax
  LONG result; // eax
  struct _KEVENT *v30; // rbp
  unsigned __int64 v31; // rbx

  v7 = a7;
  v8 = a2;
  v9 = a1;
  if ( a2 )
  {
    v10 = a1 + 1;
    v11 = a2;
    while ( 1 )
    {
      v12 = (__int64)*(v10 - 1);
      if ( a7 )
        break;
      v13 = *(_QWORD *)(v12 + 128);
      if ( !v13 || !*(_DWORD *)(v12 + 148) )
        goto LABEL_20;
      *v10 = (struct _KEVENT *)v13;
      *(_WORD *)(v13 + 10) = 0;
      LODWORD((*v10)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v12 + 152) << 16;
      *(_DWORD *)(v12 + 152) = 0;
LABEL_7:
      v10 += 2;
      if ( !--v11 )
        goto LABEL_8;
    }
    v28 = *(_QWORD *)(v12 + 96);
    if ( v28 && *(_DWORD *)(v12 + 116) )
    {
      *v10 = (struct _KEVENT *)v28;
      *(_WORD *)(v28 + 10) = 0;
      LODWORD((*v10)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v12 + 120) << 16;
      *(_DWORD *)(v12 + 120) = 0;
      goto LABEL_7;
    }
LABEL_20:
    *v10 = 0LL;
    goto LABEL_7;
  }
LABEL_8:
  v14 = -1;
  v15 = 0x7FFFFFFFFFFFFFFFLL;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  if ( (_DWORD)v8 )
  {
    v19 = a3;
    while ( 1 )
    {
      v20 = (__int64 *)(v9 + 1);
      do
      {
        v21 = *v20;
        if ( *v20 && *(_QWORD *)(v21 + 16) < v15 )
        {
          v15 = *(_QWORD *)(v21 + 16);
          v14 = v16;
        }
        ++v16;
        v20 += 2;
      }
      while ( v16 < (unsigned int)v8 );
      if ( v14 == -1 )
        break;
      v22 = 2LL * v14;
      v18 = v19;
      v23 = (unsigned int *)v9[2 * v14 + 1];
      v24 = *v23;
      v25 = (v24 + 7) & 0xFFFFFFF8;
      memmove(v19, v23, v24);
      v17 += v25;
      v19[3] = v25;
      v19 = (_DWORD *)((char *)v19 + v25);
      v26 = v23[3];
      if ( (_DWORD)v26 )
        v27 = (struct _KEVENT *)((char *)v23 + v26);
      else
        v27 = 0LL;
      v14 = -1;
      v9[v22 + 1] = v27;
      v15 = 0x7FFFFFFFFFFFFFFFLL;
      v16 = 0;
    }
    v7 = a7;
  }
  *a6 = v18;
  result = (int)a5;
  *a5 = v17;
  if ( (_DWORD)v8 )
  {
    do
    {
      v30 = *v9;
      v31 = (unsigned __int64)&(*v9)[5].Header.WaitListHead + (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFE0uLL);
      if ( *(_QWORD *)v31 )
      {
        ExFreePoolWithTag(*(PVOID *)v31, 0);
        *(_QWORD *)v31 = 0LL;
        *(_DWORD *)(v31 + 20) = 0;
        *(_QWORD *)(v31 + 8) = 0LL;
      }
      result = KeResetEvent(v30);
      v9 += 2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
