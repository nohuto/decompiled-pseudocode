/*
 * XREFs of RtlInitializeRXact @ 0x180108C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RXactpCommit @ 0x180109178 (RXactpCommit.c)
 *     RtlAbortRXact @ 0x180109340 (RtlAbortRXact.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x1801635C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180164D90 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180164DF0 (ZwDeleteValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlInitializeRXact(__int64 a1, char a2, __int64 *a3)
{
  unsigned int v5; // r14d
  size_t v7; // rax
  __int64 result; // rax
  __int64 Heap; // rax
  HANDLE v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // r9
  unsigned int *v15; // rcx
  int v16; // ebx
  __int64 v17; // r9
  size_t v18; // rax
  __int64 v19; // rbx
  int v20; // esi
  __int64 v21; // r9
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h]
  const wchar_t *v28; // [rsp+60h] [rbp-A0h]
  _WORD v29[2]; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v31; // [rsp+70h] [rbp-90h]
  _QWORD v32[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v33[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  _WORD *v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A4h] [rbp-5Ch]
  __int128 v38; // [rsp+A8h] [rbp-58h]
  __int128 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-38h] BYREF
  int v41; // [rsp+D0h] [rbp-30h]
  _BYTE v42[128]; // [rsp+E0h] [rbp-20h] BYREF

  Handle = 0LL;
  v33[1] = 0;
  v37 = 0;
  v40 = 0LL;
  v5 = 12;
  v41 = 0;
  v24 = 0;
  v23 = 0;
  v27 = 0;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v30 = 0;
  v31 = L"RXACT";
  v7 = 2 * wcslen(L"RXACT");
  v33[0] = 48;
  v34 = a1;
  v36 = 192;
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v29[0] = v7;
  v29[1] = v7 + 2;
  v35 = v29;
  v38 = 0LL;
  result = ZwCreateKey(&Handle, 196639LL, v33, 0LL, 0LL, 0, &v24);
  if ( (int)result < 0 )
    return result;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  *a3 = Heap;
  if ( !Heap )
  {
    NtDeleteKey(Handle);
    NtClose(Handle);
    return 3221225495LL;
  }
  *(_QWORD *)(Heap + 8) = Handle;
  *(_QWORD *)Heap = a1;
  *(_BYTE *)(Heap + 16) = 1;
  *(_QWORD *)(Heap + 24) = 0LL;
  if ( v24 == 1 )
  {
    LODWORD(v40) = 1;
    v16 = ZwSetValueKey(Handle, v32, 0LL, 0LL, &v40, 12);
    if ( v16 >= 0 )
      return 1073741828LL;
    NtDeleteKey(Handle);
    goto LABEL_12;
  }
  v10 = Handle;
  v25 = 24;
  v39 = 0LL;
  v11 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  v12 = v11;
  if ( !v11 )
  {
    v16 = -1073741670;
    goto LABEL_12;
  }
  v13 = NtQueryValueKey(v10, &v39, 2LL, v11, v25, &v25);
  v15 = (unsigned int *)(v12 + 8);
  if ( v13 == -1073741772 )
  {
    v16 = 0;
    *v15 = 0;
    *(_DWORD *)(v12 + 4) = 0;
  }
  else
  {
    v16 = v13;
    if ( v13 < 0 && v13 != -2147483643 )
      goto LABEL_11;
  }
  v5 = *v15;
  if ( v16 >= 0 )
    memmove(&v40, (const void *)(v12 + 12), v5);
LABEL_11:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12, v14);
  if ( v16 < 0 )
  {
LABEL_12:
    NtClose(Handle);
LABEL_13:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3, v17);
    return (unsigned int)v16;
  }
  if ( v5 != 12 || (_DWORD)v40 != 1 )
  {
    v16 = -1073741736;
    goto LABEL_12;
  }
  v27 = 0;
  v28 = L"Log";
  v18 = 2 * wcslen(L"Log");
  if ( v18 >= 0xFFFE )
    LOWORD(v18) = -4;
  v26[0] = v18;
  v26[1] = v18 + 2;
  if ( (int)NtQueryValueKey(Handle, v26, 0LL, v42, 128, &v23) < 0 )
    return 0LL;
  if ( !a2 )
    return 2147483672LL;
  result = NtQueryValueKey(Handle, v26, 1LL, 0LL, 0, &v23);
  if ( (_DWORD)result == -1073741789 )
  {
    v19 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v23);
    if ( v19 )
    {
      v20 = NtQueryValueKey(Handle, v26, 1LL, v19, v23, &v23);
      if ( v20 >= 0 )
      {
        *(_QWORD *)(*a3 + 24) = v19 + *(unsigned int *)(v19 + 8);
        *(_BYTE *)(*a3 + 16) = 0;
        v20 = RXactpCommit(*a3);
        if ( v20 >= 0 )
        {
          ZwDeleteValueKey(Handle, v26);
          *(_QWORD *)(*a3 + 24) = v19;
          return RtlAbortRXact(*a3);
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19, v21);
      v16 = v20;
      goto LABEL_13;
    }
    return 3221225495LL;
  }
  return result;
}
