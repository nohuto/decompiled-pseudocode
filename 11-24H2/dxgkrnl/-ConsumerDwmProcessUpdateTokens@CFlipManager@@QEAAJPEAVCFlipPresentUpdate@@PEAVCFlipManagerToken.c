/*
 * XREFs of ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005F734
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140019184 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x140042F60 (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x14004D4B4 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x14004DFE4 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 *     _lambda_cfa85ae072c89c165dff36c328ecf84d_::operator() @ 0x1400519B8 (_lambda_cfa85ae072c89c165dff36c328ecf84d_--operator().c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140099E40 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmProcessUpdateTokens(
        CFlipManager *this,
        struct CFlipPropertySet **a2,
        struct CFlipManagerToken *a3,
        struct _LIST_ENTRY *a4)
{
  bool v4; // zf
  CEndpointResourceStateManager *v5; // rbx
  char *v7; // r12
  int updated; // edi
  char *p_Blink; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY **v14; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v16; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY v19; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+40h] [rbp-10h] BYREF
  char v21; // [rsp+48h] [rbp-8h]
  bool v22; // [rsp+80h] [rbp+30h] BYREF

  v4 = *((_DWORD *)this + 84) == 2;
  v19.Blink = &v19;
  v5 = (CFlipManager *)((char *)this + 104);
  v19.Flink = &v19;
  v7 = (char *)this - 32;
  updated = CEndpointResourceStateManager::PrepareUpdateTokens(
              (CEndpointResourceStateManager **)this + 13,
              (struct FlipManagerObject *)a2,
              a2[7],
              v4,
              &v19);
  v21 = 1;
  v20 = &v19;
  if ( updated >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates(v5);
    while ( v19.Flink != &v19 )
    {
      p_Blink = (char *)&v19.Flink[-1].Blink;
      Flink = v19.Flink;
      v13 = v19.Flink->Flink;
      if ( v19.Flink->Flink->Blink != v19.Flink
        || (v14 = (struct _LIST_ENTRY **)*((_QWORD *)p_Blink + 2), *v14 != v19.Flink) )
      {
LABEL_16:
        __fastfail(3u);
      }
      *v14 = v13;
      v13->Blink = (struct _LIST_ENTRY *)v14;
      updated = ObReferenceObjectByPointer(v7, 3u, g_pDxgkCompositionObjectType, 0);
      if ( updated < 0 )
        goto LABEL_14;
      *((_QWORD *)p_Blink + 16) = *((_QWORD *)a3 + 14);
      CFlipContentToken::SetFlipManagerObjectPreReferenced((CFlipContentToken *)p_Blink, (struct FlipManagerObject *)v7);
      *((_QWORD *)p_Blink + 15) = a2[8];
      IsEnabledDeviceUsageNoInline = Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline();
      v16 = *((_QWORD *)a3 + 10);
      if ( !IsEnabledDeviceUsageNoInline || v16 )
      {
        p_Blink[232] = *(_BYTE *)(v16 + 28);
        p_Blink[235] = *(_BYTE *)(v16 + 85);
        p_Blink[233] = *(_BYTE *)(v16 + 86);
        p_Blink[234] = *(_BYTE *)(v16 + 84);
        *((_QWORD *)p_Blink + 30) = *(_QWORD *)(v16 + 72);
        *((_DWORD *)p_Blink + 62) = *(_DWORD *)(v16 + 64);
        *((_DWORD *)p_Blink + 63) = *(_DWORD *)(v16 + 80);
        *((_QWORD *)p_Blink + 32) = *(_QWORD *)(v16 + 56);
      }
      updated = CFlipContentToken::InFrame((CFlipContentToken *)p_Blink, &v22);
      if ( updated >= 0 && (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)p_Blink + 152LL))(p_Blink) )
      {
        Blink = a4->Blink;
        if ( Blink->Flink != a4 )
          goto LABEL_16;
        Flink->Flink = a4;
        *((_QWORD *)p_Blink + 2) = Blink;
        Blink->Flink = Flink;
        a4->Blink = Flink;
      }
      else
      {
LABEL_14:
        (*(void (__fastcall **)(char *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
        (**(void (__fastcall ***)(char *, __int64))p_Blink)(p_Blink, 1LL);
        if ( updated < 0 )
          break;
      }
    }
  }
  v21 = 0;
  lambda_cfa85ae072c89c165dff36c328ecf84d_::operator()((_QWORD **)&v20);
  return (unsigned int)updated;
}
