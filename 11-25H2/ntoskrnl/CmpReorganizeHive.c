/*
 * XREFs of CmpReorganizeHive @ 0x140A4B428
 * Callers:
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmSiQuerySystemTime @ 0x1404B324C (CmSiQuerySystemTime.c)
 *     ExIsSoftBoot @ 0x1404F7080 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpLogReorganizeEvent @ 0x1407C2B84 (CmpLogReorganizeEvent.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CB130 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpCreateEmptyHiveClone @ 0x1407CEC28 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x1407CEEA4 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x1407D2550 (CmpCopySyncTree.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     CmpClearKeyAccessBits @ 0x140889600 (CmpClearKeyAccessBits.c)
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter3, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // ebx
  __int64 v7; // rcx
  unsigned __int16 *v8; // r12
  __int64 v9; // r13
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
  __int64 Pool; // rax
  int v23; // edx
  int v24; // r9d
  int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  __int64 v33; // rcx
  __int64 v34; // rcx
  LARGE_INTEGER v35; // rbx
  __int64 v36; // rcx
  ULONG_PTR v37; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v40; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v41; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v42; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int128 v45; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR *p_BugCheckParameter3a; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  __int64 *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int16 *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int16 *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  __int64 v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  int v67; // [rsp+158h] [rbp+58h]
  int v68; // [rsp+15Ch] [rbp+5Ch]
  __int64 v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  __int64 v71; // [rsp+170h] [rbp+70h]
  int v72; // [rsp+178h] [rbp+78h]
  int v73; // [rsp+17Ch] [rbp+7Ch]
  __int64 v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  __int64 v76; // [rsp+190h] [rbp+90h]
  int v77; // [rsp+198h] [rbp+98h]
  int v78; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]

  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  LODWORD(v38) = 0;
  v40.QuadPart = 0LL;
  v6 = a3;
  BugCheckParameter3a = 0LL;
  v7 = *(unsigned int *)(v4 + 144);
  v8 = a2;
  v9 = 0LL;
  v45 = 0LL;
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
    if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000000LL) )
    {
      LODWORD(BugCheckParameter3a) = v15;
      p_BugCheckParameter3a = &BugCheckParameter3a;
      v48 = 4LL;
      v49 = &v44;
      v44 = 0x1000000LL;
      v50 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09E08,
        (unsigned __int8 *)&word_140053D86,
        0LL,
        0LL,
        4u,
        v46);
    }
    return (unsigned int)v15;
  }
  if ( (v6 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) - 1LL;
    if ( v11 > 1 )
      goto LABEL_10;
  }
  CmSiQuerySystemTime(&v40);
  v12 = *(LARGE_INTEGER **)(BugCheckParameter3 + 64);
  v13 = v40.LowPart & 0xFFFFFFFC;
  v40.LowPart &= 0xFFFFFFFC;
  v14 = v12[21];
  if ( v14.QuadPart <= (unsigned __int64)v40.QuadPart )
  {
    v11 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( v40.QuadPart - v14.QuadPart < v11 )
      goto LABEL_10;
  }
  if ( !v8 )
  {
    v11 = 0LL;
    *((_QWORD *)&v45 + 1) = v12 + 6;
    do
    {
      if ( !*((_WORD *)&v12[6].LowPart + (unsigned __int16)v11) )
        break;
      LOWORD(v11) = v11 + 1;
    }
    while ( (unsigned __int16)v11 < 0x1Fu );
    LOWORD(v11) = 2 * v11;
    v8 = (unsigned __int16 *)&v45;
    LOWORD(v45) = v11;
  }
  if ( v14.QuadPart == 2 || v14.QuadPart != 1 && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x400) == 0 )
  {
    v40.LowPart = v13 | 2;
    CmpClearKeyAccessBits(BugCheckParameter3, (__int64)v8);
    CmpLockRegistry(v17);
    HvLockHiveFlusherShared(BugCheckParameter3);
    HvLockHiveWriter(BugCheckParameter3);
    HvMarkBaseBlockDirty(BugCheckParameter3);
    *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v40;
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
  v40.LowPart = v13 | 1;
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
            v37,
            0,
            (unsigned int *)&v38);
    if ( v15 >= 0 )
    {
      v21 = v38;
      *(_DWORD *)(*(_QWORD *)(v20 + 64) + 36LL) = v38;
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
        Pool = CmpAllocatePool(0x100uLL);
        v9 = Pool;
        if ( Pool )
        {
          v15 = CmCheckRegistry(v20, 2031616LL, Pool);
          if ( v15 >= 0 )
          {
            v27 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
            if ( (v27 & 4) != 0 || *(_DWORD *)(BugCheckParameter3 + 4764) == *(_DWORD *)(v20 + 4764) )
            {
              *(_QWORD *)(v20 + 56) = 0LL;
              v31 = *(_DWORD *)(v20 + 280);
              v32 = *(_DWORD *)(BugCheckParameter3 + 280);
              CmpSwapHiveStorage(BugCheckParameter3, v20);
              if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000000LL) )
              {
                v34 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
                p_BugCheckParameter3a = (ULONG_PTR *)&v43;
                v49 = (__int64 *)&BugCheckParameter3a;
                v51 = &v38;
                v53 = &v44;
                v43 = v34;
                v48 = 8LL;
                LODWORD(BugCheckParameter3a) = v32;
                v50 = 4LL;
                LODWORD(v38) = v31;
                v52 = 4LL;
                v44 = 0x1000000LL;
                v54 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09E08,
                  (unsigned __int8 *)byte_140053DC8,
                  0LL,
                  0LL,
                  6u,
                  v46);
              }
              CmpLockRegistry(v33);
              HvLockHiveFlusherShared(BugCheckParameter3);
              HvLockHiveWriter(BugCheckParameter3);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              v35 = v40;
              *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v40;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v36);
              CmpLogReorganizeEvent(v8, v32, v31);
              if ( v31 < v32 )
              {
                if ( CmpFirstReorganize )
                {
                  CmpReorganizeTotalBytesSaved = 0LL;
                  CmpReorganizeLastRun = v35;
                  CmpFirstReorganize = 0;
                }
                CmpReorganizeTotalBytesSaved += v32 - v31;
                CmpUpdateReorganizeRegistryValues();
              }
              v15 = 0;
            }
            else
            {
              if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000000LL) )
              {
                LODWORD(BugCheckParameter3a) = v28;
                p_BugCheckParameter3a = &BugCheckParameter3a;
                LODWORD(v38) = v29;
                v49 = &v38;
                v48 = 4LL;
                v51 = &v43;
                v50 = 4LL;
                v43 = 0x1000000LL;
                v52 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E09E08,
                  (unsigned __int8 *)&word_140053E1E,
                  0LL,
                  0LL,
                  5u,
                  v46);
              }
              CmpLockRegistry(v27);
              HvLockHiveFlusherShared(BugCheckParameter3);
              HvLockHiveWriter(BugCheckParameter3);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v40;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v30);
              v15 = -1073741492;
            }
          }
          else
          {
            if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000000LL) )
            {
              LODWORD(BugCheckParameter3a) = v15;
              v56 = &BugCheckParameter3a;
              v58 = &v41;
              v23 = *(unsigned __int16 *)(v9 + 8);
              v24 = *(unsigned __int16 *)(v9 + 10);
              v64 = v9 + 8;
              v60 = &v42;
              v66 = v9 + 12;
              v25 = *(unsigned __int8 *)(v9 + 394);
              v67 = 12 * v23;
              v71 = v9 + 108;
              v72 = 12 * v24;
              v76 = v9 + 396;
              v79 = &v43;
              LOWORD(v38) = v25;
              v41 = v23;
              v42 = v24;
              v69 = v9 + 10;
              v74 = v9 + 394;
              v57 = 4LL;
              v59 = 2LL;
              v61 = 2LL;
              v62 = &v38;
              v63 = 2LL;
              v65 = 2LL;
              v68 = 0;
              v70 = 2LL;
              v73 = 0;
              v75 = 2LL;
              v77 = 8 * v25;
              v78 = 0;
              v43 = 0x1000000LL;
              v80 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E09E08,
                (unsigned __int8 *)&word_140053E86,
                0LL,
                0LL,
                0xDu,
                &v55);
            }
            if ( v15 == -1073741492 || v15 == -2147483606 )
            {
              CmpLockRegistry(v11);
              HvLockHiveFlusherShared(BugCheckParameter3);
              HvLockHiveWriter(BugCheckParameter3);
              HvMarkBaseBlockDirty(BugCheckParameter3);
              *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v40;
              HvUnlockHiveWriter(BugCheckParameter3);
              HvUnlockHiveFlusherShared(BugCheckParameter3);
              CmpUnlockRegistry(v26);
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
  if ( v9 )
    CmSiFreeMemory((PPRIVILEGE_SET)v9);
  if ( v15 < 0 )
    goto LABEL_59;
  return (unsigned int)v15;
}
