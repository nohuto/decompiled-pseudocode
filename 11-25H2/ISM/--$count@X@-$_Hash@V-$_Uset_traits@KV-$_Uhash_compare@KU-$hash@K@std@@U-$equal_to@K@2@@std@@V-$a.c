/*
 * XREFs of ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18005B45C
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001D424 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x180021000 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800D737C (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800D7AF0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800F055C (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A8E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014F4F0 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180152A0C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x18019C390 (-Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 *     ?Make@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x18019C4A0 (-Make@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 *     ?Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x18019C520 (-Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9

  v2 = 0LL;
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)a2 + v4++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v4 < 4 );
  v7 = v5 & a1[6];
  v8 = a1[3];
  v9 = 2 * v7;
  v10 = *(_QWORD *)(v8 + 8 * v9 + 8);
  if ( v10 == a1[1] )
  {
LABEL_8:
    v10 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 8 * v9);
    while ( *a2 != *(_DWORD *)(v10 + 16) )
    {
      if ( v10 == v11 )
        goto LABEL_8;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  LOBYTE(v2) = v10 != 0;
  return v2;
}
