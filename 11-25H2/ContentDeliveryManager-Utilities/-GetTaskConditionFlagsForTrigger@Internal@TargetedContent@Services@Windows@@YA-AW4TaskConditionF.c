/*
 * XREFs of ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080A18
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180081270 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180081480 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(__int64 *a1)
{
  __int64 v1; // rax
  int v3; // eax
  const wchar_t *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  v11 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64 *, int *))(v1 + 272))(a1, &v11);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v3,
      v9);
  v4 = (const wchar_t *)&unk_1800F0B40;
  v5 = 0;
  do
  {
    if ( (v11 & *((_DWORD *)v4 + 1)) != 0 )
      v5 |= *(_DWORD *)v4;
    v4 += 4;
  }
  while ( v4 != L"Trigger" );
  v6 = *a1;
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, int *))(v6 + 256))(a1, &v12);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7,
      v9);
  result = v5 | 0x10;
  if ( (v12 & 2) == 0 )
    return v5;
  return result;
}
