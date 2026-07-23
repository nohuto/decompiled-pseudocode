/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1409FD7C0
 * Callers:
 *     FsRtlNotifyReportChange @ 0x14070B7A0 (FsRtlNotifyReportChange.c)
 *     FsRtlNotifyFullReportChange @ 0x1409FD760 (FsRtlNotifyFullReportChange.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x1403E1A60 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlMultiByteToUnicodeSize @ 0x140904BB0 (RtlMultiByteToUnicodeSize.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1409FF0E4 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140A6BC2C (FsRtlNotifyUpdateBuffer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r15
  PLIST_ENTRY v12; // r8
  USHORT v14; // dx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *p_Flink; // r12
  _QWORD *v17; // rsi
  _QWORD *v18; // rcx
  char v19; // r11
  char v20; // bl
  PSTRING v21; // r10
  USHORT v22; // cx
  __int16 v23; // ax
  const void **v24; // r9
  size_t v25; // rdx
  __int16 v26; // ax
  char *v27; // rcx
  bool v28; // zf
  __int16 v29; // dx
  unsigned int v30; // r12d
  _QWORD *v31; // r13
  _QWORD *v32; // rcx
  __int16 v33; // dx
  char **p_Buffer; // rax
  char *Buffer; // r9
  int v36; // r8d
  int v37; // edx
  unsigned __int16 v38; // ax
  __int16 v39; // ax
  char v40; // r10
  int v41; // r8d
  int v42; // r9d
  unsigned int v43; // edx
  unsigned __int16 *v44; // r11
  unsigned __int16 *v45; // r11
  int v46; // r14d
  unsigned int v47; // r14d
  ULONG v48; // r14d
  CHAR *v49; // rdx
  unsigned __int16 v50; // cx
  ULONG Length; // eax
  unsigned int v52; // ebx
  ULONG v53; // r14d
  unsigned int v54; // r15d
  unsigned int v55; // eax
  PVOID Pool2; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int16 v61; // ax
  char v62; // [rsp+40h] [rbp-118h]
  USHORT v63; // [rsp+44h] [rbp-114h]
  unsigned __int16 v64; // [rsp+4Ch] [rbp-10Ch]
  unsigned __int16 v66; // [rsp+50h] [rbp-108h]
  int v67; // [rsp+54h] [rbp-104h]
  _QWORD *v68; // [rsp+70h] [rbp-E8h]
  CHAR *MultiByteString[2]; // [rsp+78h] [rbp-E0h] BYREF
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp-D0h] BYREF
  ULONG v71; // [rsp+8Ch] [rbp-CCh] BYREF
  ULONG v72[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+98h] [rbp-C0h]
  char *v74; // [rsp+A0h] [rbp-B8h]
  __int64 v75; // [rsp+A8h] [rbp-B0h] BYREF
  CHAR *v76; // [rsp+B0h] [rbp-A8h]
  CHAR *v77; // [rsp+B8h] [rbp-A0h]
  unsigned int v78; // [rsp+C0h] [rbp-98h]
  PSTRING v79; // [rsp+C8h] [rbp-90h]
  _QWORD *v80; // [rsp+D0h] [rbp-88h]
  _QWORD *v81; // [rsp+D8h] [rbp-80h]
  _QWORD *v82; // [rsp+E0h] [rbp-78h]
  __int128 v83; // [rsp+E8h] [rbp-70h] BYREF
  _QWORD *v84; // [rsp+F8h] [rbp-60h]
  PSTRING v85; // [rsp+100h] [rbp-58h]
  PSTRING v86; // [rsp+108h] [rbp-50h]
  unsigned int v87; // [rsp+114h] [rbp-44h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v85 = v11;
  v14 = TargetNameOffset;
  v79 = StreamName;
  v86 = StreamName;
  v83 = 0LL;
  v73 = 0LL;
  v75 = 0LL;
  *(_OWORD *)MultiByteString = 0LL;
  v62 = 0;
  v72[1] = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v74 = 0LL;
  v76 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v14 = v10;
    v12 = NotifyList;
  }
  ++*((_DWORD *)NotifySync + 16);
  p_Flink = &v12->Flink->Flink;
  v63 = v73;
  v77 = v76;
  v64 = v75;
  v66 = (unsigned __int16)MultiByteString[0];
  while ( 1 )
  {
    v81 = p_Flink;
    v68 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v17 = p_Flink - 4;
    v82 = p_Flink - 4;
    v18 = p_Flink - 4;
    v80 = p_Flink - 4;
    if ( v11 )
    {
      if ( *(_WORD *)v17[17] && (*((_DWORD *)v17 + 19) & FilterMatch) != 0 )
      {
        v21 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v83 + 1) = v11->Buffer;
          v22 = v10;
          LOWORD(v83) = v10;
          v23 = *((unsigned __int8 *)v17 + 144);
          if ( v14 != v23 )
          {
            v22 = v14 - v23;
            LOWORD(v83) = v14 - v23;
          }
          WORD1(v83) = v22;
          v21 = (PSTRING)&v83;
          NormalizedParentName = (PSTRING)&v83;
          v18 = p_Flink - 4;
        }
        v24 = (const void **)v17[17];
        v25 = *(unsigned __int16 *)v24;
        if ( (unsigned __int16)v25 <= v21->Length )
        {
          if ( (_WORD)v25 == v21->Length )
          {
            v20 = 1;
            goto LABEL_26;
          }
          v26 = *((_WORD *)v17 + 36);
          if ( (v26 & 1) != 0 )
          {
            if ( (v26 & 0x10) != 0
              || ((v27 = &v21->Buffer[*(unsigned __int16 *)v18[17]], *((_BYTE *)v17 + 144) != 1)
                ? (v28 = *(_WORD *)v27 == 92)
                : (v28 = *v27 == 92),
                  v28) )
            {
              v20 = 0;
LABEL_26:
              if ( !memcmp(v24[1], v21->Buffer, v25)
                && (v20 || !v17[2] || (unsigned __int8)guard_dispatch_icall_no_overrides(v17[1], TargetContext))
                && (!v17[8]
                 || !FilterContext
                 || (unsigned __int8)guard_dispatch_icall_no_overrides(v17[1], FilterContext)) )
              {
                v19 = v62;
LABEL_36:
                v29 = *((_WORD *)v17 + 36);
                if ( (v29 & 2) == 0 )
                {
                  v30 = *((_DWORD *)v17 + 24);
                  if ( v30 )
                  {
                    v31 = 0LL;
                    v84 = 0LL;
                    if ( *((_DWORD *)v17 + 25) )
                    {
                      v30 = *((_DWORD *)v17 + 25);
                    }
                    else
                    {
                      v32 = (_QWORD *)v17[6];
                      if ( v32 != v17 + 6 )
                      {
                        v31 = v32 - 21;
                        v84 = v32 - 21;
                        v30 = *(_DWORD *)(v32[2] + 8LL);
                      }
                    }
                    if ( v20 )
                    {
                      v38 = 0;
                      v66 = 0;
                      LOWORD(MultiByteString[0]) = 0;
                    }
                    else if ( v19 )
                    {
                      v38 = v66;
                    }
                    else
                    {
                      v33 = v29 & 0x10;
                      if ( v33 )
                      {
                        p_Buffer = &v85->Buffer;
                      }
                      else
                      {
                        p_Buffer = &v11->Buffer;
                        Buffer = NormalizedParentName->Buffer;
                        if ( Buffer == v11->Buffer )
                        {
                          v36 = *(unsigned __int16 *)v17[17];
                          v37 = *((unsigned __int8 *)v17 + 144);
                          MultiByteString[1] = &Buffer[v37 + v36];
                          v38 = NormalizedParentName->Length - v37 - v36;
                          goto LABEL_71;
                        }
                      }
                      if ( v74 )
                      {
                        v10 = v63;
                      }
                      else
                      {
                        v74 = *p_Buffer;
                        v63 = v10;
                        LOWORD(v73) = v10;
                        v39 = *((unsigned __int8 *)v17 + 144);
                        if ( TargetNameOffset != v39 )
                        {
                          v10 = TargetNameOffset - v39;
                          v63 = TargetNameOffset - v39;
                          LOWORD(v73) = TargetNameOffset - v39;
                        }
                        WORD1(v73) = v10;
                      }
                      v40 = 0;
                      v41 = 0;
                      if ( !v33 )
                      {
                        v42 = 1;
                        v43 = 0;
                        if ( *((_BYTE *)v17 + 144) == 1 )
                        {
                          while ( 1 )
                          {
                            v44 = (unsigned __int16 *)v17[17];
                            if ( v43 >= *v44 )
                              break;
                            if ( *(_BYTE *)(v43 + *((_QWORD *)v44 + 1)) == 92 )
                              ++v42;
                            ++v43;
                          }
                          while ( v74[v41] != 92 || (unsigned __int8)++v40 != v42 )
                            ++v41;
                        }
                        else
                        {
                          while ( 1 )
                          {
                            v45 = (unsigned __int16 *)v17[17];
                            if ( v43 >= *v45 >> 1 )
                              break;
                            if ( *(_WORD *)(*((_QWORD *)v45 + 1) + 2LL * v43) == 92 )
                              ++v42;
                            ++v43;
                          }
                          while ( *(_WORD *)&v74[2 * v41] != 92 || (unsigned __int8)++v40 != v42 )
                            ++v41;
                          v41 *= *((unsigned __int8 *)v17 + 144);
                        }
                        v19 = v62;
                      }
                      v67 = v41 + *((unsigned __int8 *)v17 + 144);
                      MultiByteString[1] = &v74[v67];
                      v38 = v10 - v67;
LABEL_71:
                      v66 = v38;
                      LOWORD(MultiByteString[0]) = v38;
                      WORD1(MultiByteString[0]) = v38;
                    }
                    v46 = 12;
                    if ( v19 )
                    {
                      v47 = StreamName->Length + 12;
                    }
                    else
                    {
                      if ( !v20 )
                      {
                        if ( *((_BYTE *)v17 + 144) == 1 )
                        {
                          BytesInUnicodeString = 0;
                          RtlMultiByteToUnicodeSize(&BytesInUnicodeString, MultiByteString[1], v38);
                          v48 = BytesInUnicodeString;
                        }
                        else
                        {
                          v48 = v38;
                        }
                        v46 = v48 + 14;
                      }
                      v49 = v77;
                      if ( v77 )
                      {
                        v50 = v64;
                      }
                      else
                      {
                        v49 = &v11->Buffer[TargetNameOffset];
                        v77 = v49;
                        v76 = v49;
                        v50 = v11->Length - TargetNameOffset;
                        v64 = v50;
                        LOWORD(v75) = v50;
                        WORD1(v75) = v50;
                      }
                      if ( *((_BYTE *)v17 + 144) == 1 )
                      {
                        v71 = 0;
                        RtlMultiByteToUnicodeSize(&v71, v49, v50);
                        v47 = v71 + v46;
                      }
                      else
                      {
                        v47 = v50 + v46;
                      }
                      if ( StreamName )
                      {
                        Length = v79->Length;
                        v52 = v47;
                        if ( *((_BYTE *)v17 + 144) == 2 )
                        {
                          v53 = Length + 2;
                        }
                        else
                        {
                          v72[0] = 0;
                          RtlMultiByteToUnicodeSize(v72, StreamName->Buffer, Length);
                          v53 = v72[0] + 2;
                        }
                        v47 = v52 + v53;
                      }
                    }
                    v54 = (*((_DWORD *)v17 + 26) + 3) & 0xFFFFFFFC;
                    v78 = v54;
                    v55 = -1;
                    if ( v54 + v47 >= v54 )
                      v55 = v54 + v47;
                    v87 = v55;
                    if ( v47 > v30 || v54 + v47 < v54 || v55 > v30 )
                      goto LABEL_116;
                    Pool2 = 0LL;
                    v57 = v17[11];
                    if ( v57 )
                    {
                      *(_DWORD *)(v57 + *((unsigned int *)v17 + 27)) = v54 - *((_DWORD *)v17 + 27);
                      *((_DWORD *)v17 + 27) = v54;
                      Pool2 = (PVOID)(v17[11] + v54);
                      goto LABEL_109;
                    }
                    if ( v31 )
                    {
                      v58 = v31[3];
                      if ( v58 )
                      {
                        Pool2 = (PVOID)v31[3];
                        v17[11] = v58;
                        goto LABEL_108;
                      }
                      v59 = v31[1];
                      if ( v59 )
                      {
                        if ( (*(_BYTE *)(v59 + 10) & 5) != 0 )
                          Pool2 = *(PVOID *)(v59 + 24);
                        else
                          Pool2 = MmMapLockedPagesSpecifyCache((PMDL)v59, 0, MmCached, 0LL, 0, 0x40000010u);
                        v17[11] = Pool2;
LABEL_108:
                        *((_DWORD *)v17 + 25) = v30;
                      }
                    }
LABEL_109:
                    if ( !v17[11] )
                    {
                      PsChargePoolQuota((PEPROCESS)v17[15], PagedPool, v30);
                      Pool2 = (PVOID)ExAllocatePool2(0x122uLL, v30, 0x4E725346u);
                      v17[11] = Pool2;
                      v17[10] = Pool2;
                      *((_DWORD *)v17 + 25) = v30;
                    }
                    if ( Pool2 )
                    {
                      v60 = *((unsigned int *)v17 + 26);
                      if ( v54 > (unsigned int)v60 )
                        memset_0((void *)(v17[11] + v60), 0, v54 - (unsigned int)v60);
                      if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                              (_DWORD)Pool2,
                                              Action,
                                              (unsigned int)MultiByteString,
                                              (unsigned int)&v75,
                                              (__int64)StreamName,
                                              *((_BYTE *)v17 + 144) == 2,
                                              v47) )
                      {
                        *((_DWORD *)v17 + 26) = v54 + v47;
                        goto LABEL_117;
                      }
LABEL_116:
                      *((_WORD *)v17 + 36) |= 2u;
                    }
LABEL_117:
                    if ( (v17[9] & 2) != 0 && v17[11] )
                    {
                      if ( v17[10] )
                      {
                        PsReturnProcessPagedPoolQuota(v17[15], *((unsigned int *)v17 + 25));
                        ExFreePoolWithTag((PVOID)v17[10], 0);
                      }
                      v17[11] = 0LL;
                      v17[10] = 0LL;
                      v17[13] = 0LL;
                      *((_DWORD *)v17 + 25) = 0;
                    }
                    v10 = TargetNameOffset;
                    v11 = FullTargetName;
                  }
                  p_Flink = v68;
                }
                v61 = *((_WORD *)v80 + 36);
                if ( Action == 4 )
                {
                  *((_WORD *)v80 + 36) = v61 | 8;
                }
                else
                {
                  *((_WORD *)v80 + 36) = v61 & 0xFFF7;
                  if ( (_QWORD *)v17[6] != v17 + 6 )
                    FsRtlNotifyCompleteIrpList(v17, 0LL);
                }
              }
              v12 = NotifyList;
            }
          }
        }
      }
    }
    else if ( TargetContext == (PVOID)v17[3] )
    {
      MultiByteString[1] = 0LL;
      v66 = 0;
      LOWORD(MultiByteString[0]) = 0;
      v19 = 1;
      v62 = 1;
      v20 = 0;
      goto LABEL_36;
    }
    p_Flink = (_QWORD *)*p_Flink;
    v14 = TargetNameOffset;
  }
  v28 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v28 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
