/*
 * XREFs of RaidBusEnumeratorIssueSynchronousRequest @ 0x14001B3B0
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14001A9E0 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14001AF90 (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     WPP_SF_qdddD @ 0x140068DC0 (WPP_SF_qdddD.c)
 *     WPP_SF_qdddDDs @ 0x140068E44 (WPP_SF_qdddDDs.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueSynchronousRequest(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // esi
  unsigned __int8 v8; // r12
  IRP *v9; // rbp
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // r13
  __int128 v12; // xmm5
  __int128 v13; // xmm4
  __int128 v14; // xmm3
  __int128 v15; // xmm2
  char v16; // al
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  struct _MDL *v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v23; // eax
  struct _DEVICE_OBJECT *v24; // rdi
  _IO_STACK_LOCATION *v25; // rax
  NTSTATUS Status; // edi
  unsigned int v27; // edi
  unsigned __int8 v28; // al
  int v29; // edx
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  unsigned __int64 v56; // rax
  unsigned int v57; // r10d
  unsigned int v58; // r11d
  unsigned int *v59; // r9
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  int v62; // ecx
  __int64 v63; // r8
  unsigned int v64; // r11d
  unsigned int *v65; // r10
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  int v68; // r9d
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  char *v71; // rax
  int v72; // ecx
  int v73; // r9d
  _BYTE *v74; // rcx
  _BYTE *v75; // rax
  char v76; // al
  const char *v77; // r10
  _BYTE *v78; // [rsp+50h] [rbp-1E8h]
  __int64 v79; // [rsp+58h] [rbp-1E0h]
  __int64 v80; // [rsp+60h] [rbp-1D8h]
  __int128 v81; // [rsp+68h] [rbp-1D0h]
  __int128 v82; // [rsp+78h] [rbp-1C0h]
  __int128 v83; // [rsp+88h] [rbp-1B0h]
  __int128 v84; // [rsp+98h] [rbp-1A0h]
  __int128 v85; // [rsp+A8h] [rbp-190h]
  struct _KEVENT Event; // [rsp+B8h] [rbp-180h] BYREF
  __int128 v87; // [rsp+D0h] [rbp-168h] BYREF
  __int128 v88; // [rsp+E0h] [rbp-158h]
  __int128 v89; // [rsp+F0h] [rbp-148h]
  __int128 v90; // [rsp+100h] [rbp-138h]
  __int128 v91; // [rsp+110h] [rbp-128h]
  __int64 v92; // [rsp+120h] [rbp-118h]
  __int128 v93; // [rsp+130h] [rbp-108h]
  __int128 v94; // [rsp+140h] [rbp-F8h]
  __int128 v95; // [rsp+150h] [rbp-E8h]
  __int128 v96; // [rsp+160h] [rbp-D8h]
  __int128 v97; // [rsp+170h] [rbp-C8h]
  __int128 v98; // [rsp+180h] [rbp-B8h]
  __int128 v99; // [rsp+190h] [rbp-A8h]
  __int128 v100; // [rsp+1A0h] [rbp-98h]
  __int128 v101; // [rsp+1B0h] [rbp-88h]
  __int128 v102; // [rsp+1C0h] [rbp-78h]
  __int128 v103; // [rsp+1D0h] [rbp-68h]
  __int64 v104; // [rsp+1E0h] [rbp-58h]
  char v106; // [rsp+248h] [rbp+10h]
  char v107; // [rsp+250h] [rbp+18h]
  char v108; // [rsp+258h] [rbp+20h]
  unsigned __int8 v110; // [rsp+260h] [rbp+28h]

  v78 = 0LL;
  v110 = 0;
  v6 = 2;
  v106 = 0;
  v107 = 0;
  memset_0(&v87, 0, 0x58uLL);
  v8 = 0;
  v9 = *(IRP **)a3;
  v10 = 0;
  v11 = 0;
  v80 = *(_QWORD *)(a2 + 8);
  v108 = 0;
  if ( *(_BYTE *)(a4 + 2) != 40 )
  {
    v12 = *(_OWORD *)a4;
    v10 = *(_BYTE *)(a4 + 5);
    v13 = *(_OWORD *)(a4 + 16);
    v8 = *(_BYTE *)(a4 + 6);
    v14 = *(_OWORD *)(a4 + 32);
    v11 = *(_BYTE *)(a4 + 7);
    v15 = *(_OWORD *)(a4 + 48);
    v16 = *(_BYTE *)(a4 + 72);
    v17 = *(_OWORD *)(a4 + 64);
    v18 = *(_QWORD *)(a4 + 80);
    goto LABEL_3;
  }
  v45 = *(_QWORD *)(a4 + 176);
  v46 = *(_OWORD *)(a4 + 16);
  v93 = *(_OWORD *)a4;
  v47 = *(_OWORD *)(a4 + 32);
  v94 = v46;
  v48 = *(_OWORD *)(a4 + 48);
  v95 = v47;
  v49 = *(_OWORD *)(a4 + 64);
  v96 = v48;
  v50 = *(_OWORD *)(a4 + 80);
  v97 = v49;
  v51 = *(_OWORD *)(a4 + 96);
  v98 = v50;
  v52 = *(_OWORD *)(a4 + 112);
  v99 = v51;
  v53 = *(_OWORD *)(a4 + 128);
  v100 = v52;
  v54 = *(_OWORD *)(a4 + 144);
  v101 = v53;
  v55 = *(_OWORD *)(a4 + 160);
  v102 = v54;
  v103 = v55;
  v104 = v45;
  v56 = a4 + *(unsigned int *)(a4 + 52);
  if ( *(_WORD *)v56 == 1 )
  {
    v10 = *(_BYTE *)(v56 + 8);
    v8 = *(_BYTE *)(v56 + 9);
    v11 = *(_BYTE *)(v56 + 10);
  }
  if ( *(_DWORD *)(a4 + 20) || (v57 = *(_DWORD *)(a4 + 56), v58 = 0, !v57) )
  {
LABEL_40:
    v18 = v92;
    v17 = v91;
    v15 = v90;
    v14 = v89;
    v13 = v88;
    v12 = v87;
    goto LABEL_4;
  }
  v59 = (unsigned int *)(a4 + 120);
  while ( 1 )
  {
    v60 = *v59;
    if ( (unsigned int)v60 < 0x80 )
      goto LABEL_39;
    v61 = *(unsigned int *)(a4 + 16);
    if ( (unsigned int)v60 >= (unsigned int)v61 )
      goto LABEL_39;
    v62 = *(_DWORD *)(v60 + a4);
    v63 = (unsigned int)v60;
    if ( v62 == 64 )
    {
      if ( v60 + 40 <= v61 )
      {
        if ( !*(_BYTE *)(v60 + a4 + 10) )
          goto LABEL_40;
LABEL_51:
        v70 = a4 + 24;
        goto LABEL_52;
      }
      goto LABEL_39;
    }
    v72 = v62 - 65;
    if ( v72 )
      break;
    if ( v60 + 56 <= v61 )
    {
      if ( !*(_BYTE *)(v60 + a4 + 10) )
        goto LABEL_40;
      goto LABEL_51;
    }
LABEL_39:
    ++v58;
    ++v59;
    if ( v58 >= v57 )
      goto LABEL_40;
  }
  if ( v72 != 1 || v60 + 40 > v61 )
    goto LABEL_39;
  if ( !*(_DWORD *)(v60 + a4 + 12) )
    goto LABEL_40;
  v70 = a4 + 32;
LABEL_52:
  v71 = (char *)(v63 + v70);
  if ( !v71 )
    goto LABEL_40;
  v16 = *v71;
  v18 = v92;
  v17 = v91;
  v15 = v90;
  v14 = v89;
  v13 = v88;
  v12 = v87;
LABEL_3:
  v108 = v16;
LABEL_4:
  v85 = v12;
  v84 = v13;
  v83 = v14;
  v82 = v15;
  v81 = v17;
  v79 = v18;
  while ( 2 )
  {
    if ( *(_BYTE *)(a4 + 2) == 40 )
    {
      v34 = v94;
      *(_OWORD *)a4 = v93;
      v35 = v95;
      *(_OWORD *)(a4 + 16) = v34;
      v36 = v96;
      *(_OWORD *)(a4 + 32) = v35;
      v37 = v97;
      *(_OWORD *)(a4 + 48) = v36;
      v38 = v98;
      *(_OWORD *)(a4 + 64) = v37;
      v39 = v99;
      *(_OWORD *)(a4 + 80) = v38;
      v40 = v100;
      *(_OWORD *)(a4 + 96) = v39;
      v41 = v101;
      *(_OWORD *)(a4 + 112) = v40;
      v42 = v102;
      *(_OWORD *)(a4 + 128) = v41;
      v43 = v103;
      v44 = v104;
      *(_OWORD *)(a4 + 144) = v42;
      *(_OWORD *)(a4 + 160) = v43;
      *(_QWORD *)(a4 + 176) = v44;
    }
    else
    {
      *(_OWORD *)a4 = v12;
      *(_OWORD *)(a4 + 16) = v13;
      *(_OWORD *)(a4 + 32) = v14;
      *(_OWORD *)(a4 + 48) = v15;
      *(_OWORD *)(a4 + 64) = v17;
      *(_QWORD *)(a4 + 80) = v18;
    }
    v19 = *(struct _MDL **)(a3 + 8);
    if ( *(_BYTE *)(a4 + 2) == 40 )
    {
      v20 = *(_QWORD *)(a4 + 64);
      v21 = *(unsigned int *)(a4 + 60);
    }
    else
    {
      v20 = *(_QWORD *)(a4 + 24);
      v21 = *(unsigned int *)(a4 + 16);
    }
    v19->ByteCount = v21;
    v19->Next = 0LL;
    v19->MdlFlags = 0;
    v19->StartVa = (void *)(v20 & 0xFFFFFFFFFFFFF000uLL);
    v19->Size = 8 * (((v21 + (unsigned __int64)(v20 & 0xFFF) + 4095) >> 12) + 6);
    v19->ByteOffset = v20 & 0xFFF;
    MmBuildMdlForNonPagedPool(v19);
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    v9->MdlAddress = v19;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = -4081;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a4;
    v23 = *(_DWORD *)(v80 + 1392);
    if ( *(_BYTE *)(a4 + 2) == 40 )
      *(_DWORD *)(a4 + 40) = v23;
    else
      *(_DWORD *)(a4 + 20) = v23;
    v24 = *(struct _DEVICE_OBJECT **)(v80 + 8);
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v25 = v9->Tail.Overlay.CurrentStackLocation;
    v25[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
    v25[-1].Context = &Event;
    v25[-1].Control = -32;
    Status = IofCallDriver(v24, v9);
    if ( Status == 259 )
    {
      v27 = 0;
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      goto LABEL_13;
    }
    if ( Status >= 0 )
    {
      v27 = 0;
LABEL_13:
      if ( *(_BYTE *)(a4 + 2) == 40 )
      {
        if ( *(_DWORD *)(a4 + 20) )
        {
          v78 = 0LL;
          v110 = 0;
        }
        else
        {
          v64 = *(_DWORD *)(a4 + 56);
          if ( v64 )
          {
            v65 = (unsigned int *)(a4 + 120);
            do
            {
              v66 = *v65;
              if ( (unsigned int)v66 >= 0x80 )
              {
                v67 = *(unsigned int *)(a4 + 16);
                if ( (unsigned int)v66 < (unsigned int)v67 )
                {
                  v68 = *(_DWORD *)(v66 + a4);
                  v69 = v66 + a4;
                  if ( v68 == 64 )
                  {
                    if ( (unsigned __int64)(unsigned int)v66 + 40 <= v67 )
                    {
                      v78 = *(_BYTE **)(v69 + 16);
                      v28 = *(_BYTE *)(v69 + 9);
                      goto LABEL_15;
                    }
                  }
                  else
                  {
                    v73 = v68 - 65;
                    if ( v73 )
                    {
                      if ( v73 == 1 && (unsigned __int64)(unsigned int)v66 + 40 <= v67 )
                      {
                        v78 = *(_BYTE **)(v69 + 24);
                        v110 = *(_BYTE *)(v69 + 9);
                        break;
                      }
                    }
                    else if ( (unsigned __int64)(unsigned int)v66 + 56 <= v67 )
                    {
                      v78 = *(_BYTE **)(v69 + 16);
                      v110 = *(_BYTE *)(v69 + 9);
                      break;
                    }
                  }
                }
              }
              ++v27;
              ++v65;
            }
            while ( v27 < v64 );
          }
        }
      }
      else
      {
        v78 = *(_BYTE **)(a4 + 32);
        v28 = *(_BYTE *)(a4 + 11);
LABEL_15:
        v110 = v28;
      }
      v29 = *(unsigned __int8 *)(a4 + 3);
      if ( (v29 & 0x80u) != 0 )
      {
        if ( v78 )
        {
          v106 = 0;
          if ( v110 )
          {
            v74 = &v78[v110];
            v75 = v78 + 8;
            if ( (unsigned __int8)((*v78 & 0x7F) - 114) <= 1u )
            {
              if ( v75 <= v74 )
              {
                v76 = v78[1];
LABEL_82:
                v106 = 1;
                v107 = v76 & 0xF;
              }
            }
            else if ( v75 <= v74 )
            {
              v76 = v78[2];
              goto LABEL_82;
            }
          }
        }
      }
      v30 = v29 & 0xFFFFFF3F;
      if ( (unsigned int)v30 <= 0x21 && (v31 = 0x300000580LL, _bittest64(&v31, v30)) )
      {
        Status = -1073741810;
      }
      else if ( v106 && v107 == 5 )
      {
        Status = -1073741810;
      }
      else if ( (_BYTE)v29 == 18 )
      {
        Status = 0;
        *(_BYTE *)(a4 + 3) = 1;
      }
      else
      {
        Status = v9->IoStatus.Status;
        if ( Status < 0
          && Status != -1073741808
          && Status != -1073741810
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v77 = "retried";
          if ( !v6 )
            v77 = "not retried";
          WPP_SF_qdddDDs(WPP_GLOBAL_Control->AttachedDevice, v11, v8, *a1, v10, v8, v11, v108, v29, (__int64)v77);
        }
      }
      if ( !v6-- )
        return (unsigned int)Status;
      if ( Status >= 0 )
        return (unsigned int)Status;
      v18 = v79;
      v17 = v81;
      v15 = v82;
      v14 = v83;
      v13 = v84;
      v12 = v85;
      if ( Status == -1073741810 )
        return (unsigned int)Status;
      continue;
    }
    break;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qdddD(WPP_GLOBAL_Control->AttachedDevice, v8, v10, *a1, v10, v8, v11, Status);
  }
  return (unsigned int)Status;
}
