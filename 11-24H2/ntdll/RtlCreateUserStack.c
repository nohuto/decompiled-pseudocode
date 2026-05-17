/*
 * XREFs of RtlCreateUserStack @ 0x1800F51C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlCreateUserStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  struct _PEB *v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // edi
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 MinimumStackCommit; // [rsp+50h] [rbp-68h]
  int v28; // [rsp+58h] [rbp-60h] BYREF
  __int64 v29; // [rsp+5Ch] [rbp-5Ch]
  int v30; // [rsp+64h] [rbp-54h]
  unsigned __int64 v31; // [rsp+68h] [rbp-50h]
  __int64 v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+78h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v36; // [rsp+D8h] [rbp+20h] BYREF

  v35 = a3;
  v24 = 0LL;
  v33 = 0LL;
  v6 = HIBYTE(a4);
  v7 = a4 & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(a4) > 0x40u )
    return 3221225485LL;
  if ( !v7 )
    return 3221225485LL;
  v8 = a5;
  if ( !a5 || a5 < v7 )
    return 3221225485LL;
  v9 = 3 * v7;
  v10 = NtCurrentPeb();
  v11 = a1;
  v12 = a2;
  if ( !a1 || !a2 )
  {
    v23 = 0LL;
    RtlImageNtHeaderEx(1, (unsigned __int64)v10->ImageBaseAddress, 0LL, &v23);
    if ( !v23 )
      return 3221225595LL;
    if ( !a1 )
      v11 = *(_QWORD *)(v23 + 104);
    if ( !v12 )
      v12 = *(_QWORD *)(v23 + 96);
    a3 = v35;
  }
  if ( !v11 )
    v11 = 0x4000LL;
  if ( v11 >= v12 )
    v12 = (v11 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v14 = ~(v7 - 1);
  v15 = v14 & (v7 + v11 - 1);
  v16 = ~(v8 - 1);
  v17 = v16 & (v8 + v12 - 1);
  MinimumStackCommit = v10->MinimumStackCommit;
  if ( MinimumStackCommit && v15 < MinimumStackCommit )
  {
    v15 = v14 & (v7 + MinimumStackCommit - 1);
    if ( v15 >= v17 )
      v17 = (v15 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v17 = v16 & (v8 + v17 - 1);
  }
  v28 = v6;
  v29 = 0LL;
  v30 = 0;
  v31 = v17;
  v32 = a3;
  result = NtSetInformationProcess(-1LL, 41LL, &v28);
  if ( (int)result >= 0 )
  {
    v18 = a6;
    *a6 = 0LL;
    v18[1] = 0LL;
    v19 = v33;
    v18[4] = v33;
    v18[2] = v19 + v17;
    v36 = v17 + v19 - v15;
    v20 = v17 - v15;
    v25 = v15;
    v21 = ZwAllocateVirtualMemory(-1LL, &v36, 0LL, &v25, 4096, 4);
    if ( v21 < 0
      || (v22 = v36, v18[3] = v36, v20 >= v9)
      && (v36 = v22 - v9, v24 = v9, v21 = ZwAllocateVirtualMemory(-1LL, &v36, 0LL, &v24, 4096, 260), v21 < 0) )
    {
      v26 = v18[4];
      v23 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v26, &v23, 0x8000LL);
      return (unsigned int)v21;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
