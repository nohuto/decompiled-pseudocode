/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000F274
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18000E614 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800B7034 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z @ 0x18000DED8 (-AddMultipleAndSet@-$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18000DF78 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18000F45C (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18000F500 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z @ 0x18000F56C (-Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800B6EDC (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::ProcessPenContact(
        __int64 a1,
        int a2,
        struct tagPOINT a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  CContactManager *v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  __int64 v13; // r8
  _QWORD *v14; // r14
  unsigned __int64 *v15; // rbx
  CContactManager *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 *v18; // rbx
  CContactManager *v19; // rcx
  CPenBarrelKeyVisual *v21; // rcx
  int started; // eax
  _DWORD v23[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+48h] [rbp-40h]
  struct tagPOINT v26; // [rsp+4Ch] [rbp-3Ch]
  int v27; // [rsp+54h] [rbp-34h]
  struct tagPOINT v28; // [rsp+A0h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+A8h] [rbp+20h]

  v28 = a3;
  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = -1;
  v13 = 0LL;
  v14 = (_QWORD *)(a1 + 88);
  while ( (unsigned int)v13 < *(_DWORD *)(a1 + 112) )
  {
    v10 = (CContactManager *)(5 * v13);
    if ( *(_DWORD *)(*v14 + 40 * v13) == a2 )
    {
      v12 = v13;
      break;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    v27 = 0;
    v23[0] = a2;
    v23[1] = a6;
    v24 = 0LL;
    v25 = -1;
    v26 = a3;
    started = CContactManager::StartPenBarrelVisual(v10, (struct CPenContact *)v23, a7);
    v11 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x59Eu, 0LL);
    else
      DynArray<CPenContact,0>::AddMultipleAndSet((__int64 *)(a1 + 88), (__int64)v23);
  }
  else if ( a5 == 3 )
  {
    _mm_lfence();
    v15 = *(unsigned __int64 **)(*v14 + 40LL * v12 + 8);
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*v15 + 208))(*(_QWORD *)(*v14 + 40LL * v12 + 8));
      CContactManager::RemoveFromTouchNode(v16, v15[31], (struct CVisual *)v15);
      CBaseObject::Release((CBaseObject *)v15);
    }
    v17 = *(_QWORD *)(a1 + 88);
    v18 = *(unsigned __int64 **)(v17 + 40LL * v12 + 16);
    if ( v18 )
    {
      (*(void (__fastcall **)(_QWORD))(*v18 + 208))(*(_QWORD *)(v17 + 40LL * v12 + 16));
      CContactManager::RemoveFromTouchNode(v19, v18[31], (struct CVisual *)v18);
      CBaseObject::Release((CBaseObject *)v18);
    }
    DynArray<CPenContact,0>::RemoveAt(a1 + 88, v12);
  }
  else
  {
    v21 = *(CPenBarrelKeyVisual **)(*v14 + 40LL * v12 + 8);
    if ( v21 )
      CPenBarrelKeyVisual::Update(v21, &v28, a6);
    *(struct tagPOINT *)(*(_QWORD *)(a1 + 88) + 40LL * v12 + 28) = a3;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v11;
}
