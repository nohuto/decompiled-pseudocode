/*
 * XREFs of ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401F298C
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B4EB0 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003DDC0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401ED554 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401F2C14 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403AC8F8 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

__int64 __fastcall DxgkExtractRemoteBundleObject(unsigned int a1, unsigned int a2, void **a3, struct _EPROCESS *a4)
{
  __int64 v5; // rbp
  unsigned __int64 Current; // rdi
  unsigned int v9; // ebx
  int v10; // ecx
  struct DXGVAILOBJECT *v11; // rsi
  __int64 v12; // rax
  struct _KTHREAD **v13; // rbx
  int BundleObject; // eax
  _BYTE v16[16]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-38h] BYREF

  v5 = a1;
  Current = (unsigned __int64)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    v10 = *(_DWORD *)(Current + 408);
    v11 = 0LL;
    if ( (v10 & 0x80) != 0 )
    {
      if ( (v10 & 0x100) != 0 )
        v12 = *(_QWORD *)(Current + 592);
      else
        v12 = Current & -(__int64)((v10 & 0x80) != 0);
      v13 = *(struct _KTHREAD ***)(v12 + 592);
      if ( !v13 )
        goto LABEL_13;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, v13 + 8);
      v11 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v13);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(Current + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      if ( *(_QWORD *)(Current + 576) )
        v11 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
    }
    if ( v11 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v11 + 11) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v11 + 14) + 64LL)) )
        {
          BundleObject = DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
                           *((DXG_HOST_REMOTEOBJECTCHANNEL **)v11 + 15),
                           v5,
                           a2,
                           a3,
                           a4);
          v9 = BundleObject;
          if ( BundleObject < 0 )
          {
            WdLogSingleEntry2(3LL, v5, BundleObject);
            WdLogGlobalForLineNumber = 511;
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v11 + 14) + 64LL));
        }
        else
        {
          v9 = -2147483611;
          WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
          WdLogGlobalForLineNumber = 521;
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v11 + 11);
      }
      else
      {
        v9 = -2147483611;
        WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
        WdLogGlobalForLineNumber = 531;
      }
      DxgkCompositionObject::Release(v11);
      goto LABEL_23;
    }
LABEL_13:
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, Current, -1073741811LL);
    WdLogGlobalForLineNumber = 485;
LABEL_23:
    KeLeaveCriticalRegion();
    return v9;
  }
  v9 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 440;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v9;
}
