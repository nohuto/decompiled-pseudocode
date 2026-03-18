/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x1403816F0
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401CA1D0 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CAF60 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14001DB10 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     DpiGetDbgInfoAdapters @ 0x140064774 (DpiGetDbgInfoAdapters.c)
 *     DpiGetAdapterDebugData @ 0x14007C05C (DpiGetAdapterDebugData.c)
 *     DpiGetGlobalDebugData @ 0x14007C0E0 (DpiGetGlobalDebugData.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140184A14 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1401881A4 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x140188944 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x140189924 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x14018A2E4 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401CA898 (-TdrFreePool@@YAXPEAX@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401CB3EC (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CB4A0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1403824B4 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z @ 0x140382528 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1403EEDE0 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2, unsigned int a3, __int128 *a4)
{
  int v4; // eax
  __int128 *v6; // r13
  __int64 Pool2; // rax
  __int64 v9; // r9
  CTDR_DUMP_BUFFER *v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  void *v15; // rax
  void *v16; // rbx
  unsigned int *v17; // rbx
  unsigned int v18; // edi
  unsigned __int16 v19; // r14
  unsigned int v20; // r12d
  unsigned int RecentEvents; // eax
  unsigned int v22; // ebx
  void *v23; // rax
  unsigned int *v24; // rbx
  char v25; // r12
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  int v28; // ecx
  __int64 *v29; // r12
  unsigned int v30; // r15d
  __int64 v31; // rax
  _DWORD *v32; // rdi
  _DWORD *v33; // rbx
  __int64 v34; // rax
  DXGADAPTER *v35; // r15
  int v36; // r14d
  __int64 *v37; // rax
  __int64 v38; // r11
  __int64 v39; // rcx
  _BYTE *v40; // r10
  __int64 v41; // rax
  const char *v42; // r8
  unsigned int *v43; // rbx
  char *v44; // rax
  char *v45; // rbx
  int SmbiosInfo; // eax
  _DWORD *v47; // rax
  unsigned int *v48; // rbx
  char *v49; // rax
  __int64 v50; // rbx
  int AdapterDebugData; // eax
  _DWORD *v52; // rax
  unsigned int *v53; // rbx
  int v54; // ecx
  unsigned int v55; // ebx
  unsigned int v56; // edi
  char *v57; // rax
  char *v58; // r14
  __int64 v59; // r15
  int v60; // ebx
  _DWORD *v61; // rax
  unsigned int *v62; // rbx
  int v63; // ecx
  CTDR_DUMP_BUFFER *v64; // rbx
  unsigned int v65; // ebx
  char *v66; // rax
  char *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r9
  _DWORD *v70; // rax
  unsigned int *v71; // rbx
  char *v72; // rax
  __int64 v73; // rbx
  int GlobalDebugData; // eax
  _DWORD *v75; // rax
  unsigned int *v76; // rbx
  unsigned int v77; // ebx
  unsigned __int16 i; // di
  int v79; // r15d
  char *v80; // rax
  char *v81; // r14
  int v82; // eax
  int v83; // ecx
  int v84; // r8d
  _DWORD *v85; // rax
  unsigned int *v86; // rbx
  unsigned __int64 DbgOwnerTag; // rdi
  __int64 v88; // r8
  int v89; // edx
  unsigned int v90; // r12d
  __int64 v91; // r14
  __int64 v92; // r15
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // [rsp+20h] [rbp-E0h]
  __int64 v97; // [rsp+20h] [rbp-E0h]
  __int64 v98; // [rsp+28h] [rbp-D8h]
  char v99; // [rsp+50h] [rbp-B0h]
  unsigned int v101; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD *v102; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v103; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v104; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v105; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v106; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v107; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v108[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v109; // [rsp+90h] [rbp-70h]
  __int64 v110; // [rsp+98h] [rbp-68h]
  __int64 v111; // [rsp+A0h] [rbp-60h]
  __int128 v112; // [rsp+A8h] [rbp-58h]
  __int128 v113; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v114[9]; // [rsp+C8h] [rbp-38h]
  __int64 v115; // [rsp+ECh] [rbp-14h]
  _DWORD v116[28]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 retaddr; // [rsp+1B8h] [rbp+B8h]

  v4 = *((_DWORD *)a1 + 4);
  v101 = a3;
  v6 = a4;
  if ( v4 == 6 || (v99 = 0, v4 == 12) )
    v99 = 1;
  if ( !*((_QWORD *)a1 + 357) )
  {
    Pool2 = ExAllocatePool2(256LL, 17172484LL, 1380209782LL, a4);
    *((_QWORD *)a1 + 357) = Pool2;
    if ( Pool2 )
    {
      v10 = (CTDR_DUMP_BUFFER *)ExAllocatePool2(256LL, 32LL, 1380209782LL, v9);
      if ( v10 )
        v12 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v10, v11, *((_DWORD **)a1 + 357));
      else
        v12 = 0LL;
      *((_QWORD *)a1 + 359) = v12;
      if ( v12 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
        *((_QWORD *)a1 + 358) = v12[6];
        v14 = ExAllocatePool2(256LL, 36LL, 1380209782LL, v13);
        *((_QWORD *)a1 + 360) = v14;
        if ( !v14 )
          *((_DWORD *)a1 + 29) |= 2u;
        *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        memmove((char *)a1 + 200, &g_TdrHistory, 0xA18uLL);
        v15 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 0xFFFF, 0xAB0u);
        v16 = v15;
        if ( v15 )
        {
          memmove(v15, (char *)a1 + 112, 0xAB0uLL);
          *((_QWORD *)a1 + 361) = v16;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v17 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v17);
        *((_QWORD *)a1 + 358) = v17[6];
        *((_DWORD *)a1 + 35) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 0);
        v114[0] = 1;
        v114[1] = 32;
        v18 = 0;
        v114[2] = 32;
        v19 = 0;
        v114[6] = 32;
        v114[8] = 32;
        v114[3] = 64;
        v114[4] = 64;
        v114[5] = 64;
        v114[7] = 64;
        v115 = 64LL;
        do
        {
          if ( v18 >= 0x5000 )
            break;
          v20 = v114[v19];
          RecentEvents = WdLogGetRecentEvents(v19, v20, 0LL, 0LL);
          v22 = 20480 - v18;
          if ( RecentEvents + v18 <= 0x5000 )
            v22 = RecentEvents;
          if ( v22 )
          {
            v23 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), (unsigned int)v19 + 16, v22);
            if ( v23 )
              v22 = WdLogGetRecentEvents(v19, v20, v23, v22);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v18 += v22;
          ++v19;
        }
        while ( v19 < 0xBu );
        v24 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v24);
        v25 = a2;
        *((_QWORD *)a1 + 358) = v24[6];
        *((_DWORD *)a1 + 35) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 0);
        v26 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 1, 0x1000004u);
        v102 = v26;
        v27 = v26;
        if ( v26 )
        {
          v28 = *((_DWORD *)a1 + 4);
          if ( v28 == 6 || (v108[0] = 279, v28 == 12) )
            v108[0] = 321;
          v109 = v26;
          v108[1] = 0;
          v111 = *((_QWORD *)a1 + 360);
          v29 = 0LL;
          v110 = 0x1000000LL;
          v112 = 0LL;
          LODWORD(v112) = v28;
          v113 = 0LL;
          if ( v28 == 3 )
          {
            v6 = &v113;
            LODWORD(v113) = *((_DWORD *)a1 + 20);
            v30 = 16;
            DWORD1(v113) = *((_DWORD *)a1 + 23);
            *((_QWORD *)&v113 + 1) = *((_QWORD *)a1 + 12);
          }
          else
          {
            if ( v28 == 6 && v6 )
            {
              v31 = *((_QWORD *)v6 + 4);
              if ( v31 )
                v29 = *(__int64 **)(v31 + 472);
              *((_QWORD *)v6 + 4) = 0LL;
            }
            v30 = v101;
          }
          v32 = v27 + 0x400000;
          DWORD1(v112) = v30;
          *((_QWORD *)&v112 + 1) = v6;
          v33 = 0LL;
          v27[0x400000] = 5394245;
          v34 = *((_QWORD *)a1 + 360);
          if ( v34 )
          {
            v33 = (_DWORD *)(v34 + 32);
            *(_DWORD *)(v34 + 32) = 5394245;
          }
          v35 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) )
          {
            v36 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v35, (struct _DXGKARG_COLLECTDBGINFO2 *)v108);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v35, 1);
            v36 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v35, (struct _DXGKARG_COLLECTDBGINFO2 *)v108);
            DXGADAPTER::ReleaseDdiSync(v35);
          }
          if ( v36 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v36 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v36 >= 0 )
          {
            if ( (_DWORD)v112 == 6 )
            {
              if ( v6 )
              {
                v37 = (__int64 *)*((_QWORD *)v6 + 4);
                if ( v37 || (v37 = v29) != 0LL )
                {
                  v38 = *v37;
                  if ( *v37 )
                  {
                    v39 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 40LL);
                    if ( v39 )
                    {
                      v40 = (char *)a1 + 2821;
                      *((_QWORD *)a1 + 351) = *(_QWORD *)(v39 + 56);
                      v41 = *(_QWORD *)(v39 + 64);
                      if ( !v41
                        || (v42 = *(const char **)(v41 + 96)) == 0LL
                        || (int)RtlStringCbCopyA((char *)a1 + 2821, 15LL, v42) < 0 )
                      {
                        *v40 = 0;
                      }
                      *((_DWORD *)a1 + 709) = *(_DWORD *)(v38 + 144);
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
          if ( RtlCompareMemory(v32, "EOR", 4uLL) != 4 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v102, 0x1000000LL);
            WdLogGlobalForLineNumber = 1553;
          }
          if ( v33 )
          {
            if ( RtlCompareMemory(v33, "EOR", 4uLL) != 4 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, *((_QWORD *)a1 + 360), 32LL);
              WdLogGlobalForLineNumber = 1564;
            }
            *v33 = 0;
          }
          v25 = a2;
          *v32 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v43 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v43);
        *((_QWORD *)a1 + 358) = v43[6];
        *((_DWORD *)a1 + 35) = 1;
        if ( v25 )
          TdrUpdateDbgReport(a1, 0);
        v44 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 2, 0x4004u);
        v45 = v44;
        if ( v44 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v104, v44, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v45, 0x4000LL);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v104) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v45, 0x4000LL);
            WdLogGlobalForLineNumber = 1616;
          }
          v47 = v104;
          if ( v104 )
          {
            v104 = 0LL;
            *v47 = 0;
          }
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v48 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v48);
        *((_QWORD *)a1 + 358) = v48[6];
        *((_DWORD *)a1 + 35) = 2;
        if ( v25 )
          TdrUpdateDbgReport(a1, 0);
        v49 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 6, 0x404u);
        v50 = (__int64)v49;
        if ( v49 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v105, v49, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 216LL), v50);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v105) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v50, 1024LL);
            WdLogGlobalForLineNumber = 1669;
          }
          v52 = v105;
          if ( v105 )
          {
            v105 = 0LL;
            *v52 = 0;
          }
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v53 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v53);
        *((_QWORD *)a1 + 358) = v53[6];
        *((_DWORD *)a1 + 35) = 6;
        if ( v25 )
          TdrUpdateDbgReport(a1, 0);
        if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !v99 )
        {
          v55 = 195072;
          if ( v54 != 3 )
            v55 = 0x2000;
          v56 = 8;
          if ( v54 != 3 )
            v56 = 3;
          v57 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), v56, v55 + 4);
          v58 = v57;
          if ( v57 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v106, v57, v55);
            v59 = v55;
            v60 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 736LL) + 8LL)
                                                                                            + 608LL))(
                    a1,
                    v58,
                    v55);
            if ( v60 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v60 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v106) )
            {
              if ( v60 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry4(1LL, a1, v58, v59, v56);
              WdLogGlobalForLineNumber = 1736;
            }
            v61 = v106;
            if ( v106 )
            {
              v106 = 0LL;
              *v61 = 0;
            }
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v62 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v62);
          *((_QWORD *)a1 + 358) = v62[6];
          *((_DWORD *)a1 + 35) = v56;
          if ( v25 )
            TdrUpdateDbgReport(a1, 0);
        }
        v63 = *((_DWORD *)a1 + 4);
        if ( v63 != 3 && !TdrIsDisplayOnlyTdr(v63) && !v99 )
        {
          v64 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v64);
          v65 = *((_DWORD *)v64 + 4) - *((_DWORD *)v64 + 6) - 10248;
          v66 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 4, v65 + 4);
          v67 = v66;
          if ( v66 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v107, v66, v65);
            v68 = *((_QWORD *)a1 + 360);
            if ( v68 )
              v69 = *(unsigned int *)(v68 + 4);
            else
              v69 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 760LL) + 8LL)
                                                                                             + 328LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 768LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v69,
                    v67,
                    v65) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v107) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v67, v65);
              WdLogGlobalForLineNumber = 1814;
            }
            v70 = v107;
            if ( v107 )
            {
              v107 = 0LL;
              *v70 = 0;
            }
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v71 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v71);
          *((_QWORD *)a1 + 358) = v71[6];
          *((_DWORD *)a1 + 35) = 4;
          if ( v25 )
            TdrUpdateDbgReport(a1, 0);
        }
        v72 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 9, 0xCu);
        v73 = (__int64)v72;
        if ( v72 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v102, v72, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v73);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v102) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v73, 8LL);
            WdLogGlobalForLineNumber = 1866;
          }
          v75 = v102;
          if ( v102 )
          {
            v102 = 0LL;
            *v75 = 0;
          }
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v76 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v76);
        *((_QWORD *)a1 + 358) = v76[6];
        *((_DWORD *)a1 + 35) = 9;
        if ( v25 )
          TdrUpdateDbgReport(a1, 0);
        memset(v116, 0, sizeof(v116));
        v77 = 1;
        if ( (int)DpiGetDbgInfoAdapters((__int64)v116) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v79 = v116[4 * i];
            if ( !v79 )
              goto LABEL_160;
            v80 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), (unsigned int)i + 32, 0x14u);
            v81 = v80;
            if ( !v80 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
LABEL_160:
              v77 = 1;
              break;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v103, v80, 16);
            v82 = *((_DWORD *)v81 + 3);
            *((_DWORD *)v81 + 1) = v116[4 * i + 1];
            *((_DWORD *)v81 + 2) = v116[4 * i + 2];
            v83 = v116[4 * i + 3];
            v77 = v84 - 15;
            *(_DWORD *)v81 = v79;
            *((_DWORD *)v81 + 3) = v82 ^ (v84 - 15) & (v83 ^ v82) ^ ((unsigned __int8)v83 ^ (unsigned __int8)(v82 ^ (v84 - 15) & (v83 ^ v82))) & 2;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v103) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(v77, a1, v81, 16LL);
              WdLogGlobalForLineNumber = 1930;
              if ( v103 )
                *v103 = 0;
              break;
            }
            v85 = v103;
            if ( v103 )
            {
              v103 = 0LL;
              *v85 = 0;
            }
            v86 = (unsigned int *)*((_QWORD *)a1 + 359);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v86);
            *((_QWORD *)a1 + 358) = v86[6];
            *((_DWORD *)a1 + 35) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 0);
            v77 = 1;
          }
        }
        if ( *((_BYTE *)a1 + 2921) )
        {
          DbgOwnerTag = TdrGetDbgOwnerTag(a1);
          if ( ((DbgOwnerTag + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
            DbgOwnerTag = retaddr;
          v101 = 0;
          TdrRetrieveSecondaryBucketingKey(a1, &v101);
          v89 = *((_DWORD *)a1 + 4);
          if ( v89 == 6 || v89 == 12 )
            v90 = (*((_BYTE *)a1 + 2820) != 0) + 321;
          else
            v90 = 279;
          v91 = v101;
          v92 = *((_QWORD *)a1 + 351);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
          {
            LODWORD(v96) = 1;
            McTemplateK0pt_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&TdrCaptureDumpStart,
              v88,
              *((_QWORD *)a1 + 4),
              v96);
          }
          v93 = DbgkWerCaptureLiveKernelDump(
                  L"WATCHDOG",
                  v90,
                  a1,
                  DbgOwnerTag,
                  v91,
                  v92,
                  a1,
                  TdrCaptureLiveKernelDumpCallback,
                  v77);
          v95 = (unsigned int)v93;
          if ( v93 < 0 )
          {
            v77 = 3;
            v95 = (unsigned int)DbgkWerCaptureLiveKernelDump(
                                  L"WATCHDOG",
                                  v90,
                                  a1,
                                  DbgOwnerTag,
                                  v91,
                                  v92,
                                  a1,
                                  TdrCaptureLiveKernelDumpCallback,
                                  3);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
          {
            LODWORD(v98) = v95;
            LODWORD(v97) = v77;
            McTemplateK0pqq_EtwWriteTransfer(v94, (__int64)&TdrCaptureDumpFinish, v95, *((_QWORD *)a1 + 4), v97, v98);
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
