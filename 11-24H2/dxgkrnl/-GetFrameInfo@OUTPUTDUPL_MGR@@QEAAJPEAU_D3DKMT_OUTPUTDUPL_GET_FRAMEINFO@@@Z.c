/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1403CB428
 * Callers:
 *     _lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_ @ 0x1403CB410 (_lambda_a555c8f1bf148962729f2402570fc0b4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140076E80 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1401E4CE4 (-CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1402B38F0 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B4368 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402B57D8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B5C6C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1403B42D0 (-GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetFrameInfo(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *a2)
{
  OUTPUTDUPL_MGR *v4; // rcx
  struct DXGFASTMUTEX *v6; // rbx
  __int64 v7; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  int v10; // esi
  OUTPUTDUPL_MGR *v11; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _BYTE v15[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v16[14]; // [rsp+40h] [rbp-49h] BYREF

  if ( !(unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    || (unsigned int)OUTPUTDUPL_MGR::CurrentProcessHasCapturePermission(v4) )
  {
    v6 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, v6, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v6, CurrentProcess, 0LL);
    if ( ContextForProcess )
    {
      OUTPUTDUPL_CONTEXT::GetFrameInfo(*ContextForProcess, &a2->FrameInfo);
      v10 = 0;
    }
    else
    {
      v10 = -1073741275;
    }
    if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
    {
      if ( v10 >= 0 )
      {
        memset(v16, 0, 0x68uLL);
        OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16);
        VidPnSourceId = a2->VidPnSourceId;
        v13 = *(_OWORD *)&a2->FrameInfo.AccumulatedFrames;
        *(_OWORD *)&v16[7] = *(_OWORD *)&a2->FrameInfo.LastPresentTime.LowPart;
        HIDWORD(v16[0]) = 104;
        v14 = *(_OWORD *)&a2->FrameInfo.PointerPosition.Position.y;
        LODWORD(v16[6]) = 7;
        HIDWORD(v16[6]) = VidPnSourceId;
        *(_OWORD *)&v16[11] = v14;
        *(_OWORD *)&v16[9] = v13;
        OUTPUTDUPL_MGR::LogEtwAndDiagnostics((DXGDIAGNOSTICS **)this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16, 1);
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
    return (unsigned int)v10;
  }
  else
  {
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((__int64)this, a2->VidPnSourceId, 0LL, 1, 0, 12);
    return 3221225506LL;
  }
}
