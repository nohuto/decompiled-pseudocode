/*
 * XREFs of CmpCaptureKeyValueArray @ 0x140961F60
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmpDoesBufferRequireCapturing @ 0x140962920 (CmpDoesBufferRequireCapturing.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        struct _PRIVILEGE_SET **a5,
        __int64 *a6)
{
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rsi
  struct _PRIVILEGE_SET *v9; // r14
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // rdx
  unsigned int v12; // eax
  unsigned __int64 v13; // r10
  __int64 v14; // r9
  char *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r15
  unsigned int i; // r12d
  unsigned __int16 *v22; // r13
  const void *v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rbx
  __int64 v27; // rax
  int v29; // [rsp+20h] [rbp-88h]
  ULONG_PTR v30; // [rsp+28h] [rbp-80h]
  unsigned __int16 *v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+30h] [rbp-78h]
  ULONG *v33; // [rsp+50h] [rbp-58h]
  __int128 v34; // [rsp+58h] [rbp-50h]

  v6 = a3;
  v7 = a2;
  TransientPoolWithQuota = 0LL;
  v9 = 0LL;
  if ( !a2 )
    goto LABEL_38;
  TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(a1, 24LL * a2, 0x33384D43u);
  if ( !TransientPoolWithQuota )
    goto LABEL_44;
  if ( (_BYTE)v6 )
  {
    v9 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v10, 16LL * v7, 0x33384D43u);
    if ( !v9 )
      goto LABEL_44;
  }
  v11 = 0LL;
  v30 = 0LL;
  v12 = 0;
  v29 = 0;
  v13 = 0x7FFFFFFF0000LL;
  v14 = a1;
  while ( v12 < v7 )
  {
    v10 = 3LL * v12;
    v33 = &TransientPoolWithQuota->PrivilegeCount + 6 * v12;
    v15 = *(char **)(v14 + 24LL * v12);
    if ( (_BYTE)v6 )
    {
      v31 = (unsigned __int16 *)((char *)v9 + 16 * v12);
      DWORD1(v34) = 0;
      if ( (unsigned __int64)v15 >= v13 )
        v15 = (char *)v13;
      LODWORD(v34) = *(_DWORD *)v15;
      *((_QWORD *)&v34 + 1) = *((_QWORD *)v15 + 1);
      v15 = (char *)v9 + 16 * v12;
      *(_OWORD *)v31 = v34;
      v16 = *v31;
      if ( (_WORD)v16 )
      {
        v10 = *((_QWORD *)v31 + 1);
        if ( (v10 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v10 + v16 > v13 || v10 + v16 < v10 )
          v15 = (char *)v31;
      }
      if ( (*v15 & 1) != 0 )
      {
        v19 = -1073741811;
        goto LABEL_39;
      }
    }
    *(_QWORD *)v33 = v15;
    if ( !*(_WORD *)v15 )
    {
      *((_QWORD *)v15 + 1) = 0LL;
      *((_WORD *)v15 + 1) = 0;
LABEL_27:
      v11 = v30;
      goto LABEL_20;
    }
    if ( !(unsigned __int8)CmpDoesBufferRequireCapturing(v6, *((_QWORD *)v15 + 1)) )
      goto LABEL_27;
    v11 = v30 + v17;
    if ( v11 < v30 )
    {
      v11 = -1LL;
      v18 = -1073741675;
    }
    else
    {
      v18 = 0;
    }
    v30 = v11;
    if ( v18 < 0 )
    {
      v19 = -1073741670;
      goto LABEL_39;
    }
LABEL_20:
    v12 = ++v29;
  }
  if ( !v11 )
  {
    *a4 = TransientPoolWithQuota;
    TransientPoolWithQuota = 0LL;
    *a5 = v9;
    v9 = 0LL;
    goto LABEL_38;
  }
  v20 = CmpAllocateTransientPoolWithQuota(v10, v11, 0x33384D43u);
  if ( !v20 )
  {
LABEL_44:
    v19 = -1073741670;
    goto LABEL_39;
  }
  v32 = 0LL;
  for ( i = 0; i < v7; ++i )
  {
    v22 = (unsigned __int16 *)*((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + 3 * i);
    if ( *v22 && (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, *((_QWORD *)v22 + 1)) )
    {
      v26 = v24 + v20;
      memmove((void *)(v24 + v20), v23, v25);
      *((_QWORD *)v22 + 1) = v26;
      v27 = *v22;
      v22[1] = v27;
      v32 += v27;
    }
    v7 = a2;
  }
  *a4 = TransientPoolWithQuota;
  TransientPoolWithQuota = 0LL;
  *a5 = v9;
  v9 = 0LL;
  *a6 = v20;
LABEL_38:
  v19 = 0;
LABEL_39:
  if ( TransientPoolWithQuota )
    CmSiFreeMemory(TransientPoolWithQuota);
  if ( v9 )
    CmSiFreeMemory(v9);
  return v19;
}
