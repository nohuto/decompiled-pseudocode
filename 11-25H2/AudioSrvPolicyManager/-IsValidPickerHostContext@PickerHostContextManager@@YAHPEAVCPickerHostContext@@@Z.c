/*
 * XREFs of ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x18000C2E0
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000AB30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x18003CE90 (WPP_SF_q.c)
 */

__int64 __fastcall PickerHostContextManager::IsValidPickerHostContext(
        PickerHostContextManager *this,
        struct CPickerHostContext *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rax
  unsigned int v6; // edi

  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  for ( i = PickerHostContextManager::s_PickerHostContextList; i; i = *(_QWORD *)i )
  {
    if ( *(PickerHostContextManager **)(i + 16) == this )
    {
      v6 = 1;
      goto LABEL_10;
    }
  }
  v6 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, this);
  }
LABEL_10:
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  return v6;
}
