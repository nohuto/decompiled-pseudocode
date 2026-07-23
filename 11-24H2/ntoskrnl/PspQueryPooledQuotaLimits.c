/*
 * XREFs of PspQueryPooledQuotaLimits @ 0x140AAE674
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryPooledQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r9
  PVOID Object[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v21; // [rsp+50h] [rbp-58h] BYREF
  __int128 v22; // [rsp+60h] [rbp-48h]
  __int128 v23; // [rsp+70h] [rbp-38h]
  __int128 v24; // [rsp+80h] [rbp-28h]
  unsigned __int64 v25; // [rsp+90h] [rbp-18h]

  Object[0] = 0LL;
  memset_0(&v21, 0, 0x48uLL);
  if ( a3 != 72 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsProcessType,
             a5,
             0x79517350u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)Object[0] + 95);
    v11 = v10[24];
    v12 = v10[16];
    *((_QWORD *)&v21 + 1) = v12;
    v13 = v10[17];
    v14 = v10[8];
    v15 = *v10;
    *(_QWORD *)&v23 = *v10;
    v16 = v10[1];
    v17 = v10[40];
    v18 = v10[32];
    *((_QWORD *)&v24 + 1) = v18;
    v19 = v10[33];
    if ( v11 <= v12 )
      v11 = v12;
    *(_QWORD *)&v22 = v11;
    if ( v14 <= v15 )
      v14 = v15;
    *((_QWORD *)&v23 + 1) = v14;
    if ( v17 <= v18 )
      v17 = v18;
    v25 = v17;
    if ( v13 <= v12 )
      v13 = v12;
    *(_QWORD *)&v21 = v13;
    if ( v16 <= v15 )
      v16 = v15;
    *((_QWORD *)&v22 + 1) = v16;
    if ( v19 <= v18 )
      v19 = v18;
    *(_QWORD *)&v24 = v19;
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
    *(_OWORD *)a2 = v21;
    *(_OWORD *)(a2 + 16) = v22;
    *(_OWORD *)(a2 + 32) = v23;
    *(_OWORD *)(a2 + 48) = v24;
    *(_QWORD *)(a2 + 64) = v25;
    if ( a4 )
      *a4 = 72;
    return 0LL;
  }
  return result;
}
