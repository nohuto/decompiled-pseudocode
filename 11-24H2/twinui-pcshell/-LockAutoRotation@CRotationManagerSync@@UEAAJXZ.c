/*
 * XREFs of ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802F3790
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180089F48 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18008A72C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@W4STORE_OPTION@12@@Z @ 0x1802F39C0 (-StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@.c)
 *     ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1802F3C44 (-_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PRE.c)
 *     WPP_SF_dL @ 0x1802F3CE8 (WPP_SF_dL.c)
 */

__int64 __fastcall CRotationManagerSync::LockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  ORIENTATION_PREFERENCE v4; // edi
  unsigned int OrientationPreferenceFromCurrentOrientation; // eax
  _DWORD *v6; // r14
  int v7; // eax
  __int64 Ptr_high; // rdx
  ORIENTATION_PREFERENCE v10; // [rsp+58h] [rbp+10h] BYREF

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    v2 = 0;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = ORIENTATION_PREFERENCE_NONE;
    v10 = ORIENTATION_PREFERENCE_NONE;
    if ( !*((_DWORD *)this + 10) )
    {
      OrientationPreferenceFromCurrentOrientation = CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
                                                      (CRotationManagerSync *)((char *)this - 80),
                                                      &v10);
      v4 = v10;
      v2 = OrientationPreferenceFromCurrentOrientation;
    }
    if ( ++*((_DWORD *)this + 10) == 1 )
    {
      v6 = (_DWORD *)((char *)this + 16);
      v7 = *((_DWORD *)this + 6);
      *(_QWORD *)((char *)this + 28) = *((_QWORD *)this + 2);
      *((_DWORD *)this + 9) = v7;
      *((_BYTE *)this + 37) = 1;
      if ( v4 != *((_DWORD *)this + 5) || !*((_BYTE *)this + 24) )
        CRotationManagerSync::ROTATION_INFORMATION::StoreShellPreference((char *)this + 16, (unsigned int)v4);
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      if ( (_DWORD)Ptr_high != *v6 )
      {
        CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), Ptr_high, v3);
        *v6 = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      }
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_dL(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), Ptr_high, v3, *((unsigned int *)this + 7), v4);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
