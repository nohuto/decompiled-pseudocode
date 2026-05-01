/*
 * XREFs of ?IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z @ 0x18022CA6C
 * Callers:
 *     ?IsAILPositionerEnabled@@YA_NXZ @ 0x1801BFB40 (-IsAILPositionerEnabled@@YA_NXZ.c)
 *     ?IsDashboardManagerEnabled@@YA_NXZ @ 0x1803EC2E0 (-IsDashboardManagerEnabled@@YA_NXZ.c)
 *     ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x1803EC340 (-IsMeetAndChatManagerEnabled@@YA_NXZ.c)
 *     ?IsNPSMDesktopShellComponentEnabled@@YA_NXZ @ 0x1803EC380 (-IsNPSMDesktopShellComponentEnabled@@YA_NXZ.c)
 *     ?IsPenMenuSystemTrayManagerEnabled@@YA_NXZ @ 0x1803EC3A0 (-IsPenMenuSystemTrayManagerEnabled@@YA_NXZ.c)
 *     ?IsTaskGroupsComponentEnabled@@YA_NXZ @ 0x1803EC3C0 (-IsTaskGroupsComponentEnabled@@YA_NXZ.c)
 *     ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x1803EC3E0 (-IsWindowTabHostComponentEnabled@@YA_NXZ.c)
 *     ?IsWirelessAppDiscoverabilityEnabled@@YA_NXZ @ 0x1803EC420 (-IsWirelessAppDiscoverabilityEnabled@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ShellComponentFilter::IsComponentEnabledInProfile(ShellComponentFilter *this, const struct _GUID *a2)
{
  bool v2; // zf
  char result; // al
  void (__fastcall *v4)(const struct _GUID *, char *); // r8
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this == 0LL;
  result = 1;
  v5 = 1;
  if ( !v2 )
  {
    v4 = (void (__fastcall *)(const struct _GUID *, char *))*((_QWORD *)this + 1);
    if ( v4 )
    {
      v4(a2, &v5);
      return v5;
    }
  }
  return result;
}
