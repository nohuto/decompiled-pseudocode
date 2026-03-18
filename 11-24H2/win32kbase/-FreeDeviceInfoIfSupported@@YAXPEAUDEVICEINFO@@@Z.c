/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1401B5F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1, __int64 a2)
{
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(struct DEVICEINFO *); // rax

  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 144LL);
  if ( v3 && v3() >= 0 )
  {
    v6 = *(void (__fastcall **)(struct DEVICEINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 152LL);
    if ( v6 )
      v6(a1);
  }
}
