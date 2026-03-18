/*
 * XREFs of ?DeviceAcceleratorInitialize@@YAJXZ @ 0x140218904
 * Callers:
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DeviceAcceleratorInitialize(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 i; // rbx
  unsigned int v5; // esi
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rax

  v1 = 0;
  for ( i = W32GetUserSessionState(a1) + 16368; ; i += 24LL )
  {
    v5 = 10;
    v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 48) + 6848LL);
    if ( v6 && v6() >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48) + 6856LL);
      if ( v9 )
        v5 = v9(v1);
      else
        v5 = 0;
    }
    if ( *(_DWORD *)(i + 8) != v1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 32);
    if ( *(_QWORD *)i )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 33);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(i - 8))(v5);
    *(_QWORD *)i = v10;
    if ( !v10 )
      break;
    if ( ++v1 >= 2 )
      return 0LL;
  }
  return 3221225473LL;
}
