/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x140429024
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x14057E040 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp-108h] BYREF
  int v8; // [rsp+34h] [rbp-104h] BYREF
  int v9; // [rsp+38h] [rbp-100h] BYREF
  int v10; // [rsp+3Ch] [rbp-FCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-F0h]
  __int64 v13; // [rsp+50h] [rbp-E8h]
  __int64 v14; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v18; // [rsp+90h] [rbp-A8h]
  int v19; // [rsp+98h] [rbp-A0h]
  int v20; // [rsp+9Ch] [rbp-9Ch]
  int *v21; // [rsp+A0h] [rbp-98h]
  int v22; // [rsp+A8h] [rbp-90h]
  int v23; // [rsp+ACh] [rbp-8Ch]
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 *v25; // [rsp+D0h] [rbp-68h]
  int v26; // [rsp+D8h] [rbp-60h]
  int v27; // [rsp+DCh] [rbp-5Ch]
  int *v28; // [rsp+E0h] [rbp-58h]
  int v29; // [rsp+E8h] [rbp-50h]
  int v30; // [rsp+ECh] [rbp-4Ch]
  __int64 *v31; // [rsp+F0h] [rbp-48h]
  int v32; // [rsp+F8h] [rbp-40h]
  int v33; // [rsp+FCh] [rbp-3Ch]
  char *v34; // [rsp+100h] [rbp-38h]
  int v35; // [rsp+108h] [rbp-30h]
  int v36; // [rsp+10Ch] [rbp-2Ch]

  v3 = *(_QWORD *)(a1 + 56);
  v13 = v3;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v14 = v3;
    v25 = &v14;
    v26 = 8;
    v27 = 0;
    v9 = *(_DWORD *)(v3 + 144);
    v28 = &v9;
    v29 = 4;
    v30 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&word_1400435AE, 0LL, 0LL, 4u, v24);
  }
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 88); ; i = (_QWORD *)*i )
  {
    v12 = i;
    if ( i == (_QWORD *)(v3 + 88) )
      break;
    v5 = i;
    v6 = i[2];
    if ( v6 )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v15 = v3;
        v25 = &v15;
        v26 = 8;
        v27 = 0;
        v10 = *(_DWORD *)(v3 + 144);
        v28 = &v10;
        v29 = 4;
        v30 = 0;
        v16 = v6;
        v31 = &v16;
        v32 = 8;
        v33 = 0;
        v7 = *(_BYTE *)(v6 + 68);
        v34 = &v7;
        v35 = 1;
        v36 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)&word_140043546,
          0LL,
          0LL,
          6u,
          v24);
      }
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        v12 = i;
        FsRtlpRemoveAndCompleteWaitingIrp(v5);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v11 = v3;
    v18 = &v11;
    v19 = 8;
    v20 = 0;
    v8 = *(_DWORD *)(v3 + 144);
    v21 = &v8;
    v22 = 4;
    v23 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140043501, 0LL, 0LL, 4u, &v17);
  }
}
