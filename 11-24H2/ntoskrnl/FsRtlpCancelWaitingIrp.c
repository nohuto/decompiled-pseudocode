/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x14049FDC0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x1405817F0 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *i; // rbx
  _QWORD *v8; // r13
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp-108h] BYREF
  int v11; // [rsp+34h] [rbp-104h] BYREF
  int v12; // [rsp+38h] [rbp-100h] BYREF
  int v13; // [rsp+3Ch] [rbp-FCh] BYREF
  __int64 v14; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-F0h]
  __int64 v16; // [rsp+50h] [rbp-E8h]
  __int64 v17; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v21; // [rsp+90h] [rbp-A8h]
  int v22; // [rsp+98h] [rbp-A0h]
  int v23; // [rsp+9Ch] [rbp-9Ch]
  int *v24; // [rsp+A0h] [rbp-98h]
  int v25; // [rsp+A8h] [rbp-90h]
  int v26; // [rsp+ACh] [rbp-8Ch]
  struct _EVENT_DATA_DESCRIPTOR v27[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 *v28; // [rsp+D0h] [rbp-68h]
  int v29; // [rsp+D8h] [rbp-60h]
  int v30; // [rsp+DCh] [rbp-5Ch]
  int *v31; // [rsp+E0h] [rbp-58h]
  int v32; // [rsp+E8h] [rbp-50h]
  int v33; // [rsp+ECh] [rbp-4Ch]
  __int64 *v34; // [rsp+F0h] [rbp-48h]
  int v35; // [rsp+F8h] [rbp-40h]
  int v36; // [rsp+FCh] [rbp-3Ch]
  char *v37; // [rsp+100h] [rbp-38h]
  int v38; // [rsp+108h] [rbp-30h]
  int v39; // [rsp+10Ch] [rbp-2Ch]

  v3 = *(_QWORD *)(a1 + 56);
  v16 = v3;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v17 = v3;
    v28 = &v17;
    v29 = 8;
    v30 = 0;
    v12 = *(_DWORD *)(v3 + 144);
    v31 = &v12;
    v32 = 4;
    v33 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140043E90, 0LL, 0LL, 4u, v27);
  }
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 88); ; i = (_QWORD *)*i )
  {
    v15 = i;
    if ( i == (_QWORD *)(v3 + 88) )
      break;
    v8 = i;
    v9 = i[2];
    if ( v9 )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v18 = v3;
        v28 = &v18;
        v29 = 8;
        v30 = 0;
        v13 = *(_DWORD *)(v3 + 144);
        v31 = &v13;
        v32 = 4;
        v33 = 0;
        v19 = v9;
        v34 = &v19;
        v35 = 8;
        v36 = 0;
        v10 = *(_BYTE *)(v9 + 68);
        v37 = &v10;
        v38 = 1;
        v39 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)byte_140043DE3,
          0LL,
          0LL,
          6u,
          v27);
      }
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        v15 = i;
        FsRtlpRemoveAndCompleteWaitingIrp(v8, v4, v5, v6);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v14 = v3;
    v21 = &v14;
    v22 = 8;
    v23 = 0;
    v11 = *(_DWORD *)(v3 + 144);
    v24 = &v11;
    v25 = 4;
    v26 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140043E4B, 0LL, 0LL, 4u, &v20);
  }
}
