/*
 * XREFs of ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1401E02B4
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FBF18 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140076440 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1401DFAE0 (-CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
        ADAPTER_DISPLAY **this,
        unsigned int a2,
        int a3,
        int a4,
        enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a5)
{
  __int64 v6; // r14
  OUTPUTDUPL_MGR *v9; // rcx
  ADAPTER_DISPLAY *v11; // rcx
  int v12; // ebx
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE VidPnSourceOwnerType; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rax

  v6 = a2;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    && !(unsigned int)OUTPUTDUPL_MGR::CurrentProcessHasCapturePermission(v9) )
  {
    return 3221225506LL;
  }
  if ( a3 || (v11 = *this) == 0LL )
  {
    *a5 = D3DKMT_VIDPNSOURCEOWNER_SHARED;
  }
  else
  {
    v12 = *(_DWORD *)(3984 * v6 + *((_QWORD *)v11 + 16) + 740);
    VidPnSourceOwnerType = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v11, v6);
    v17 = VidPnSourceOwnerType;
    *a5 = VidPnSourceOwnerType;
    if ( VidPnSourceOwnerType != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( a4 )
        return 3223192387LL;
      if ( (v12 & 1) == 0 )
      {
        v18 = WdLogNewEntry5_WdTrace(a5, v14, v15, v16);
        *(_QWORD *)(v18 + 24) = v6;
        *(_QWORD *)(v18 + 32) = v17;
        WdLogGlobalForLineNumber = 1667;
        return 3221225506LL;
      }
    }
  }
  return 0LL;
}
