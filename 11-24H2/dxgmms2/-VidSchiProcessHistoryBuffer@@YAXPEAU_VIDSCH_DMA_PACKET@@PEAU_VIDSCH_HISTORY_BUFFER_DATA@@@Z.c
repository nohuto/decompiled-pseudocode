/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x140040A1C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqqqUR4_EtwWriteTransfer @ 0x140040E38 (McTemplateK0pqqqqUR4_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, struct _VIDSCH_HISTORY_BUFFER_DATA *a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r8d
  unsigned __int64 v17; // r15
  int v18; // r13d
  unsigned int v19; // ecx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rcx
  int v30; // [rsp+50h] [rbp-39h]
  __int64 v31; // [rsp+58h] [rbp-31h]
  __int128 v32; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-1h] BYREF
  int v35; // [rsp+90h] [rbp+7h]
  int v36; // [rsp+94h] [rbp+Bh]
  __int64 v37; // [rsp+98h] [rbp+Fh]
  __int64 v38; // [rsp+A0h] [rbp+17h]
  unsigned int v39; // [rsp+A8h] [rbp+1Fh]
  int v40; // [rsp+ACh] [rbp+23h]
  unsigned int v42; // [rsp+100h] [rbp+77h]
  int v43; // [rsp+108h] [rbp+7Fh]
  unsigned int v44; // [rsp+108h] [rbp+7Fh]

  if ( (qword_140081010 & 0x461C8ED7) != 0
    && (qword_140081018 & 0xFFFFFFFFB9E37128uLL) == 0
    && (qword_140081010 & 0x4000) != 0 )
  {
    v2 = *((_QWORD *)a1 + 6);
    v3 = *(_QWORD *)a2;
    v31 = v2;
    v4 = *(_QWORD *)(v2 + 96);
    v43 = *((_DWORD *)a2 + 2);
    v5 = *(_QWORD *)(v4 + 24);
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(_QWORD *)(v5 + 688);
    v8 = v7 + 8 * v6;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 760) )
      v7 += 8 * v6;
    else
      v8 = *(_QWORD *)(v5 + 688);
    v9 = *(unsigned int *)(v3 + 8);
    v10 = v3 + *((unsigned int *)a2 + 2);
    v11 = v3 + (unsigned int)(v9 + 16);
    v32 = *(_OWORD *)v3;
    if ( v11 < v3 || v11 > v10 )
    {
      WdLogSingleEntry1(1LL, v9);
      WdLogGlobalForLineNumber = 11823;
LABEL_24:
      DxgkLogInternalTriageEvent(v21, 0x40000LL);
      return;
    }
    v12 = *(_QWORD *)(v5 + 8);
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 2992LL)
                                + 344LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 6LL)
                                + 40)
                    + 4LL * *(unsigned __int16 *)(*(_QWORD *)v7 + 8LL));
    v42 = v13;
    if ( v13 )
    {
      v14 = 8;
      if ( v13 <= 0x20 )
        v14 = 4;
      v15 = 8064;
      if ( v13 <= 0x20 )
        v15 = 16128;
      v30 = v14;
      v16 = *(_OWORD *)v3;
      v44 = v15;
      v17 = DWORD1(v32);
      while ( 1 )
      {
        v18 = v17;
        if ( v15 < (unsigned int)v17 )
          v18 = v15;
        v19 = v18 * v14;
        v20 = v19;
        if ( v19 > v10 - v11 )
          break;
        if ( (byte_140081242 & 1) != 0 )
        {
          McTemplateK0pqqqqUR4_EtwWriteTransfer(
            (unsigned int)&DxgkControlGuid_Context,
            v13,
            v16,
            *(_QWORD *)(v2 + 56),
            v16,
            *((_DWORD *)a1 + 24),
            v13,
            v19,
            v11);
          v13 = v42;
          v16 = v32;
          v2 = v31;
        }
        v11 += v20;
        LODWORD(v17) = v17 - v18;
        if ( !(_DWORD)v17 )
          return;
        v15 = v44;
        v14 = v30;
      }
      WdLogSingleEntry3(1LL, v11, v10, v19);
      WdLogGlobalForLineNumber = 11864;
      goto LABEL_24;
    }
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1256), &LockHandle);
    v22 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1248LL);
    if ( v22 )
    {
      v36 = 0;
      v40 = 0;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v5 + 8);
        v35 = v43;
        v34 = v3;
        v37 = v22;
        v38 = 64512LL;
        v24 = *(_QWORD *)(v31 + 64);
        v39 = 0;
        v25 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *))DxgCoreInterface[50])(v23, v24, &v34);
        if ( v25 < 0 )
          break;
        if ( HIDWORD(v38) )
        {
          if ( v39 == 32 )
          {
            v27 = 4;
          }
          else
          {
            if ( v39 != 64 )
            {
              WdLogSingleEntry1(1LL, v39);
              WdLogGlobalForLineNumber = 11953;
              goto LABEL_43;
            }
            v27 = 8;
          }
          v28 = HIDWORD(v38) * v27;
          if ( v28 > 0xFC00 )
          {
            WdLogSingleEntry3(1LL, HIDWORD(v38), v39, 64512LL);
            v29 = HIDWORD(v38);
            WdLogGlobalForLineNumber = 11963;
            goto LABEL_43;
          }
          if ( (byte_140081242 & 1) != 0 )
            McTemplateK0pqqqqUR4_EtwWriteTransfer(
              (unsigned int)&DxgkControlGuid_Context,
              v28,
              v26,
              *(_QWORD *)(v31 + 56),
              v32,
              *((_DWORD *)a1 + 24),
              v39,
              v28,
              v22);
        }
        if ( !v40 )
          goto LABEL_27;
      }
      WdLogSingleEntry1(1LL, v25);
      WdLogGlobalForLineNumber = 11925;
LABEL_43:
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
    }
LABEL_27:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
