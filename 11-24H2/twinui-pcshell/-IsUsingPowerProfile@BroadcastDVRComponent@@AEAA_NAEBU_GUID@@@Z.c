/*
 * XREFs of ?IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z @ 0x1801C8F38
 * Callers:
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C89B8 (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1802CE230 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 */

bool __fastcall BroadcastDVRComponent::IsUsingPowerProfile(BroadcastDVRComponent *this, const struct _GUID *a2)
{
  DWORD ActiveScheme; // ebx
  HLOCAL v3; // rcx
  __int64 v4; // rax
  bool v5; // bl
  GUID *ActivePolicyGuid; // [rsp+28h] [rbp-18h] BYREF
  char v8; // [rsp+30h] [rbp-10h]
  HLOCAL hMem; // [rsp+58h] [rbp+18h] BYREF

  hMem = 0LL;
  ActivePolicyGuid = 0LL;
  v8 = 1;
  ActiveScheme = PowerGetActiveScheme(0LL, &ActivePolicyGuid);
  if ( v8 )
    wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
      &hMem,
      ActivePolicyGuid);
  v3 = hMem;
  if ( ActiveScheme )
  {
    hMem = 0LL;
    if ( v3 )
      LocalFree(v3);
    return 0;
  }
  else
  {
    v4 = *(_QWORD *)hMem - *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1;
    if ( *(_QWORD *)hMem == *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1 )
      v4 = *((_QWORD *)hMem + 1) - *(_QWORD *)GUID_MIN_POWER_SAVINGS.Data4;
    v5 = v4 == 0;
    wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&hMem, 0LL);
    return v5;
  }
}
