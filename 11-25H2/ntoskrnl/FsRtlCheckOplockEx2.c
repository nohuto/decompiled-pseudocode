/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x1403EEA60
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1403EE800 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckOplock @ 0x1403EE850 (FsRtlCheckOplock.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x140375F60 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockKeysEqual @ 0x1403EE550 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403EE930 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlGetMarkHandleInfo @ 0x14057D23C (FsRtlGetMarkHandleInfo.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        IRP *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // r15d
  __int64 *v12; // rdi
  unsigned int v13; // r14d
  unsigned int v14; // r13d
  __int64 v15; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // r8
  PFILE_OBJECT FileObject; // rdx
  _QWORD *v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // r12d
  struct _FILE_OBJECT *v27; // rdx
  UCHAR MajorFunction; // cl
  int v29; // eax
  unsigned __int8 v30; // al
  int v31; // esi
  bool v32; // r15
  char v33; // r14
  int v34; // edi
  char v35; // al
  int v36; // r12d
  __int64 v37; // r14
  bool v38; // zf
  unsigned int LowPart; // eax
  int v40; // [rsp+20h] [rbp-188h]
  char v41; // [rsp+80h] [rbp-128h] BYREF
  char v42; // [rsp+81h] [rbp-127h]
  unsigned __int8 v43; // [rsp+82h] [rbp-126h]
  char v44; // [rsp+83h] [rbp-125h]
  _BYTE v45[4]; // [rsp+84h] [rbp-124h] BYREF
  struct _IO_STACK_LOCATION *v46; // [rsp+88h] [rbp-120h]
  int v47; // [rsp+90h] [rbp-118h]
  IRP *v48; // [rsp+98h] [rbp-110h]
  int v49; // [rsp+A0h] [rbp-108h]
  int v50; // [rsp+A4h] [rbp-104h]
  unsigned int v51; // [rsp+A8h] [rbp-100h]
  __int64 v52; // [rsp+B0h] [rbp-F8h]
  int v53; // [rsp+B8h] [rbp-F0h] BYREF
  int v54; // [rsp+BCh] [rbp-ECh] BYREF
  int v55; // [rsp+C0h] [rbp-E8h] BYREF
  int v56; // [rsp+C4h] [rbp-E4h]
  int v57; // [rsp+C8h] [rbp-E0h]
  __int64 v58; // [rsp+D0h] [rbp-D8h]
  __int64 v59; // [rsp+D8h] [rbp-D0h]
  __int64 v60; // [rsp+E0h] [rbp-C8h]
  __int64 v61; // [rsp+E8h] [rbp-C0h]
  _QWORD v62[2]; // [rsp+F0h] [rbp-B8h] BYREF
  char v63[32]; // [rsp+100h] [rbp-A8h] BYREF
  int *v64; // [rsp+120h] [rbp-88h]
  __int64 v65; // [rsp+128h] [rbp-80h]
  int *v66; // [rsp+130h] [rbp-78h]
  __int64 v67; // [rsp+138h] [rbp-70h]
  _QWORD *v68; // [rsp+140h] [rbp-68h]
  __int64 v69; // [rsp+148h] [rbp-60h]
  int *v70; // [rsp+150h] [rbp-58h]
  __int64 v71; // [rsp+158h] [rbp-50h]

  v56 = a4;
  v10 = a3;
  v50 = a3;
  v48 = a2;
  v12 = a1;
  v57 = a3;
  v52 = a5;
  v61 = a6;
  v60 = a7;
  v59 = a9;
  v58 = a10;
  v13 = 0;
  v14 = 0;
  v51 = 0;
  v15 = *a1;
  if ( a4 )
    return 3221225485LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v46 = CurrentStackLocation;
  if ( (a3 & 4) == 0 )
  {
    if ( (a3 & 0x10000000) == 0 )
    {
      v14 = FsRtlpAttachOplockKey(a2);
      v51 = v14;
    }
    FsRtlpOplockStoreKeyForDeleteOperation(v12, (__int64)a2, v10);
    if ( v15 != *v12 )
      v15 = *v12;
    v62[1] = v15;
    if ( (v10 & 2) != 0 || !v15 || (a2->Flags & 2) != 0 || v14 )
      return v14;
    v41 = (v10 & 0x20000000) != 0;
    LOBYTE(v12) = 1;
    v49 = (int)v12;
    v43 = 1;
    while ( 1 )
    {
      v45[0] = 0;
      v26 = v10 & 0x10;
      if ( (v10 & 0x10) == 0 && v41 == (_BYTE)v26 )
      {
        v49 = *(_DWORD *)(v15 + 144);
        v27 = *(struct _FILE_OBJECT **)(v15 + 8);
        MajorFunction = CurrentStackLocation->MajorFunction;
        v29 = v49;
        if ( CurrentStackLocation->MajorFunction == 3 )
        {
          LODWORD(v12) = v43;
          if ( (v49 & 0xFFFF4FFE) == 0 )
            LODWORD(v12) = 0;
          v43 = (unsigned __int8)v12;
        }
        else
        {
          LODWORD(v12) = v43;
        }
        v49 = (int)v12;
        if ( MajorFunction == 4 )
        {
          v38 = (v29 & 0xFFFFDFFE) == 0;
          v30 = (unsigned __int8)v12;
          if ( v38 )
            v30 = 0;
          LODWORD(v12) = v30;
          v49 = v30;
          v43 = v30;
        }
        if ( (v10 & 8) == 0 && MajorFunction != 18 && v27 && v27 == CurrentStackLocation->FileObject )
        {
          LOBYTE(v12) = 0;
          v49 = (int)v12;
          v43 = 0;
          v14 = v51;
          goto LABEL_129;
        }
        v14 = v51;
      }
      if ( (_BYTE)v12 )
      {
        if ( !v41 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
        v41 = 1;
        v31 = *(_DWORD *)(v15 + 144);
        if ( v31 != 1 )
        {
          v32 = 0;
          v44 = 0;
          v33 = 0;
          v42 = 0;
          v34 = 0;
          v47 = 0;
          if ( v26 )
          {
            v34 = 20480;
            v47 = 20480;
            CurrentStackLocation = v46;
LABEL_83:
            v36 = (int)v48;
          }
          else
          {
            switch ( v46->MajorFunction )
            {
              case 0u:
                if ( ((v31 & 0x7000) == 0 || (*(_DWORD *)(v46->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) == 0)
                  && ((v31 & 0x1E) == 0 || (*(_DWORD *)(v46->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) == 0)
                  && (v46->Parameters.Create.Options & 0x100000) == 0 )
                {
                  goto LABEL_82;
                }
                v38 = (v31 & 8) == 0;
                CurrentStackLocation = v46;
                if ( v38
                  || (*(_DWORD *)(v46->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) != 0
                  || (*((_BYTE *)&v46->Parameters.QuerySecurity + 18) & 1) == 0 )
                {
                  v35 = BYTE3(v46->Parameters.QueryEa.EaList);
                  if ( ((v35 & 0xFA) != 0 || v35 == 1) && (v46->Parameters.Create.Options & 0x100000) == 0 )
                  {
                    v32 = 1;
                    v44 = 1;
                    v34 = 0x4000;
                    v47 = 0x4000;
                  }
                  else
                  {
LABEL_96:
                    v33 = 1;
                    v42 = 1;
                    v34 = 20480;
                    v47 = 20480;
                  }
                }
                goto LABEL_83;
              case 2u:
                CurrentStackLocation = v46;
                if ( (v46->FileObject->Flags & 0x4000) != 0 )
                  goto LABEL_83;
                goto LABEL_74;
              case 3u:
                v32 = (v31 & 8) == 0;
                goto LABEL_79;
              case 4u:
                goto LABEL_91;
              case 6u:
                switch ( v46->Parameters.Create.Options )
                {
                  case 0xAu:
                  case 0xBu:
                  case 0x28u:
                  case 0x41u:
                    v34 = 0x2000;
                    v47 = 0x2000;
                    v36 = (int)v48;
                    v38 = (v31 & 0xC) == 0;
                    CurrentStackLocation = v46;
                    if ( !v38 )
                    {
                      v33 = 1;
                      v42 = 1;
                    }
                    break;
                  case 0xDu:
                    v36 = (int)v48;
                    CurrentStackLocation = v46;
                    if ( v48->AssociatedIrp.MasterIrp->Type )
                    {
                      v34 = 0x2000;
                      v47 = 0x2000;
                    }
                    break;
                  case 0x13u:
                  case 0x27u:
                    CurrentStackLocation = v46;
                    goto LABEL_96;
                  case 0x14u:
                    CurrentStackLocation = v46;
                    if ( !v46->Parameters.SetFile.AdvanceOnly )
                    {
                      v33 = 1;
                      v42 = 1;
                      v34 = 20480;
                      v47 = 20480;
                    }
                    goto LABEL_83;
                  case 0x40u:
                    v36 = (int)v48;
                    CurrentStackLocation = v46;
                    if ( (*(_DWORD *)v48->AssociatedIrp.MasterIrp & 1) != 0 )
                    {
                      v34 = 0x2000;
                      v47 = 0x2000;
                    }
                    break;
                  default:
                    goto LABEL_82;
                }
                break;
              case 9u:
                v32 = 1;
LABEL_79:
                v44 = v32;
                goto LABEL_80;
              case 0xDu:
                LowPart = v46->Parameters.Read.ByteOffset.LowPart;
                if ( LowPart > 0x98268 )
                {
                  if ( LowPart != 623428 && LowPart != 623592 )
                  {
                    v38 = LowPart == 639668;
LABEL_90:
                    if ( !v38 )
                      goto LABEL_82;
                  }
                  goto LABEL_91;
                }
                if ( LowPart == 623208 )
                  goto LABEL_91;
                if ( LowPart != 590076 )
                {
                  if ( LowPart == 606820 )
                  {
                    v32 = (v31 & 8) == 0;
                    v44 = v32;
LABEL_80:
                    v34 = 0x4000;
                  }
                  else
                  {
                    if ( LowPart != 622792 && LowPart != 623112 )
                      goto LABEL_82;
LABEL_91:
                    v33 = 1;
                    v42 = 1;
                    v34 = 20480;
                  }
LABEL_81:
                  v47 = v34;
LABEL_82:
                  CurrentStackLocation = v46;
                  goto LABEL_83;
                }
                v36 = (int)v48;
                if ( (FsRtlGetMarkHandleInfo(v48, v46, 0x140000000uLL, 1LL) & 0x4000) != 0 )
                {
                  v34 = 0x2000;
                  v47 = 0x2000;
                  v38 = (v31 & 0xC) == 0;
                  CurrentStackLocation = v46;
                  if ( !v38 )
                  {
                    v33 = 1;
                    v42 = 1;
                  }
                }
                else
                {
                  CurrentStackLocation = v46;
                }
                break;
              case 0x11u:
                v38 = (v31 & 8) == 0;
                goto LABEL_90;
              case 0x12u:
                CurrentStackLocation = v46;
LABEL_74:
                FsRtlpOplockCleanup(v15, CurrentStackLocation, 0LL, 1LL);
                if ( CurrentStackLocation->MajorFunction == 18 && (v50 & 0x20) != 0 )
                {
                  v34 = 0x2000;
                  v47 = 0x2000;
                  if ( (unsigned int)dword_140E06C30 > 5 )
                  {
                    v53 = v50;
                    v64 = &v53;
                    v65 = 4LL;
                    v54 = 0x2000;
                    v66 = &v54;
                    v67 = 4LL;
                    v62[0] = v15;
                    v68 = v62;
                    v69 = 8LL;
                    v55 = *(_DWORD *)(v15 + 144);
                    v70 = &v55;
                    v71 = 4LL;
                    tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, &byte_140044A87, 0LL, 0LL, 6, v63);
                  }
                }
                goto LABEL_83;
              case 0x15u:
                v34 = 0x2000;
                goto LABEL_81;
              default:
                goto LABEL_82;
            }
          }
          if ( v32 )
          {
            if ( (*(_DWORD *)(v15 + 144) & 0x1F0FFDF) != 0x10
              && !FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *(_QWORD *)(v15 + 8), 0) )
            {
              v37 = v52;
              v10 = v50;
              v14 = FsRtlpOplockBreakToII(
                      v15,
                      (_DWORD)CurrentStackLocation,
                      v36,
                      v50,
                      v40,
                      v52,
                      v61,
                      v60,
                      a8,
                      v59,
                      v58,
                      (__int64)&v41,
                      (__int64)v45);
              v51 = v14;
              goto LABEL_124;
            }
LABEL_123:
            v10 = v50;
            v37 = v52;
          }
          else
          {
            if ( !v33
              || (*(_DWORD *)(v15 + 144) & 0x1F0FFDF) != 0x10
              && FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *(_QWORD *)(v15 + 8), 0) )
            {
              goto LABEL_123;
            }
            v37 = v52;
            v10 = v50;
            v14 = FsRtlpOplockBreakToNone(
                    v15,
                    (_DWORD)CurrentStackLocation,
                    v36,
                    v50,
                    v40,
                    v52,
                    v61,
                    v60,
                    a8,
                    v59,
                    v58,
                    (__int64)&v41,
                    (__int64)v45);
            v51 = v14;
          }
LABEL_124:
          if ( !v14 && (*(_DWORD *)(v15 + 144) & v34) != 0 )
          {
            v14 = FsRtlpOplockBreakByCacheFlags(
                    v15,
                    (_DWORD)CurrentStackLocation,
                    v36,
                    v10,
                    v56,
                    v34,
                    0LL,
                    0LL,
                    v37,
                    v61,
                    v60,
                    a8,
                    v59,
                    v58,
                    (__int64)&v41,
                    (__int64)v45);
            v51 = v14;
          }
          LOBYTE(v12) = v49;
          goto LABEL_129;
        }
        CurrentStackLocation = v46;
      }
LABEL_129:
      if ( v41 && (v10 & 0x20000000) == 0 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
      if ( !v45[0] )
        return v14;
    }
  }
  v18 = 0LL;
  if ( !v15 )
    return 0LL;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
  if ( CurrentStackLocation->MajorFunction )
  {
    v13 = -1073741811;
LABEL_8:
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
    return v13;
  }
  if ( (*(_DWORD *)(v15 + 144) & 0x10000) == 0 )
    goto LABEL_8;
  FileObject = CurrentStackLocation->FileObject;
  LOBYTE(v19) = 0;
  v21 = (_QWORD *)(v15 + 120);
  v22 = *(_QWORD **)(v15 + 120);
  if ( v22 != (_QWORD *)(v15 + 120) )
  {
    while ( FileObject != (PFILE_OBJECT)*(v22 - 4) )
    {
      v22 = (_QWORD *)*v22;
      if ( v22 == v21 )
        goto LABEL_15;
    }
    LOBYTE(v19) = 1;
    v18 = v22 - 7;
  }
LABEL_15:
  if ( !(_BYTE)v19 )
    goto LABEL_8;
  FsRtlpOplockDequeueRH(v18, FileObject, v19, v21);
  v24 = v18[7];
  v25 = (_QWORD *)v18[8];
  if ( *(_QWORD **)(v24 + 8) != v18 + 7 || (_QWORD *)*v25 != v18 + 7 )
    __fastfail(3u);
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  if ( (_QWORD *)*v23 == v23 )
    *(_DWORD *)(v15 + 144) &= 0xFFFCFFFF;
  if ( v18[5] )
    FsRtlpClearOwner(v15, v18);
  if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
    FsRtlpSyncWithAckTimeout(v18 + 11);
  ExFreePoolWithTag(v18, 0);
  FsRtlpComputeShareableOplockState(v15);
  FsRtlpReleaseIrpsWaitingForRH(v15);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
  return 0LL;
}
