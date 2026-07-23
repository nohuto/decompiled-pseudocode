/*
 * XREFs of CmpReorganizeHive @ 0x1409331F0
 * Callers:
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmSiQuerySystemTime @ 0x1404ADBFC (CmSiQuerySystemTime.c)
 *     ExIsSoftBoot @ 0x1404F7160 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpLogReorganizeEvent @ 0x1407D27B4 (CmpLogReorganizeEvent.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DAE44 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpCreateEmptyHiveClone @ 0x1407DEA60 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x1407DECCC (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpClearKeyAccessBits @ 0x140933420 (CmpClearKeyAccessBits.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmCheckRegistry @ 0x140AE4CC0 (CmCheckRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter3, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // ebx
  __int64 v7; // rcx
  unsigned __int16 *v8; // r12
  __int64 Pool; // r13
  int v10; // eax
  unsigned __int64 v11; // rcx
  LARGE_INTEGER *v12; // r9
  ULONG v13; // edx
  LARGE_INTEGER v14; // r8
  int v15; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int EmptyHiveClone; // eax
  ULONG_PTR v20; // rsi
  int v21; // ebx
  int v22; // edx
  int v23; // r9d
  int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rcx
  unsigned int v30; // r15d
  unsigned int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rcx
  LARGE_INTEGER v34; // rbx
  __int64 v35; // rcx
  ULONG_PTR v36; // [rsp+28h] [rbp-D8h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v39; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v41; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR *p_BugCheckParameter3a; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int16 *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int16 *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  __int64 *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  __int64 v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  __int64 v65; // [rsp+150h] [rbp+50h]
  int v66; // [rsp+158h] [rbp+58h]
  int v67; // [rsp+15Ch] [rbp+5Ch]
  __int64 v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int64 v70; // [rsp+170h] [rbp+70h]
  int v71; // [rsp+178h] [rbp+78h]
  int v72; // [rsp+17Ch] [rbp+7Ch]
  __int64 v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  __int64 v75; // [rsp+190h] [rbp+90h]
  int v76; // [rsp+198h] [rbp+98h]
  int v77; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]

  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  LODWORD(v37) = 0;
  v39.QuadPart = 0LL;
  v6 = a3;
  BugCheckParameter3a = 0LL;
  v7 = *(unsigned int *)(v4 + 144);
  v8 = a2;
  Pool = 0LL;
  v44 = 0LL;
  if ( (v7 & 1) != 0 )
    return 0;
  v10 = *(_DWORD *)(BugCheckParameter3 + 160);
  if ( (v10 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter3 + 1544) )
    return 0;
  if ( (v10 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter3 + 168) )
    return 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v7, a2, a3, a4) )
  {
    v15 = -1073741431;
LABEL_59:
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
    {
      LODWORD(BugCheckParameter3a) = v15;
      p_BugCheckParameter3a = &BugCheckParameter3a;
      v47 = 4LL;
      v48 = &v43;
      v43 = 0x1000000LL;
      v49 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09F58,
        (unsigned __int8 *)&dword_140056124,
        0LL,
        0LL,
        4u,
        v45);
    }
    return (unsigned int)v15;
  }
  if ( (v6 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) - 1LL;
    if ( v11 > 1 )
      goto LABEL_10;
  }
  CmSiQuerySystemTime(&v39);
  v12 = *(LARGE_INTEGER **)(BugCheckParameter3 + 64);
  v13 = v39.LowPart & 0xFFFFFFFC;
  v39.LowPart &= 0xFFFFFFFC;
  v14 = v12[21];
  if ( v14.QuadPart <= (unsigned __int64)v39.QuadPart )
  {
    v11 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( v39.QuadPart - v14.QuadPart < v11 )
      goto LABEL_10;
  }
  if ( !v8 )
  {
    v11 = 0LL;
    *((_QWORD *)&v44 + 1) = v12 + 6;
    do
    {
      if ( !*((_WORD *)&v12[6].LowPart + (unsigned __int16)v11) )
        break;
      LOWORD(v11) = v11 + 1;
    }
    while ( (unsigned __int16)v11 < 0x1Fu );
    LOWORD(v11) = 2 * v11;
    v8 = (unsigned __int16 *)&v44;
    LOWORD(v44) = v11;
  }
  if ( v14.QuadPart == 2 || v14.QuadPart != 1 && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x400) == 0 )
  {
    v39.LowPart = v13 | 2;
    CmpClearKeyAccessBits(BugCheckParameter3);
    CmpLockRegistry(v17);
    HvLockHiveFlusherShared(BugCheckParameter3);
    HvLockHiveWriter(BugCheckParameter3);
    HvMarkBaseBlockDirty(BugCheckParameter3);
    *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v39;
    HvUnlockHiveWriter(BugCheckParameter3);
    HvUnlockHiveFlusherShared(BugCheckParameter3);
    CmpUnlockRegistry(v18);
    goto LABEL_10;
  }
  if ( v12[4].HighPart == -1 )
  {
LABEL_10:
    v15 = 0;
    goto LABEL_11;
  }
  v39.LowPart = v13 | 1;
  EmptyHiveClone = CmpCreateEmptyHiveClone((__int64 *)&BugCheckParameter3a, BugCheckParameter3);
  v20 = BugCheckParameter3a;
  v15 = EmptyHiveClone;
  if ( EmptyHiveClone >= 0 )
  {
    v15 = CmpCopyKeyPartial(
            BugCheckParameter3,
            *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
            BugCheckParameter3a,
            -1,
            6,
            v36,
            0,
            (unsigned int *)&v37);
    if ( v15 >= 0 )
    {
      v21 = v37;
      *(_DWORD *)(*(_QWORD *)(v20 + 64) + 36LL) = v37;
      HvMarkBaseBlockDirty(v20);
      v15 = CmpCopySyncTree(
              BugCheckParameter3,
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL),
              v20,
              v21,
              66,
              0);
      if ( v15 >= 0 )
      {
        Pool = CmpAllocatePool(0x100uLL, 0x1B0uLL, 0x33394D43u);
        if ( Pool )
        {
          v15 = CmCheckRegistry(v20);
          if ( v15 >= 0 )
          {
            v26 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
            if ( (v26 & 4) != 0 || *(_DWORD *)(BugCheckParameter3 + 4764) == *(_DWORD *)(v20 + 4764) )
            {
              *(_QWORD *)(v20 + 56) = 0LL;
              v30 = *(_DWORD *)(v20 + 280);
              v31 = *(_DWORD *)(BugCheckParameter3 + 280);
              CmpSwapHiveStorage(BugCheckParameter3, v20);
              if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
              {
                v33 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
                p_BugCheckParameter3a = (ULONG_PTR *)&v42;
                v48 = (__int64 *)&BugCheckParameter3a;
                v50 = &v37;
                v52 = &v43;
                v42 = v33;
                v47 = 8LL;
                LODWORD(BugCheckParameter3a) = v31;
                v49 = 4LL;
                LODWORD(v37) = v30;
                v51 = 4LL;
                v43 = 0x1000000LL;
                v53 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09F58,
                  (unsigned __int8 *)&word_1400560CE,
                  0LL,
                  0LL,
                  6u,
                  v45);
              }
              CmpLockRegistry(v32);
              HvLockHiveFlusherShared(BugCheckParameter3);
              HvLockHiveWriter(BugCheckParameter3);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              v34 = v39;
              *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v39;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v35);
              CmpLogReorganizeEvent(v8, v31, v30);
              if ( v30 < v31 )
              {
                if ( CmpFirstReorganize )
                {
                  CmpReorganizeTotalBytesSaved = 0LL;
                  CmpReorganizeLastRun = v34;
                  CmpFirstReorganize = 0;
                }
                CmpReorganizeTotalBytesSaved += v31 - v30;
                CmpUpdateReorganizeRegistryValues();
              }
              v15 = 0;
            }
            else
            {
              if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
              {
                LODWORD(BugCheckParameter3a) = v27;
                p_BugCheckParameter3a = &BugCheckParameter3a;
                LODWORD(v37) = v28;
                v48 = &v37;
                v47 = 4LL;
                v50 = &v42;
                v49 = 4LL;
                v42 = 0x1000000LL;
                v51 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09F58,
                  (unsigned __int8 *)&word_140056066,
                  0LL,
                  0LL,
                  5u,
                  v45);
              }
              CmpLockRegistry(v26);
              HvLockHiveFlusherShared(BugCheckParameter3);
              HvLockHiveWriter(BugCheckParameter3);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v39;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v29);
              v15 = -1073741492;
            }
          }
          else
          {
            if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
            {
              LODWORD(BugCheckParameter3a) = v15;
              v55 = &BugCheckParameter3a;
              v57 = &v40;
              v22 = *(unsigned __int16 *)(Pool + 8);
              v23 = *(unsigned __int16 *)(Pool + 10);
              v63 = Pool + 8;
              v59 = &v41;
              v65 = Pool + 12;
              v24 = *(unsigned __int8 *)(Pool + 394);
              v66 = 12 * v22;
              v70 = Pool + 108;
              v71 = 12 * v23;
              v75 = Pool + 396;
              v78 = &v42;
              LOWORD(v37) = v24;
              v40 = v22;
              v41 = v23;
              v68 = Pool + 10;
              v73 = Pool + 394;
              v56 = 4LL;
              v58 = 2LL;
              v60 = 2LL;
              v61 = &v37;
              v62 = 2LL;
              v64 = 2LL;
              v67 = 0;
              v69 = 2LL;
              v72 = 0;
              v74 = 2LL;
              v76 = 8 * v24;
              v77 = 0;
              v42 = 0x1000000LL;
              v79 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E09F58,
                (unsigned __int8 *)&dword_140055CA8 + 2,
                0LL,
                0LL,
                0xDu,
                &v54);
            }
            if ( v15 == -1073741492 || v15 == -2147483606 )
            {
              CmpLockRegistry(v11);
              HvLockHiveFlusherShared(BugCheckParameter3);
              HvLockHiveWriter(BugCheckParameter3);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v39;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v25);
            }
          }
        }
        else
        {
          v15 = -1073741670;
        }
      }
    }
  }
  if ( v20 )
    CmpDestroyHive(v20);
LABEL_11:
  CmpReleaseShutdownRundown(v11);
  if ( Pool )
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  if ( v15 < 0 )
    goto LABEL_59;
  return (unsigned int)v15;
}
