/*
 * XREFs of ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403CF180
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x14018061C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401CBDA0 (-KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401EE930 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgkpDriverKnownEscape(
        struct DXGPROCESS *a1,
        struct DXGADAPTER *a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  struct _EX_RUNDOWN_REF *v12; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  _DWORD *v17; // rdi
  int v18; // r14d
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // r8d
  struct _EX_RUNDOWN_REF *v28; // rdx
  unsigned int Ptr_high; // ecx
  struct _EX_RUNDOWN_REF *v30; // [rsp+50h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+58h] [rbp-28h] BYREF
  struct DXGADAPTERSYNCOBJECT *v32; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v33[24]; // [rsp+68h] [rbp-18h] BYREF

  if ( a4 < 4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 984;
    return 3221225485LL;
  }
  *a5 = 0;
  switch ( *a3 )
  {
    case 0u:
      if ( a4 >= 8 )
      {
        v8 = a3[1];
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
        v9 = (v8 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v9 < *((_DWORD *)a1 + 74) )
        {
          v10 = *((_QWORD *)a1 + 35);
          v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
          if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v10 + 16 * (((unsigned __int64)v8 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
            {
              v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16 * (((unsigned __int64)v8 >> 6) & 0xFFFFFF));
LABEL_10:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v12);
              _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
              ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
              KeLeaveCriticalRegion();
              if ( v31 )
              {
                if ( (v31[9].Count & 0x40000) != 0 )
                  a3[1] = HIDWORD(v31[2].Ptr);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
                return 0LL;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1003;
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
              return 3221225485LL;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v12 = 0LL;
        goto LABEL_10;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 996;
      return 3221225485LL;
    case 1u:
      if ( a4 < 8 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1016;
        return 3221225485LL;
      }
      v24 = a3[1];
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
      v25 = (v24 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v25 < *((_DWORD *)a1 + 74) )
      {
        v26 = *((_QWORD *)a1 + 35);
        v27 = *(_DWORD *)(v26 + 16 * v25 + 8);
        if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v26 + 16 * (((unsigned __int64)v24 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
          {
            v28 = *(struct _EX_RUNDOWN_REF **)(v26 + 16 * (((unsigned __int64)v24 >> 6) & 0xFFFFFF));
            goto LABEL_61;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v28 = 0LL;
LABEL_61:
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v30, v28);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
      ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v30 )
      {
        Ptr_high = HIDWORD(v30[2].Ptr);
        if ( Ptr_high )
          a3[1] = Ptr_high;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
        return 0LL;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1023;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
      return 3221225485LL;
    case 2u:
      if ( a4 < 0x30 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1036;
        return 3221225485LL;
      }
      if ( *((_QWORD *)a3 + 1) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1046;
        return 3221225485LL;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, a1);
      v14 = (a3[1] >> 6) & 0xFFFFFF;
      if ( v14 >= *((_DWORD *)a1 + 74)
        || (v15 = *((_QWORD *)a1 + 35), ((a3[1] >> 25) & 0x60) != (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60))
        || (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) != 0
        || (v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F) == 0 )
      {
LABEL_34:
        WdLogSingleEntry1(3LL, a3[1]);
        WdLogGlobalForLineNumber = 1054;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
        return 3221225485LL;
      }
      if ( v16 != 8 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_34;
      }
      v17 = *(_DWORD **)(v15 + 16LL * v14);
      if ( !v17 || v17[101] != 4 )
        goto LABEL_34;
      v18 = v17[53];
      if ( (v18 & 0x100) == 0 )
      {
        WdLogSingleEntry1(3LL, a3[1]);
        WdLogGlobalForLineNumber = 1060;
LABEL_50:
        LODWORD(v21) = -1073741811;
        goto LABEL_51;
      }
      if ( *((_BYTE *)a2 + 209) )
      {
        a3[1] = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v17, a3[1]);
LABEL_41:
        *a5 = 1;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
        return 0LL;
      }
      v32 = 0LL;
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v17 + 8));
      DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECT *)v17,
                               *((struct ADAPTER_RENDER **)a2 + 391),
                               &v32,
                               0LL,
                               0LL,
                               0,
                               0);
      v20 = (struct _KTHREAD **)(v17 + 8);
      v21 = DxgAdapterSyncObject;
      DXGFASTMUTEX::Release(v20);
      if ( (int)v21 >= 0 )
      {
        v22 = *((_QWORD *)v32 + 5);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 32);
          *((_QWORD *)a3 + 1) = v23;
          if ( v23 )
            goto LABEL_41;
        }
        else
        {
          *((_QWORD *)a3 + 1) = 0LL;
        }
        if ( (v18 & 0x10) == 0 )
        {
          WdLogSingleEntry1(3LL, a3[1]);
          WdLogGlobalForLineNumber = 1087;
          goto LABEL_50;
        }
        LODWORD(v21) = 0;
      }
      else
      {
        WdLogSingleEntry2(3LL, a3[1], v21);
        WdLogGlobalForLineNumber = 1075;
      }
LABEL_51:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
      return (unsigned int)v21;
  }
  if ( *a3 != 3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1100;
    return 3221225485LL;
  }
  return KnownEscapeBuildTestCommandBuffer(a1, a2, a3, a4);
}
