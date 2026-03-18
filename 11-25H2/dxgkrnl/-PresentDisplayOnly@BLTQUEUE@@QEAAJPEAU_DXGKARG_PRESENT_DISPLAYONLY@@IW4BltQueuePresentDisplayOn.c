/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403047EC
 * Callers:
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x140197EC4 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403057D0 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14002EC24 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0xqdqq_EtwWriteTransfer @ 0x140060560 (McTemplateK0xqdqq_EtwWriteTransfer.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1401CAF28 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x14027C1B8 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403058DC (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x140305A90 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(
        struct _KEVENT *a1,
        struct _DXGKARG_PRESENT_DISPLAYONLY *a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  DXGDODPRESENT *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ebx
  char v15; // si
  __int64 v17; // r14
  NTSTATUS v18; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-68h]
  _BYTE v20[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER v22; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)&a1[32], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  Current = DXGPROCESS::GetCurrent(v8);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v21, Current);
  if ( *(_DWORD *)(*(_QWORD *)&a1->Header.Lock + 140LL) )
  {
    v14 = -1073741823;
    goto LABEL_7;
  }
  KeClearEvent(a1 + 28);
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)&a1->Header.Lock) + 27) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v10 = *(DXGDODPRESENT **)&a1->Header.Lock;
  LODWORD(a1[31].Header.WaitListHead.Blink) = 1;
  v11 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v10 + 11), a2);
  v14 = v11;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    Timeout = HIDWORD(a1[10].Header.WaitListHead.Blink);
    McTemplateK0xqdqq_EtwWriteTransfer(Timeout, v12, v13, a1[10].Header.WaitListHead.Flink, Timeout, a3, v11, a4);
  }
  v15 = 0;
  if ( v14 >= 0 && g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
  {
    v15 = 1;
  }
  else if ( v14 != 259 )
  {
LABEL_6:
    KeSetEvent(a1 + 28, 0, 0);
    goto LABEL_7;
  }
  v14 = 258;
  v17 = 10000000LL * (unsigned int)dword_14015DA08;
  v22.QuadPart = -10000000LL * (unsigned int)dword_14015DA08;
  while ( 1 )
  {
    v18 = KeWaitForSingleObject(&a1[28], Executive, 0, 0, &v22);
    LODWORD(a1[31].Header.WaitListHead.Blink) = 0;
    if ( !v15 && !*(_DWORD *)(*(_QWORD *)&a1->Header.Lock + 140LL) && (v18 != 258 || KeReadStateEvent(a1 + 28)) )
      break;
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                         *(_QWORD *)&a1->Header.Lock,
                         5 - (unsigned int)(v15 != 0),
                         (int)a1[10].Header.WaitListHead.Blink,
                         v17) != 1 )
      goto LABEL_6;
  }
  v14 = 0;
LABEL_7:
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)a1);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  return (unsigned int)v14;
}
