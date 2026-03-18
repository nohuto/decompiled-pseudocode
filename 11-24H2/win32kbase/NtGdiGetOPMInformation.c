/*
 * XREFs of NtGdiGetOPMInformation @ 0x14008BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x14008BD3C (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x14008C2D8 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x14008C31C (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 */

__int64 __fastcall NtGdiGetOPMInformation(void *a1, __int64 a2, void *a3)
{
  __int64 v6; // rbp
  PLOOKASIDE_LIST_EX *v7; // r15
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v8; // rax
  __int64 v9; // r14
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v10; // rsi
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v11; // rax
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v12; // rdi
  int Information; // ebx

  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = *(PLOOKASIDE_LIST_EX **)(v6 + 3648);
  v8 = (struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *)ExAllocateFromLookasideListEx(*v7);
  v9 = *(_QWORD *)(v6 + 3648);
  v10 = v8;
  v11 = (struct _DXGKMDT_OPM_REQUESTED_INFORMATION *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v9 + 8));
  v12 = v11;
  if ( v10 && v11 )
  {
    Information = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(v10, a2);
    if ( Information >= 0 )
    {
      Information = COPM::GetInformation(*(COPM **)(v6 + 3648), a1, v10, v12);
      if ( Information >= 0 )
      {
        Information = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, v12);
        if ( Information >= 0 )
        {
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v9 + 8), v12);
          ExFreeToLookasideListEx(*v7, v10);
          return 0LL;
        }
      }
    }
    goto LABEL_8;
  }
  Information = -1073741670;
  if ( v11 )
LABEL_8:
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v9 + 8), v12);
  if ( v10 )
    ExFreeToLookasideListEx(*v7, v10);
  return (unsigned int)Information;
}
