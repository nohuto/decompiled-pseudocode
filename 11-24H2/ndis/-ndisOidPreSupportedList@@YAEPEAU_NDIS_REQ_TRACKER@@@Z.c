/*
 * XREFs of ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050710
 * Callers:
 *     ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140016320 (-ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400173A0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisOidPreSupportedList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned int v5; // r14d
  KIRQL v6; // dl
  unsigned __int8 v7; // di
  KIRQL v9; // dl
  KIRQL v10; // dl
  unsigned int v11; // ebp
  KIRQL v12; // dl
  unsigned __int8 v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v13 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      42,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 16);
    }
    else
    {
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
          goto LABEL_18;
        v4 = *(_QWORD *)a1;
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*(struct _NDIS_MINIPORT_BLOCK **)a1, &v13);
        if ( *(_QWORD *)(v4 + 496) )
        {
          v11 = *(_DWORD *)(v4 + 200) + *(_DWORD *)(v4 + 3408);
          *((_DWORD *)a1 + 10) = 0;
          if ( *(_DWORD *)(v1 + 48) >= v11 )
          {
            memmove(*(void **)(v1 + 40), *(const void **)(v4 + 496), *(unsigned int *)(v4 + 200));
            memmove(
              (void *)(*(_QWORD *)(v1 + 40) + *(unsigned int *)(v4 + 200)),
              *(const void **)(v4 + 3400),
              *(unsigned int *)(v4 + 3408));
            v12 = v13;
            *(_QWORD *)(v4 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v12);
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v11;
            goto LABEL_12;
          }
          *(_DWORD *)(v1 + 56) = v11;
          goto LABEL_11;
        }
LABEL_17:
        v9 = v13;
        *(_QWORD *)(v4 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v9);
LABEL_18:
        v7 = 0;
        goto LABEL_13;
      }
      v4 = *(_QWORD *)a1;
      if ( !*(_QWORD *)a1 )
        v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL);
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(v4 + 3088) )
    {
      v5 = *(_DWORD *)(v4 + 3096) + *(_DWORD *)(v4 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) >= v5 )
      {
        memmove(*(void **)(v1 + 40), *(const void **)(v4 + 3088), *(unsigned int *)(v4 + 3096));
        memmove(
          (void *)(*(_QWORD *)(v1 + 40) + *(unsigned int *)(v4 + 3096)),
          *(const void **)(v4 + 3400),
          *(unsigned int *)(v4 + 3408));
        v10 = v13;
        *(_QWORD *)(v4 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v10);
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v5;
        goto LABEL_12;
      }
      *(_DWORD *)(v1 + 56) = v5;
LABEL_11:
      v6 = v13;
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_QWORD *)(v4 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v6);
LABEL_12:
      v7 = 1;
      goto LABEL_13;
    }
    goto LABEL_17;
  }
  v7 = 1;
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      43,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1);
  return v7;
}
