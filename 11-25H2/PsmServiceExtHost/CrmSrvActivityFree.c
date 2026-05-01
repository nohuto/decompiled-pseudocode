/*
 * XREFs of CrmSrvActivityFree @ 0x180031DAC
 * Callers:
 *     CrmpInProcActivityFree @ 0x180031A70 (CrmpInProcActivityFree.c)
 * Callees:
 *     CrmLogSrvActivityFreeStart @ 0x1800320C8 (CrmLogSrvActivityFreeStart.c)
 *     CrmActivityDereference @ 0x180032160 (CrmActivityDereference.c)
 *     CrmActivityCleanup @ 0x180032E80 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  int v4; // esi
  volatile signed __int64 *i; // rbx
  volatile signed __int64 v6; // rcx
  volatile signed __int64 **v7; // rax
  signed __int64 v8; // rax
  bool v9; // cc
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  char v21[32]; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  int *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  __int64 *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  int *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  char v40[32]; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  __int64 *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  int *v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]

  v4 = 1601;
  CrmLogSrvActivityFreeStart();
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  for ( i = *(volatile signed __int64 **)(a2 + 56); ; i = (volatile signed __int64 *)*i )
  {
    if ( i == (volatile signed __int64 *)(a2 + 56) )
      goto LABEL_22;
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64(i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_22:
    *(_DWORD *)(a2 + 8) = 0;
    v11 = -1073741811;
    LOBYTE(v10) = RtlReleaseSRWLockExclusive(a2);
    goto LABEL_14;
  }
  v6 = *i;
  v4 = *((_DWORD *)i + 16);
  if ( *(volatile signed __int64 **)(*i + 8) != i || (v7 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v7 != i) )
    __fastfail(3u);
  *v7 = (volatile signed __int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  *((_QWORD *)i + 1) = i;
  *i = (volatile signed __int64)i;
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 2) != 0 && (qword_1800E7300 & 2) == qword_1800E7300 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v19 = v12;
    v44 = &v19;
    v15 = *((_DWORD *)i + 17);
    v47 = &v15;
    v41 = &Uuid;
    v42 = 16;
    v45 = 8;
    v48 = 4;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D238C, 0LL, 0LL, 5, v40);
  }
  CrmActivityDereference((PVOID)i);
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  v8 = _InterlockedExchangeAdd64(i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  v10 = v8 - 1;
  if ( v9 )
  {
    if ( v10 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    LOBYTE(v10) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)i);
  }
  v11 = 0;
LABEL_14:
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 )
  {
    v10 = qword_1800E7300 & 1;
    if ( v10 == qword_1800E7300 )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v22 = &Uuid;
      v16 = *(_DWORD *)(a2 + 24);
      v25 = &v16;
      v28 = a2 + 72;
      v13 = *(unsigned __int8 *)(a2 + 73);
      v26 = 4;
      v32 = 4;
      v35 = 8;
      v38 = 4;
      v29 = 4 * v13 + 8;
      v23 = 16;
      v31 = &v17;
      v34 = &v20;
      v37 = &v18;
      v17 = v4;
      v20 = a1;
      v18 = v11;
      LOBYTE(v10) = tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D15A9, 0LL, 0LL, 8, v21);
    }
  }
  return v10;
}
