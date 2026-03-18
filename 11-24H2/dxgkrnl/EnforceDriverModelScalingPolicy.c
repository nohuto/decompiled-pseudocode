/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1402D8E14
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402D8D1C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1402D9B64 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403EDFA0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(unsigned int *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rbx
  struct DXGGLOBAL *v6; // rdi
  struct _KTHREAD **v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  DXGADAPTER *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v18; // eax
  struct _KTHREAD **v19; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  struct _KTHREAD **v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTHREAD **v23; // [rsp+58h] [rbp-A8h] BYREF
  char v24; // [rsp+60h] [rbp-A0h]
  _BYTE v25[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v27; // [rsp+88h] [rbp-78h]
  _BYTE v28[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v29; // [rsp+C8h] [rbp-38h]
  char v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]

  Global = DXGGLOBAL::GetGlobal();
  v5 = *(_QWORD *)a1;
  v22 = v5;
  v6 = Global;
  if ( v5 )
  {
    v7 = (struct _KTHREAD **)((char *)Global + 752);
    v24 = 0;
    v23 = (struct _KTHREAD **)((char *)Global + 752);
    if ( Global == (struct DXGGLOBAL *)-752LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v7 = v23;
    }
    if ( v7[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v23);
    v8 = (_QWORD *)((char *)v6 + 800);
    v9 = (_QWORD *)*((_QWORD *)v6 + 100);
    while ( v9 != v8 && v9 )
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      if ( *(_QWORD *)((char *)v10 + 412) == __PAIR64__(HIDWORD(v22), v5) )
      {
        _m_prefetchw(v10 + 3);
        v11 = v10[3];
        while ( v11 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
          if ( v12 == v11 )
            goto LABEL_13;
        }
      }
    }
    v10 = 0LL;
LABEL_13:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v23);
    if ( v10 )
    {
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v10[23] || ExIsResourceAcquiredSharedLite((PERESOURCE)v10[21]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8971;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Potentinal Deadlock code path, Please contact basevid",
          8971LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v17 = v10[390];
        if ( !*(_BYTE *)(v17 + 289) )
        {
          if ( *(int *)(*(_QWORD *)(v17 + 16) + 3004LL) < 1105 )
          {
            if ( (unsigned int)(*a2 - 4) > 1 )
              goto LABEL_26;
          }
          else if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
          {
            goto LABEL_26;
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, *(_QWORD *)(v17 + 104));
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v10[390] + 104LL));
          v21 = (struct _KTHREAD **)(v22 + 40);
          *a2 = AdapterDefaultScaling;
          DXGFASTMUTEX::Release(v21);
        }
LABEL_26:
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
        return;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, (struct DXGADAPTER *const)v10, 0LL);
      if ( v30 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v28, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7628;
      }
      v13 = v29;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v29 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v29 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventBlockThread, v15, 72);
          KeWaitForSingleObject((char *)v29 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v29, 0LL);
        v13 = v29;
      }
      v31 = 0LL;
      v30 = 1;
      if ( *((_DWORD *)v13 + 50) != 1 )
        goto LABEL_35;
      if ( v27 != v29 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v26, 0LL);
        if ( *((_DWORD *)v27 + 50) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v26);
LABEL_35:
          COREACCESS::Release((COREACCESS *)v28);
          WdLogSingleEntry4(3LL, -1073741130LL, v10, *((int *)v10 + 104), *((unsigned int *)v10 + 103));
          WdLogGlobalForLineNumber = 8991;
          goto LABEL_25;
        }
      }
      v16 = v10[390];
      v25[1] = 1;
      if ( *(_BYTE *)(v16 + 289) )
      {
LABEL_24:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v25);
LABEL_25:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
        goto LABEL_26;
      }
      if ( *(int *)(*(_QWORD *)(v16 + 16) + 3004LL) < 1105 )
      {
        if ( (unsigned int)(*a2 - 4) > 1 )
          goto LABEL_24;
      }
      else if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
      {
        goto LABEL_24;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, *(_QWORD *)(v16 + 104));
      v18 = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v10[390] + 104LL));
      v19 = (struct _KTHREAD **)(v22 + 40);
      *a2 = v18;
      DXGFASTMUTEX::Release(v19);
      goto LABEL_24;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3265;
  }
  WdLogSingleEntry2(3LL, (int)a1[1], *a1);
  WdLogGlobalForLineNumber = 8955;
}
