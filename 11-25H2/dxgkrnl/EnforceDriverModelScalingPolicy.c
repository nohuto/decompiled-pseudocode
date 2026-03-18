/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x140359DB0
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1403599C0 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x140359CB8 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403F40A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(unsigned int *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rbx
  struct DXGGLOBAL *v6; // rdi
  _QWORD *v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v17; // eax
  struct _KTHREAD **v18; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  struct _KTHREAD **v20; // rcx
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTHREAD **v22; // [rsp+58h] [rbp-A8h] BYREF
  char v23; // [rsp+60h] [rbp-A0h]
  _BYTE v24[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v28; // [rsp+C8h] [rbp-38h]
  char v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]

  Global = DXGGLOBAL::GetGlobal();
  v5 = *(_QWORD *)a1;
  v21 = v5;
  v6 = Global;
  if ( v5 )
  {
    v23 = 0;
    v22 = (struct _KTHREAD **)((char *)Global + 720);
    if ( Global == (struct DXGGLOBAL *)-720LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v22[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
    v7 = (_QWORD *)((char *)v6 + 768);
    v8 = (_QWORD *)*((_QWORD *)v6 + 96);
    while ( v8 != v7 && v8 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      if ( *(_QWORD *)((char *)v9 + 412) == __PAIR64__(HIDWORD(v21), v5) )
      {
        _m_prefetchw(v9 + 3);
        v10 = v9[3];
        while ( v10 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
          if ( v11 == v10 )
            goto LABEL_13;
        }
      }
    }
    v9 = 0LL;
LABEL_13:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
    if ( v9 )
    {
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v9[23] || ExIsResourceAcquiredSharedLite((PERESOURCE)v9[21]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8962;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Potentinal Deadlock code path, Please contact basevid",
          8962LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v16 = v9[390];
        if ( !*(_BYTE *)(v16 + 289) )
        {
          if ( *(int *)(*(_QWORD *)(v16 + 16) + 3004LL) < 1105 )
          {
            if ( (unsigned int)(*a2 - 4) > 1 )
              goto LABEL_26;
          }
          else if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
          {
            goto LABEL_26;
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, *(_QWORD *)(v16 + 104));
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v9[390] + 104LL));
          v20 = (struct _KTHREAD **)(v21 + 40);
          *a2 = AdapterDefaultScaling;
          DXGFASTMUTEX::Release(v20);
        }
LABEL_26:
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
        return;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v9, 0LL);
      if ( v29 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7603;
      }
      v12 = v28;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v28 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v28 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventBlockThread, v14, 72);
          KeWaitForSingleObject((char *)v28 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v28, 0LL);
        v12 = v28;
      }
      v30 = 0LL;
      v29 = 1;
      if ( *((_DWORD *)v12 + 50) != 1 )
        goto LABEL_35;
      if ( v26 != v28 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v25, 0LL);
        if ( *((_DWORD *)v26 + 50) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v25);
LABEL_35:
          COREACCESS::Release((COREACCESS *)v27);
          WdLogSingleEntry4(3LL, -1073741130LL, v9, *((int *)v9 + 104), *((unsigned int *)v9 + 103));
          WdLogGlobalForLineNumber = 8982;
          goto LABEL_25;
        }
      }
      v15 = v9[390];
      v24[1] = 1;
      if ( *(_BYTE *)(v15 + 289) )
      {
LABEL_24:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v24);
LABEL_25:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
        goto LABEL_26;
      }
      if ( *(int *)(*(_QWORD *)(v15 + 16) + 3004LL) < 1105 )
      {
        if ( (unsigned int)(*a2 - 4) > 1 )
          goto LABEL_24;
      }
      else if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
      {
        goto LABEL_24;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, *(_QWORD *)(v15 + 104));
      v17 = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v9[390] + 104LL));
      v18 = (struct _KTHREAD **)(v21 + 40);
      *a2 = v17;
      DXGFASTMUTEX::Release(v18);
      goto LABEL_24;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3264;
  }
  WdLogSingleEntry2(3LL, (int)a1[1], *a1);
  WdLogGlobalForLineNumber = 8946;
}
