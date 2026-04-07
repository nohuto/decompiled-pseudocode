/*
 * XREFs of ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x18007F978
 * Callers:
 *     ?DwmClientStartup@@YAJPEAUIUnknown@@@Z @ 0x18007F930 (-DwmClientStartup@@YAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800B82AC (--0CDesktopManager@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::Create(struct IUnknown *a1, struct CDesktopManager **a2)
{
  CDesktopManager *v3; // rax
  CDesktopManager *v4; // rax
  struct CDesktopManager *v5; // rbx
  int v6; // edi
  unsigned int v8; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (CDesktopManager *)DefaultHeap::AllocClear(0x520uLL);
  if ( !v3 )
  {
    v5 = 0LL;
    goto LABEL_7;
  }
  v4 = CDesktopManager::CDesktopManager(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_7:
    v6 = -2147024882;
    v8 = 1630;
    goto LABEL_8;
  }
  v6 = CDesktopManager::Initialize(v4, a1);
  if ( v6 >= 0 )
  {
    g_pdmInstance = v5;
    goto LABEL_5;
  }
  v8 = 1634;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180107730, 1LL, v6, v8, 0LL);
  if ( v5 )
    CBaseObject::Release(v5);
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
