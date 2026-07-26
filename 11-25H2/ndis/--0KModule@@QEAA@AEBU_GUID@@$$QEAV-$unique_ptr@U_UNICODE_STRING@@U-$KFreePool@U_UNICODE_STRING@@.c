/*
 * XREFs of ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140156560
 * Callers:
 *     CreateKModule @ 0x140155974 (CreateKModule.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??0DriverService@@QEAA@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1401560F4 (--0DriverService@@QEAA@$$QEAV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wi.c)
 */

__int64 __fastcall KModule::KModule(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r9
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 20) = *a2;
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>((_QWORD *)(a1 + 40));
  DriverService::DriverService((_QWORD *)(v2 + 48), v3);
  *(_QWORD *)(v4 + 96) = v5;
  *(_QWORD *)(v4 + 104) = v5;
  *(_QWORD *)(v4 + 112) = v5;
  *(_BYTE *)(v4 + 136) = v5;
  *(_QWORD *)(v4 + 128) = v4 + 120;
  *(_QWORD *)(v4 + 120) = v4 + 120;
  return v4;
}
