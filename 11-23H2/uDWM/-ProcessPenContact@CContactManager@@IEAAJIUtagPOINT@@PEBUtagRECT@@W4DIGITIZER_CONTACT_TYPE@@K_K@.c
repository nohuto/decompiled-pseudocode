/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18006C304
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18006BEBC (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800B011C (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002D838 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D1A0 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D254 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z @ 0x1800AF054 (-AddMultipleAndSet@-$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800AFE84 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800B1FB4 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800B2250 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::ProcessPenContact(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int64 a7)
{
  CContactManager *v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rsi
  _DWORD *v13; // rax
  int started; // eax
  _QWORD *v15; // r14
  __int64 v16; // rdi
  struct CTouchVisual *v17; // rbx
  CContactManager *v18; // rcx
  struct CTouchVisual *v19; // rbx
  __int64 v20; // rdi
  _DWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+48h] [rbp-30h]
  __int64 v25; // [rsp+4Ch] [rbp-2Ch]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+98h] [rbp+20h] BYREF

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_5;
  v13 = *(_DWORD **)(a1 + 88);
  while ( *v13 != a2 )
  {
    v12 = (unsigned int)(v12 + 1);
    v13 += 10;
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_5;
  }
  if ( (int)v12 >= 0 )
  {
    v15 = (_QWORD *)(a1 + 88);
    v16 = *(_QWORD *)(a1 + 88);
    if ( a5 == 3 )
    {
      v17 = *(struct CTouchVisual **)(v16 + 40 * v12 + 8);
      CContactManager::StopAndRemoveFromRootNode(v10, v17);
      if ( v17 )
        CBaseObject::Release(v17);
      v19 = *(struct CTouchVisual **)(*v15 + 40 * v12 + 16);
      CContactManager::StopAndRemoveFromRootNode(v18, v19);
      if ( v19 )
        CBaseObject::Release(v19);
      DynArray<CPenContact,0>::RemoveAt(v15, (unsigned int)v12);
    }
    else
    {
      v20 = *(_QWORD *)(v16 + 40 * v12 + 8);
      if ( v20 )
      {
        *(_QWORD *)(v20 + 308) = a3;
        *(_DWORD *)(v20 + 316) = a6;
        CPenBarrelKeyVisual::PlaceVisuals((CPenBarrelKeyVisual *)v20);
        CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v20);
      }
      *(_QWORD *)(*v15 + 40 * v12 + 28) = a3;
    }
  }
  else
  {
LABEL_5:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    v22[0] = a2;
    v22[1] = a6;
    v23 = 0LL;
    v24 = -1;
    v25 = a3;
    started = CContactManager::StartPenBarrelVisual(v10, (struct CPenContact *)v22, a7);
    v11 = started;
    if ( started >= 0 )
      DynArray<CPenContact,0>::AddMultipleAndSet(a1 + 88, v22);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x59Fu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v11;
}
