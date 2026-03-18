/*
 * XREFs of IopPerfCompletionRoutine @ 0x1404A7290
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopPerfCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  char v6; // r15
  char v7; // r14
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // ebp
  __int64 v12; // rbx
  char v13; // al
  _QWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+40h] [rbp-48h]
  _QWORD *v16; // [rsp+48h] [rbp-40h] BYREF
  int v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+54h] [rbp-34h]

  v3 = *a3;
  v6 = *(_BYTE *)(a2 + 67);
  v7 = *(_BYTE *)(a2 + 66) + 1;
  *(_BYTE *)(v3 + 3) = *((_BYTE *)a3 + 28) | *(_BYTE *)(*a3 + 3) & 2;
  v8 = a3[2];
  *(_QWORD *)(v3 + 56) = v8;
  v9 = a3[1];
  *(_QWORD *)(v3 + 64) = v9;
  if ( v8 )
  {
    v15 = *((_DWORD *)a3 + 6);
    v14[0] = v8;
    v14[1] = a2;
    v18 = 0;
    v10 = guard_dispatch_icall_no_overrides(a1, a2, v9, v8);
    v17 = 20;
    v16 = v14;
    EtwTraceKernelEvent((int)&v16, 1, 0x20000010u, 293, 5249026);
    if ( v10 == -1073741802 )
      return v10;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v10 = 0;
  }
  if ( v6 != v7 )
  {
    a3[2] = 0LL;
    v12 = v3 + 72;
    a3[1] = *(_QWORD *)(v12 + 64);
    *a3 = v12;
    *((_BYTE *)a3 + 28) = *(_BYTE *)(v12 + 3);
    v13 = *(_BYTE *)(v12 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( v13 < 0 )
        goto LABEL_8;
    }
    else if ( (v13 & 0x40) != 0 )
    {
      goto LABEL_8;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v13 & 0x20) == 0 )
    {
      *(_BYTE *)(v12 + 3) = v13 | 0xC0;
      goto LABEL_9;
    }
LABEL_8:
    a3[2] = *(_QWORD *)(v12 + 56);
    a3[1] = *(_QWORD *)(v12 + 64);
LABEL_9:
    *(_QWORD *)(v12 + 64) = a3;
    *(_QWORD *)(v12 + 56) = IopPerfCompletionRoutine;
  }
  return v10;
}
