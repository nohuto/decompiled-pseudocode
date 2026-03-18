/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402FCC48
 * Callers:
 *     _lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_ @ 0x1402FCC30 (_lambda_693db078d59c16956e85dd4c51bec7d2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402FCD78 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReleaseFrame(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  OUTPUTDUPL_CONTEXT *v6; // rcx
  __int64 CurrentProcess; // r14
  OUTPUTDUPL_CONTEXT **v8; // rbx
  unsigned int i; // edi
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( *(struct _KTHREAD **)(v4 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1729;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pContextList->Mutex.IsOwner()", 1729LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 48);
  for ( i = 0; i < *((_DWORD *)this + 2); ++i )
  {
    if ( *v8 )
    {
      v10 = PsGetCurrentProcess(v6);
      v6 = *v8;
      v11 = *((_QWORD *)*v8 + 3) == v10;
    }
    else
    {
      v11 = CurrentProcess == 0;
    }
    if ( v11 )
    {
      if ( v8 )
      {
        v12 = OUTPUTDUPL_CONTEXT::ReleaseFrame(*v8, a2);
        goto LABEL_10;
      }
      break;
    }
    ++v8;
  }
  v12 = -1073741275;
LABEL_10:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v12;
}
