/*
 * XREFs of InitializeGre @ 0x1C02DB800
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C0077FFC (GreCreateSemaphoreInternal.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C007C1AC (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     HmgCreate @ 0x1C007C9D4 (HmgCreate.c)
 *     GreCreateRectRgn @ 0x1C008A630 (GreCreateRectRgn.c)
 *     ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x1C00BA114 (-AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C00BEB38 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     bLockEtwEnabled @ 0x1C00C19A8 (bLockEtwEnabled.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C00C1B60 (-Initialize@SfmState@@QEAAHXZ.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C00C1F28 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C00C2FF0 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     ?bInitPathAlloc@@YAHXZ @ 0x1C00C3720 (-bInitPathAlloc@@YAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 *     bInitPALOBJ @ 0x1C02DBCC4 (bInitPALOBJ.c)
 *     vInitXLATE @ 0x1C02DD540 (vInitXLATE.c)
 *     bInitICM @ 0x1C02DDB24 (bInitICM.c)
 *     GreEngLoadModuleTrackInit @ 0x1C02DDF80 (GreEngLoadModuleTrackInit.c)
 *     MultiUserGreCleanupInit @ 0x1C02DDFC8 (MultiUserGreCleanupInit.c)
 *     bInitBMOBJ @ 0x1C02DE010 (bInitBMOBJ.c)
 */

char __fastcall InitializeGre(Gre::Base *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 SemaphoreInternal; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct HOBJ__ *RectRgn; // rax
  __int64 v24; // rcx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+68h] [rbp-31h]
  int v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  _QWORD v30[10]; // [rsp+A0h] [rbp+7h] BYREF
  PULONG BitMapBuffer; // [rsp+100h] [rbp+67h] BYREF
  void *v32; // [rsp+108h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+110h] [rbp+77h] BYREF
  _QWORD *v34; // [rsp+118h] [rbp+7Fh] BYREF

  if ( Gre::Base::AllocateSessionGlobalsArea(a1)
    && (!qword_1C0294EF8 || (int)qword_1C0294EF8() < 0 || qword_1C0294F00 && (unsigned int)qword_1C0294F00()) )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 24);
    *(_BYTE *)v2 = 1;
    *(_DWORD *)(v2 + 3008) = gbNonServiceSession == 0;
    *(_DWORD *)(v2 + 6512) = UMPDInitializeSecurityLevel();
    InitializeDefaultDCAttributes(v3);
    *(_BYTE *)(v2 + 2380) = (RtlGetSuiteMask() & 0x10) != 0;
    if ( (unsigned int)MultiUserGreCleanupInit() )
    {
      if ( qword_1C02949F8 && (int)qword_1C02949F8() >= 0 && qword_1C0294A00 )
        qword_1C0294A00();
      if ( (unsigned int)GreEngLoadModuleTrackInit()
        && (!qword_1C0294A08 || (int)qword_1C0294A08() < 0 || qword_1C0294A10 && (unsigned int)qword_1C0294A10()) )
      {
        *(_DWORD *)(v2 + 180) = bLockEtwEnabled();
        if ( (unsigned int)HmgCreate(v4) )
        {
          if ( RGNMEMOBJ::InitializeScanLookAsideList(v5) )
          {
            *(_DWORD *)(v2 + 6384) = 1;
            if ( qword_1C0294A18 && (int)qword_1C0294A18() >= 0 )
            {
              v6 = 0LL;
              v32 = 0LL;
              BitMapBuffer = 0LL;
              BitMapHeader = 0LL;
              v34 = 0LL;
              if ( qword_1C0294A20 )
              {
                qword_1C0294A20(&v32, &BitMapBuffer, &BitMapHeader, &v34);
                v6 = v32;
              }
              memset(v6, 0, 0x200uLL);
              *(_QWORD *)BitMapBuffer = 0LL;
              RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
              *v34 = 0LL;
            }
            SemaphoreInternal = GreCreateSemaphoreInternal(0);
            *(_QWORD *)(v2 + 8) = SemaphoreInternal;
            if ( SemaphoreInternal )
            {
              if ( (unsigned int)bInitPathAlloc(v8) )
              {
                v9 = GreCreateSemaphoreInternal(0);
                *(_QWORD *)(v2 + 24) = v9;
                if ( v9 )
                {
                  v10 = GreCreateSemaphoreInternal(0);
                  *(_QWORD *)(v2 + 16) = v10;
                  if ( v10 )
                  {
                    v11 = GreCreateSemaphoreInternal(0);
                    *(_QWORD *)(v2 + 32) = v11;
                    if ( v11 )
                    {
                      v12 = GreCreateSemaphoreInternal(0);
                      *(_QWORD *)(v2 + 56) = v12;
                      if ( v12 )
                      {
                        v13 = GreCreateSemaphoreInternal(0);
                        *(_QWORD *)(v2 + 64) = v13;
                        if ( v13 )
                        {
                          v14 = GreCreateSemaphoreInternal(0);
                          *(_QWORD *)(v2 + 72) = v14;
                          if ( v14 )
                          {
                            v15 = GreCreateSemaphoreInternal(0);
                            *(_QWORD *)(v2 + 80) = v15;
                            if ( v15 )
                            {
                              v16 = GreCreateSemaphoreInternal(0);
                              *(_QWORD *)(v2 + 88) = v16;
                              if ( v16 )
                              {
                                v17 = GreCreateSemaphoreInternal(0);
                                *(_QWORD *)(v2 + 96) = v17;
                                if ( v17 )
                                {
                                  v18 = GreCreateSemaphoreInternal(0);
                                  *(_QWORD *)(v2 + 128) = v18;
                                  if ( v18 )
                                  {
                                    v19 = GreCreateSemaphoreInternal(0);
                                    *(_QWORD *)(v2 + 112) = v19;
                                    if ( v19 )
                                    {
                                      v20 = GreCreateSemaphoreInternal(0);
                                      *(_QWORD *)(v2 + 104) = v20;
                                      if ( v20 )
                                      {
                                        v21 = GreCreateSemaphoreInternal(0);
                                        *(_QWORD *)(v2 + 120) = v21;
                                        if ( v21 )
                                        {
                                          v22 = GreCreateSemaphoreInternal(0);
                                          *(_QWORD *)(v2 + 136) = v22;
                                          if ( v22 )
                                          {
                                            RectRgn = GreCreateRectRgn(0, 0, 0, 0);
                                            *(_QWORD *)(v2 + 6392) = RectRgn;
                                            if ( RectRgn )
                                            {
                                              RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v30, (HRGN)RectRgn, 1, 0);
                                              if ( v30[0] )
                                              {
                                                *(_QWORD *)(v2 + 6400) = v30[0];
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
                                                if ( (unsigned int)bInitPALOBJ() )
                                                {
                                                  vInitXLATE();
                                                  if ( (unsigned int)bInitBMOBJ() )
                                                  {
                                                    if ( (unsigned int)bInitBRUSHOBJ(v24)
                                                      && (unsigned int)bInitICM()
                                                      && (!qword_1C0294A28
                                                       || (int)qword_1C0294A28() < 0
                                                       || qword_1C0294A30 && (unsigned int)qword_1C0294A30())
                                                      && (!qword_1C0294A38
                                                       || (int)qword_1C0294A38() < 0
                                                       || qword_1C0294A40 && (unsigned int)qword_1C0294A40()) )
                                                    {
                                                      if ( qword_1C0294A48 && (int)qword_1C0294A48() >= 0 )
                                                      {
                                                        if ( qword_1C0294A50 )
                                                          qword_1C0294A50();
                                                      }
                                                      if ( (unsigned int)SfmState::Initialize(*(SfmState **)(v2 + 6472)) )
                                                      {
                                                        QueryTable.Flags = 0;
                                                        QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                        QueryTable.DefaultData = 0LL;
                                                        memset(&QueryTable.Name, 0, 20);
                                                        QueryTable.DefaultLength = 0;
                                                        v27 = 0LL;
                                                        v28 = 0;
                                                        v29 = 0LL;
                                                        *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573012LL) = 0;
                                                        RtlQueryRegistryValues(
                                                          0x80000003,
                                                          L"LanguagePack",
                                                          &QueryTable,
                                                          0LL,
                                                          0LL);
                                                        *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573016LL) = 1;
                                                        *(_DWORD *)(v2 + 184) = bUseActualGDIScale();
                                                        return 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
