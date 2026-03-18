/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401CF460 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D01F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14000E530 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     DpiGetDbgInfoAdapters @ 0x140064394 (DpiGetDbgInfoAdapters.c)
 *     DpiGetAdapterDebugData @ 0x14007C4FC (DpiGetAdapterDebugData.c)
 *     DpiGetGlobalDebugData @ 0x14007C580 (DpiGetGlobalDebugData.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140186D64 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x14018A4B4 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x14018AB8C (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x14018BB74 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x14018C534 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401CFB28 (-TdrFreePool@@YAXPEAX@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401D067C (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D0730 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x140369884 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z @ 0x1403698F8 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1403E8F10 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2, unsigned int a3, __int128 *a4)
{
  int v4; // eax
  __int64 Pool2; // rax
  CTDR_DUMP_BUFFER *v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  __int64 v12; // rax
  void *v13; // rax
  void *v14; // rbx
  unsigned int *v15; // rbx
  unsigned int v16; // edi
  unsigned __int16 v17; // r14
  unsigned int v18; // r12d
  unsigned int RecentEvents; // eax
  unsigned int v20; // ebx
  void *v21; // rax
  unsigned int *v22; // rbx
  char v23; // r12
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  int v26; // ecx
  __int64 *v27; // r12
  unsigned int v28; // r15d
  __int64 v29; // rax
  _DWORD *v30; // rdi
  _DWORD *v31; // rbx
  __int64 v32; // rax
  DXGADAPTER *v33; // r15
  int v34; // r14d
  __int64 *v35; // rax
  __int64 v36; // r11
  __int64 v37; // rcx
  _BYTE *v38; // r10
  __int64 v39; // rax
  const char *v40; // r8
  unsigned int *v41; // rbx
  char *v42; // rax
  char *v43; // rbx
  int SmbiosInfo; // eax
  _DWORD *v45; // rax
  unsigned int *v46; // rbx
  char *v47; // rax
  __int64 v48; // rbx
  int AdapterDebugData; // eax
  _DWORD *v50; // rax
  unsigned int *v51; // rbx
  int v52; // ecx
  unsigned int v53; // ebx
  unsigned int v54; // edi
  char *v55; // rax
  char *v56; // r14
  __int64 v57; // r15
  int v58; // ebx
  _DWORD *v59; // rax
  unsigned int *v60; // rbx
  int v61; // ecx
  CTDR_DUMP_BUFFER *v62; // rbx
  unsigned int v63; // ebx
  char *v64; // rax
  char *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r9
  _DWORD *v68; // rax
  unsigned int *v69; // rbx
  char *v70; // rax
  __int64 v71; // rbx
  int GlobalDebugData; // eax
  _DWORD *v73; // rax
  unsigned int *v74; // rbx
  unsigned int v75; // ebx
  unsigned __int16 i; // di
  int v77; // r15d
  char *v78; // rax
  char *v79; // r14
  int v80; // eax
  int v81; // ecx
  int v82; // r8d
  _DWORD *v83; // rax
  unsigned int *v84; // rbx
  unsigned __int64 DbgOwnerTag; // rdi
  __int64 v86; // r8
  int v87; // edx
  unsigned int v88; // r12d
  __int64 v89; // r14
  __int64 v90; // r15
  int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // [rsp+20h] [rbp-E0h]
  __int64 v95; // [rsp+20h] [rbp-E0h]
  __int64 v96; // [rsp+28h] [rbp-D8h]
  char v97; // [rsp+50h] [rbp-B0h]
  unsigned int v99; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD *v100; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v101; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v102; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v103; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v104; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v105; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v106[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v107; // [rsp+90h] [rbp-70h]
  __int64 v108; // [rsp+98h] [rbp-68h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  __int128 v110; // [rsp+A8h] [rbp-58h]
  __int128 v111; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v112[9]; // [rsp+C8h] [rbp-38h]
  __int64 v113; // [rsp+ECh] [rbp-14h]
  _DWORD v114[28]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 retaddr; // [rsp+1B8h] [rbp+B8h]

  v4 = *((_DWORD *)a1 + 4);
  v99 = a3;
  if ( v4 == 6 || (v97 = 0, v4 == 12) )
    v97 = 1;
  if ( !*((_QWORD *)a1 + 357) )
  {
    Pool2 = ExAllocatePool2(256LL, 17172484LL, 1380209782LL);
    *((_QWORD *)a1 + 357) = Pool2;
    if ( Pool2 )
    {
      v9 = (CTDR_DUMP_BUFFER *)ExAllocatePool2(256LL, 32LL, 1380209782LL);
      if ( v9 )
        v11 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v9, v10, *((_DWORD **)a1 + 357));
      else
        v11 = 0LL;
      *((_QWORD *)a1 + 359) = v11;
      if ( v11 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v11);
        *((_QWORD *)a1 + 358) = v11[6];
        v12 = ExAllocatePool2(256LL, 36LL, 1380209782LL);
        *((_QWORD *)a1 + 360) = v12;
        if ( !v12 )
          *((_DWORD *)a1 + 29) |= 2u;
        *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        memmove((char *)a1 + 200, &g_TdrHistory, 0xA18uLL);
        v13 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 0xFFFF, 0xAB0u);
        v14 = v13;
        if ( v13 )
        {
          memmove(v13, (char *)a1 + 112, 0xAB0uLL);
          *((_QWORD *)a1 + 361) = v14;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v15 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v15);
        *((_QWORD *)a1 + 358) = v15[6];
        *((_DWORD *)a1 + 35) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 0);
        v112[0] = 1;
        v112[1] = 32;
        v16 = 0;
        v112[2] = 32;
        v17 = 0;
        v112[6] = 32;
        v112[8] = 32;
        v112[3] = 64;
        v112[4] = 64;
        v112[5] = 64;
        v112[7] = 64;
        v113 = 64LL;
        do
        {
          if ( v16 >= 0x5000 )
            break;
          v18 = v112[v17];
          RecentEvents = WdLogGetRecentEvents(v17, v18, 0LL, 0LL);
          v20 = 20480 - v16;
          if ( RecentEvents + v16 <= 0x5000 )
            v20 = RecentEvents;
          if ( v20 )
          {
            v21 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), (unsigned int)v17 + 16, v20);
            if ( v21 )
              v20 = WdLogGetRecentEvents(v17, v18, v21, v20);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v16 += v20;
          ++v17;
        }
        while ( v17 < 0xBu );
        v22 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v22);
        v23 = a2;
        *((_QWORD *)a1 + 358) = v22[6];
        *((_DWORD *)a1 + 35) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 0);
        v24 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 1, 0x1000004u);
        v100 = v24;
        v25 = v24;
        if ( v24 )
        {
          v26 = *((_DWORD *)a1 + 4);
          if ( v26 == 6 || (v106[0] = 279, v26 == 12) )
            v106[0] = 321;
          v107 = v24;
          v106[1] = 0;
          v109 = *((_QWORD *)a1 + 360);
          v27 = 0LL;
          v108 = 0x1000000LL;
          v110 = 0LL;
          LODWORD(v110) = v26;
          v111 = 0LL;
          if ( v26 == 3 )
          {
            a4 = &v111;
            LODWORD(v111) = *((_DWORD *)a1 + 20);
            v28 = 16;
            DWORD1(v111) = *((_DWORD *)a1 + 23);
            *((_QWORD *)&v111 + 1) = *((_QWORD *)a1 + 12);
          }
          else
          {
            if ( v26 == 6 && a4 )
            {
              v29 = *((_QWORD *)a4 + 4);
              if ( v29 )
                v27 = *(__int64 **)(v29 + 472);
              *((_QWORD *)a4 + 4) = 0LL;
            }
            v28 = v99;
          }
          v30 = v25 + 0x400000;
          DWORD1(v110) = v28;
          *((_QWORD *)&v110 + 1) = a4;
          v31 = 0LL;
          v25[0x400000] = 5394245;
          v32 = *((_QWORD *)a1 + 360);
          if ( v32 )
          {
            v31 = (_DWORD *)(v32 + 32);
            *(_DWORD *)(v32 + 32) = 5394245;
          }
          v33 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) )
          {
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v33, (struct _DXGKARG_COLLECTDBGINFO2 *)v106);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v33, 1);
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v33, (struct _DXGKARG_COLLECTDBGINFO2 *)v106);
            DXGADAPTER::ReleaseDdiSync(v33);
          }
          if ( v34 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v34 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v34 >= 0 )
          {
            if ( (_DWORD)v110 == 6 )
            {
              if ( a4 )
              {
                v35 = (__int64 *)*((_QWORD *)a4 + 4);
                if ( v35 || (v35 = v27) != 0LL )
                {
                  v36 = *v35;
                  if ( *v35 )
                  {
                    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 40LL);
                    if ( v37 )
                    {
                      v38 = (char *)a1 + 2821;
                      *((_QWORD *)a1 + 351) = *(_QWORD *)(v37 + 56);
                      v39 = *(_QWORD *)(v37 + 64);
                      if ( !v39
                        || (v40 = *(const char **)(v39 + 96)) == 0LL
                        || (int)RtlStringCbCopyA((char *)a1 + 2821, 15LL, v40) < 0 )
                      {
                        *v38 = 0;
                      }
                      *((_DWORD *)a1 + 709) = *(_DWORD *)(v36 + 144);
                    }
                  }
                }
              }
            }
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( RtlCompareMemory(v30, "EOR", 4uLL) != 4 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v100, 0x1000000LL);
            WdLogGlobalForLineNumber = 1553;
          }
          if ( v31 )
          {
            if ( RtlCompareMemory(v31, "EOR", 4uLL) != 4 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, *((_QWORD *)a1 + 360), 32LL);
              WdLogGlobalForLineNumber = 1564;
            }
            *v31 = 0;
          }
          v23 = a2;
          *v30 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v41 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v41);
        *((_QWORD *)a1 + 358) = v41[6];
        *((_DWORD *)a1 + 35) = 1;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        v42 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 2, 0x4004u);
        v43 = v42;
        if ( v42 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v102, v42, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v43, 0x4000LL);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v102) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v43, 0x4000LL);
            WdLogGlobalForLineNumber = 1616;
          }
          v45 = v102;
          if ( v102 )
          {
            v102 = 0LL;
            *v45 = 0;
          }
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v46 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v46);
        *((_QWORD *)a1 + 358) = v46[6];
        *((_DWORD *)a1 + 35) = 2;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        v47 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 6, 0x404u);
        v48 = (__int64)v47;
        if ( v47 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v103, v47, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 216LL), v48);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v103) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v48, 1024LL);
            WdLogGlobalForLineNumber = 1669;
          }
          v50 = v103;
          if ( v103 )
          {
            v103 = 0LL;
            *v50 = 0;
          }
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v51 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v51);
        *((_QWORD *)a1 + 358) = v51[6];
        *((_DWORD *)a1 + 35) = 6;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !v97 )
        {
          v53 = 195072;
          if ( v52 != 3 )
            v53 = 0x2000;
          v54 = 8;
          if ( v52 != 3 )
            v54 = 3;
          v55 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), v54, v53 + 4);
          v56 = v55;
          if ( v55 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v104, v55, v53);
            v57 = v53;
            v58 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 736LL) + 8LL)
                                                                                            + 608LL))(
                    a1,
                    v56,
                    v53);
            if ( v58 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v58 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v104) )
            {
              if ( v58 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry4(1LL, a1, v56, v57, v54);
              WdLogGlobalForLineNumber = 1736;
            }
            v59 = v104;
            if ( v104 )
            {
              v104 = 0LL;
              *v59 = 0;
            }
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v60 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v60);
          *((_QWORD *)a1 + 358) = v60[6];
          *((_DWORD *)a1 + 35) = v54;
          if ( v23 )
            TdrUpdateDbgReport(a1, 0);
        }
        v61 = *((_DWORD *)a1 + 4);
        if ( v61 != 3 && !TdrIsDisplayOnlyTdr(v61) && !v97 )
        {
          v62 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v62);
          v63 = *((_DWORD *)v62 + 4) - *((_DWORD *)v62 + 6) - 10248;
          v64 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 4, v63 + 4);
          v65 = v64;
          if ( v64 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v105, v64, v63);
            v66 = *((_QWORD *)a1 + 360);
            if ( v66 )
              v67 = *(unsigned int *)(v66 + 4);
            else
              v67 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 760LL) + 8LL)
                                                                                             + 328LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 768LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v67,
                    v65,
                    v63) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v105) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v65, v63);
              WdLogGlobalForLineNumber = 1814;
            }
            v68 = v105;
            if ( v105 )
            {
              v105 = 0LL;
              *v68 = 0;
            }
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v69 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v69);
          *((_QWORD *)a1 + 358) = v69[6];
          *((_DWORD *)a1 + 35) = 4;
          if ( v23 )
            TdrUpdateDbgReport(a1, 0);
        }
        v70 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 9, 0xCu);
        v71 = (__int64)v70;
        if ( v70 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v100, v70, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v71);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v100) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v71, 8LL);
            WdLogGlobalForLineNumber = 1866;
          }
          v73 = v100;
          if ( v100 )
          {
            v100 = 0LL;
            *v73 = 0;
          }
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v74 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v74);
        *((_QWORD *)a1 + 358) = v74[6];
        *((_DWORD *)a1 + 35) = 9;
        if ( v23 )
          TdrUpdateDbgReport(a1, 0);
        memset(v114, 0, sizeof(v114));
        v75 = 1;
        if ( (int)DpiGetDbgInfoAdapters((__int64)v114) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v77 = v114[4 * i];
            if ( !v77 )
              goto LABEL_160;
            v78 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), (unsigned int)i + 32, 0x14u);
            v79 = v78;
            if ( !v78 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
LABEL_160:
              v75 = 1;
              break;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v101, v78, 16);
            v80 = *((_DWORD *)v79 + 3);
            *((_DWORD *)v79 + 1) = v114[4 * i + 1];
            *((_DWORD *)v79 + 2) = v114[4 * i + 2];
            v81 = v114[4 * i + 3];
            v75 = v82 - 15;
            *(_DWORD *)v79 = v77;
            *((_DWORD *)v79 + 3) = v80 ^ (v82 - 15) & (v81 ^ v80) ^ ((unsigned __int8)v81 ^ (unsigned __int8)(v80 ^ (v82 - 15) & (v81 ^ v80))) & 2;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v101) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(v75, a1, v79, 16LL);
              WdLogGlobalForLineNumber = 1930;
              if ( v101 )
                *v101 = 0;
              break;
            }
            v83 = v101;
            if ( v101 )
            {
              v101 = 0LL;
              *v83 = 0;
            }
            v84 = (unsigned int *)*((_QWORD *)a1 + 359);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v84);
            *((_QWORD *)a1 + 358) = v84[6];
            *((_DWORD *)a1 + 35) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 0);
            v75 = 1;
          }
        }
        if ( *((_BYTE *)a1 + 2921) )
        {
          DbgOwnerTag = TdrGetDbgOwnerTag(a1);
          if ( ((DbgOwnerTag + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
            DbgOwnerTag = retaddr;
          v99 = 0;
          TdrRetrieveSecondaryBucketingKey(a1, &v99);
          v87 = *((_DWORD *)a1 + 4);
          if ( v87 == 6 || v87 == 12 )
            v88 = (*((_BYTE *)a1 + 2820) != 0) + 321;
          else
            v88 = 279;
          v89 = v99;
          v90 = *((_QWORD *)a1 + 351);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
          {
            LODWORD(v94) = 1;
            McTemplateK0pt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&TdrCaptureDumpStart,
              v86,
              *((_QWORD *)a1 + 4),
              v94);
          }
          v91 = DbgkWerCaptureLiveKernelDump(
                  L"WATCHDOG",
                  v88,
                  a1,
                  DbgOwnerTag,
                  v89,
                  v90,
                  a1,
                  TdrCaptureLiveKernelDumpCallback,
                  v75);
          v93 = (unsigned int)v91;
          if ( v91 < 0 )
          {
            v75 = 3;
            v93 = (unsigned int)DbgkWerCaptureLiveKernelDump(
                                  L"WATCHDOG",
                                  v88,
                                  a1,
                                  DbgOwnerTag,
                                  v89,
                                  v90,
                                  a1,
                                  TdrCaptureLiveKernelDumpCallback,
                                  3);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
          {
            LODWORD(v96) = v93;
            LODWORD(v95) = v75;
            McTemplateK0pqq_EtwWriteTransfer(v92, (__int64)&TdrCaptureDumpFinish, v93, *((_QWORD *)a1 + 4), v95, v96);
          }
          *((_BYTE *)a1 + 2922) = 1;
        }
      }
      else
      {
        *((_DWORD *)a1 + 29) |= 2u;
        TdrFreePool(*((void **)a1 + 357));
        *((_QWORD *)a1 + 357) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 29) |= 2u;
    }
  }
}
