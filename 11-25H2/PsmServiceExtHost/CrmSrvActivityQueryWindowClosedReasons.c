/*
 * XREFs of CrmSrvActivityQueryWindowClosedReasons @ 0x18000DF50
 * Callers:
 *     CrmRpcSrvActivityQueryWindowClosedReasons @ 0x18000DF30 (CrmRpcSrvActivityQueryWindowClosedReasons.c)
 *     CrmpInProcActivityQueryWindowClosedReasons @ 0x1800772A0 (CrmpInProcActivityQueryWindowClosedReasons.c)
 * Callees:
 *     CrmLogSrvActivityQueryWindowClosedReasonsStart @ 0x18000E1DC (CrmLogSrvActivityQueryWindowClosedReasonsStart.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CrmActivityDereference @ 0x180032160 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityQueryWindowClosedReasons(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v8; // r14
  unsigned int *i; // rbx
  unsigned __int64 v10; // rcx
  _DWORD *Heap; // rdi
  unsigned int j; // r8d
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rdx
  int v17; // eax
  int v18; // [rsp+30h] [rbp-A9h] BYREF
  int v19; // [rsp+34h] [rbp-A5h] BYREF
  int v20; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-99h] BYREF
  __int64 v22; // [rsp+48h] [rbp-91h] BYREF
  char v23[32]; // [rsp+50h] [rbp-89h] BYREF
  UUID *v24; // [rsp+70h] [rbp-69h]
  __int64 v25; // [rsp+78h] [rbp-61h]
  int *v26; // [rsp+80h] [rbp-59h]
  __int64 v27; // [rsp+88h] [rbp-51h]
  __int64 v28; // [rsp+90h] [rbp-49h]
  int v29; // [rsp+98h] [rbp-41h]
  int v30; // [rsp+9Ch] [rbp-3Dh]
  int *v31; // [rsp+A0h] [rbp-39h]
  __int64 v32; // [rsp+A8h] [rbp-31h]
  __int64 *v33; // [rsp+B0h] [rbp-29h]
  __int64 v34; // [rsp+B8h] [rbp-21h]
  unsigned int *v35; // [rsp+C0h] [rbp-19h]
  __int64 v36; // [rsp+C8h] [rbp-11h]
  int *v37; // [rsp+D0h] [rbp-9h]
  __int64 v38; // [rsp+D8h] [rbp-1h]
  __int64 v39; // [rsp+E0h] [rbp+7h]
  int v40; // [rsp+E8h] [rbp+Fh]
  int v41; // [rsp+ECh] [rbp+13h]

  v18 = 1601;
  v8 = 0LL;
  CrmLogSrvActivityQueryWindowClosedReasonsStart();
  RtlAcquireSRWLockShared(a2);
  for ( i = *(unsigned int **)(a2 + 56); ; i = *(unsigned int **)i )
  {
    if ( i == (unsigned int *)(a2 + 56) )
      goto LABEL_17;
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_17:
    v14 = -1073741811;
    RtlReleaseSRWLockShared(a2);
    goto LABEL_13;
  }
  RtlReleaseSRWLockShared(a2);
  v10 = 4LL * i[24];
  v18 = i[16];
  Heap = HampAllocateHeap(v10);
  if ( Heap )
  {
    RtlAcquireSRWLockShared(i + 20);
    for ( j = 0; j < i[27]; ++j )
    {
      v13 = *((_QWORD *)i + 14) + 56LL * j;
      if ( !*(_DWORD *)(v13 + 48) )
      {
        Heap[v8] = *(_DWORD *)(v13 + 32);
        v8 = (unsigned int)(v8 + 1);
      }
    }
    RtlReleaseSRWLockShared(i + 20);
    *a3 = (__int64)Heap;
    v14 = 0;
    *a4 = v8;
  }
  else
  {
    v14 = -1073741801;
  }
  CrmActivityDereference(i);
LABEL_13:
  v15 = *a3;
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 && (qword_1800E7300 & 1) == qword_1800E7300 )
  {
    v24 = &Uuid;
    v19 = *(_DWORD *)(a2 + 24);
    v26 = &v19;
    v28 = a2 + 72;
    v17 = *(unsigned __int8 *)(a2 + 73);
    v39 = v15;
    v25 = 16LL;
    v27 = 4LL;
    v30 = 0;
    v29 = 4 * v17 + 8;
    v20 = v18;
    v31 = &v20;
    v33 = &v22;
    v35 = &v21;
    LOWORD(v18) = v8;
    v37 = &v18;
    v40 = 4 * (unsigned __int16)v8;
    v32 = 4LL;
    v22 = a1;
    v34 = 8LL;
    v21 = v14;
    v36 = 4LL;
    v38 = 2LL;
    v41 = 0;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D121C, 0LL, 0LL, 10, v23);
  }
  return v14;
}
