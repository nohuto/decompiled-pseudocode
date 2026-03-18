/*
 * XREFs of DxgkEngGetWindowGdiDpiScalingFactor @ 0x1400F3B20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetScaledLogPixels @ 0x1400F3BC0 (GreGetScaledLogPixels.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(__int64 a1, __int64 a2)
{
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(__int64, unsigned __int16 *); // rax
  unsigned __int16 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2632LL);
  if ( v3
    && v3() >= 0
    && (v6 = *(unsigned int (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                        v5,
                                                                                        v4)
                                                                                    + 24)
                                                                        + 2640LL)) != 0LL
    && v6(a1, &v8) )
  {
    return (unsigned __int16)GreGetScaledLogPixels(v8) / 0x60u;
  }
  else
  {
    return 1LL;
  }
}
