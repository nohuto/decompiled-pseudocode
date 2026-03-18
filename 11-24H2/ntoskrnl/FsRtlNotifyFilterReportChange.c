/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x140A007F0
 * Callers:
 *     FsRtlNotifyReportChange @ 0x14070DC00 (FsRtlNotifyReportChange.c)
 *     FsRtlNotifyFullReportChange @ 0x140A00790 (FsRtlNotifyFullReportChange.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x1403EEFD0 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlMultiByteToUnicodeSize @ 0x1408AE950 (RtlMultiByteToUnicodeSize.c)
 *     FsRtlNotifyCompleteIrpList @ 0x140A02114 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140A7284C (FsRtlNotifyUpdateBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v29; // r8
  __int64 v30; // r9
  __int16 v31; // dx
  unsigned int v32; // r12d
  _QWORD *v33; // r13
  _QWORD *v34; // rcx
  __int16 v35; // dx
  char **p_Buffer; // rax
  char *Buffer; // r9
  int v38; // r8d
  int v39; // edx
  unsigned __int16 v40; // ax
  __int16 v41; // ax
  char v42; // r10
  int v43; // r8d
  int v44; // r9d
  unsigned int v45; // edx
  unsigned __int16 *v46; // r11
  unsigned __int16 *v47; // r11
  int v48; // r14d
  unsigned int v49; // r14d
  ULONG v50; // r14d
  CHAR *v51; // rdx
  unsigned __int16 v52; // cx
  ULONG Length; // eax
  unsigned int v54; // ebx
  ULONG v55; // r14d
  unsigned int v56; // r15d
  unsigned int v57; // eax
  PVOID Pool2; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int16 v63; // ax
  char v64; // [rsp+40h] [rbp-118h]
  USHORT v65; // [rsp+44h] [rbp-114h]
  unsigned __int16 v66; // [rsp+4Ch] [rbp-10Ch]
  unsigned __int16 v68; // [rsp+50h] [rbp-108h]
  int v69; // [rsp+54h] [rbp-104h]
  _QWORD *v70; // [rsp+70h] [rbp-E8h]
  CHAR *MultiByteString[2]; // [rsp+78h] [rbp-E0h] BYREF
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp-D0h] BYREF
  ULONG v73; // [rsp+8Ch] [rbp-CCh] BYREF
  ULONG v74[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+98h] [rbp-C0h]
  char *v76; // [rsp+A0h] [rbp-B8h]
  __int64 v77; // [rsp+A8h] [rbp-B0h] BYREF
  CHAR *v78; // [rsp+B0h] [rbp-A8h]
  CHAR *v79; // [rsp+B8h] [rbp-A0h]
  unsigned int v80; // [rsp+C0h] [rbp-98h]
  PSTRING v81; // [rsp+C8h] [rbp-90h]
  _QWORD *v82; // [rsp+D0h] [rbp-88h]
  _QWORD *v83; // [rsp+D8h] [rbp-80h]
  _QWORD *v84; // [rsp+E0h] [rbp-78h]
  __int128 v85; // [rsp+E8h] [rbp-70h] BYREF
  _QWORD *v86; // [rsp+F8h] [rbp-60h]
  PSTRING v87; // [rsp+100h] [rbp-58h]
  PSTRING v88; // [rsp+108h] [rbp-50h]
  unsigned int v89; // [rsp+114h] [rbp-44h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v87 = v11;
  v14 = TargetNameOffset;
  v81 = StreamName;
  v88 = StreamName;
  v85 = 0LL;
  v75 = 0LL;
  v77 = 0LL;
  *(_OWORD *)MultiByteString = 0LL;
  v64 = 0;
  v74[1] = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v76 = 0LL;
  v78 = 0LL;
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
  v65 = v75;
  v79 = v78;
  v66 = v77;
  v68 = (unsigned __int16)MultiByteString[0];
  while ( 1 )
  {
    v83 = p_Flink;
    v70 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v17 = p_Flink - 4;
    v84 = p_Flink - 4;
    v18 = p_Flink - 4;
    v82 = p_Flink - 4;
    if ( v11 )
    {
      if ( *(_WORD *)v17[17] && (*((_DWORD *)v17 + 19) & FilterMatch) != 0 )
      {
        v21 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v85 + 1) = v11->Buffer;
          v22 = v10;
          LOWORD(v85) = v10;
          v23 = *((unsigned __int8 *)v17 + 144);
          if ( v14 != v23 )
          {
            v22 = v14 - v23;
            LOWORD(v85) = v14 - v23;
          }
          WORD1(v85) = v22;
          v21 = (PSTRING)&v85;
          NormalizedParentName = (PSTRING)&v85;
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
                && (v20
                 || !v17[2]
                 || (unsigned __int8)guard_dispatch_icall_no_overrides(v17[1], TargetContext, v17[3], v30))
                && (!v17[8]
                 || !FilterContext
                 || (unsigned __int8)guard_dispatch_icall_no_overrides(v17[1], FilterContext, v29, v30)) )
              {
                v19 = v64;
LABEL_36:
                v31 = *((_WORD *)v17 + 36);
                if ( (v31 & 2) == 0 )
                {
                  v32 = *((_DWORD *)v17 + 24);
                  if ( v32 )
                  {
                    v33 = 0LL;
                    v86 = 0LL;
                    if ( *((_DWORD *)v17 + 25) )
                    {
                      v32 = *((_DWORD *)v17 + 25);
                    }
                    else
                    {
                      v34 = (_QWORD *)v17[6];
                      if ( v34 != v17 + 6 )
                      {
                        v33 = v34 - 21;
                        v86 = v34 - 21;
                        v32 = *(_DWORD *)(v34[2] + 8LL);
                      }
                    }
                    if ( v20 )
                    {
                      v40 = 0;
                      v68 = 0;
                      LOWORD(MultiByteString[0]) = 0;
                    }
                    else if ( v19 )
                    {
                      v40 = v68;
                    }
                    else
                    {
                      v35 = v31 & 0x10;
                      if ( v35 )
                      {
                        p_Buffer = &v87->Buffer;
                      }
                      else
                      {
                        p_Buffer = &v11->Buffer;
                        Buffer = NormalizedParentName->Buffer;
                        if ( Buffer == v11->Buffer )
                        {
                          v38 = *(unsigned __int16 *)v17[17];
                          v39 = *((unsigned __int8 *)v17 + 144);
                          MultiByteString[1] = &Buffer[v39 + v38];
                          v40 = NormalizedParentName->Length - v39 - v38;
                          goto LABEL_71;
                        }
                      }
                      if ( v76 )
                      {
                        v10 = v65;
                      }
                      else
                      {
                        v76 = *p_Buffer;
                        v65 = v10;
                        LOWORD(v75) = v10;
                        v41 = *((unsigned __int8 *)v17 + 144);
                        if ( TargetNameOffset != v41 )
                        {
                          v10 = TargetNameOffset - v41;
                          v65 = TargetNameOffset - v41;
                          LOWORD(v75) = TargetNameOffset - v41;
                        }
                        WORD1(v75) = v10;
                      }
                      v42 = 0;
                      v43 = 0;
                      if ( !v35 )
                      {
                        v44 = 1;
                        v45 = 0;
                        if ( *((_BYTE *)v17 + 144) == 1 )
                        {
                          while ( 1 )
                          {
                            v46 = (unsigned __int16 *)v17[17];
                            if ( v45 >= *v46 )
                              break;
                            if ( *(_BYTE *)(v45 + *((_QWORD *)v46 + 1)) == 92 )
                              ++v44;
                            ++v45;
                          }
                          while ( v76[v43] != 92 || (unsigned __int8)++v42 != v44 )
                            ++v43;
                        }
                        else
                        {
                          while ( 1 )
                          {
                            v47 = (unsigned __int16 *)v17[17];
                            if ( v45 >= *v47 >> 1 )
                              break;
                            if ( *(_WORD *)(*((_QWORD *)v47 + 1) + 2LL * v45) == 92 )
                              ++v44;
                            ++v45;
                          }
                          while ( *(_WORD *)&v76[2 * v43] != 92 || (unsigned __int8)++v42 != v44 )
                            ++v43;
                          v43 *= *((unsigned __int8 *)v17 + 144);
                        }
                        v19 = v64;
                      }
                      v69 = v43 + *((unsigned __int8 *)v17 + 144);
                      MultiByteString[1] = &v76[v69];
                      v40 = v10 - v69;
LABEL_71:
                      v68 = v40;
                      LOWORD(MultiByteString[0]) = v40;
                      WORD1(MultiByteString[0]) = v40;
                    }
                    v48 = 12;
                    if ( v19 )
                    {
                      v49 = StreamName->Length + 12;
                    }
                    else
                    {
                      if ( !v20 )
                      {
                        if ( *((_BYTE *)v17 + 144) == 1 )
                        {
                          BytesInUnicodeString = 0;
                          RtlMultiByteToUnicodeSize(&BytesInUnicodeString, MultiByteString[1], v40);
                          v50 = BytesInUnicodeString;
                        }
                        else
                        {
                          v50 = v40;
                        }
                        v48 = v50 + 14;
                      }
                      v51 = v79;
                      if ( v79 )
                      {
                        v52 = v66;
                      }
                      else
                      {
                        v51 = &v11->Buffer[TargetNameOffset];
                        v79 = v51;
                        v78 = v51;
                        v52 = v11->Length - TargetNameOffset;
                        v66 = v52;
                        LOWORD(v77) = v52;
                        WORD1(v77) = v52;
                      }
                      if ( *((_BYTE *)v17 + 144) == 1 )
                      {
                        v73 = 0;
                        RtlMultiByteToUnicodeSize(&v73, v51, v52);
                        v49 = v73 + v48;
                      }
                      else
                      {
                        v49 = v52 + v48;
                      }
                      if ( StreamName )
                      {
                        Length = v81->Length;
                        v54 = v49;
                        if ( *((_BYTE *)v17 + 144) == 2 )
                        {
                          v55 = Length + 2;
                        }
                        else
                        {
                          v74[0] = 0;
                          RtlMultiByteToUnicodeSize(v74, StreamName->Buffer, Length);
                          v55 = v74[0] + 2;
                        }
                        v49 = v54 + v55;
                      }
                    }
                    v56 = (*((_DWORD *)v17 + 26) + 3) & 0xFFFFFFFC;
                    v80 = v56;
                    v57 = -1;
                    if ( v56 + v49 >= v56 )
                      v57 = v56 + v49;
                    v89 = v57;
                    if ( v49 > v32 || v56 + v49 < v56 || v57 > v32 )
                      goto LABEL_116;
                    Pool2 = 0LL;
                    v59 = v17[11];
                    if ( v59 )
                    {
                      *(_DWORD *)(v59 + *((unsigned int *)v17 + 27)) = v56 - *((_DWORD *)v17 + 27);
                      *((_DWORD *)v17 + 27) = v56;
                      Pool2 = (PVOID)(v17[11] + v56);
                      goto LABEL_109;
                    }
                    if ( v33 )
                    {
                      v60 = v33[3];
                      if ( v60 )
                      {
                        Pool2 = (PVOID)v33[3];
                        v17[11] = v60;
                        goto LABEL_108;
                      }
                      v61 = v33[1];
                      if ( v61 )
                      {
                        if ( (*(_BYTE *)(v61 + 10) & 5) != 0 )
                          Pool2 = *(PVOID *)(v61 + 24);
                        else
                          Pool2 = MmMapLockedPagesSpecifyCache((PMDL)v61, 0, MmCached, 0LL, 0, 0x40000010u);
                        v17[11] = Pool2;
LABEL_108:
                        *((_DWORD *)v17 + 25) = v32;
                      }
                    }
LABEL_109:
                    if ( !v17[11] )
                    {
                      PsChargePoolQuota((PEPROCESS)v17[15], PagedPool, v32);
                      Pool2 = (PVOID)ExAllocatePool2(0x122uLL);
                      v17[11] = Pool2;
                      v17[10] = Pool2;
                      *((_DWORD *)v17 + 25) = v32;
                    }
                    if ( Pool2 )
                    {
                      v62 = *((unsigned int *)v17 + 26);
                      if ( v56 > (unsigned int)v62 )
                        memset_0((void *)(v17[11] + v62), 0, v56 - (unsigned int)v62);
                      if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                              (_DWORD)Pool2,
                                              Action,
                                              (unsigned int)MultiByteString,
                                              (unsigned int)&v77,
                                              (__int64)StreamName,
                                              *((_BYTE *)v17 + 144) == 2,
                                              v49) )
                      {
                        *((_DWORD *)v17 + 26) = v56 + v49;
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
                  p_Flink = v70;
                }
                v63 = *((_WORD *)v82 + 36);
                if ( Action == 4 )
                {
                  *((_WORD *)v82 + 36) = v63 | 8;
                }
                else
                {
                  *((_WORD *)v82 + 36) = v63 & 0xFFF7;
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
      v68 = 0;
      LOWORD(MultiByteString[0]) = 0;
      v19 = 1;
      v64 = 1;
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
