/*
 * XREFs of ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802B8A3C
 * Callers:
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180299140 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$make_unique@$$BY0A@D$0A@@std@@YA?AV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@0@_K@Z @ 0x1801D93D0 (--$make_unique@$$BY0A@D$0A@@std@@YA-AV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@0@_K.c)
 *     vsprintf_s @ 0x18025D248 (vsprintf_s.c)
 *     _vscprintf @ 0x18025D2AC (_vscprintf.c)
 */

void DwmDbg::Print(DwmDbg *this, const char *a2, ...)
{
  SIZE_T v2; // rdi
  char *Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  const char *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  Buffer[0] = 0LL;
  v2 = vscprintf((const char *const)this, (va_list)&v5) + 1;
  std::make_unique<char [0],0>(Buffer, v2);
  if ( Buffer[0] )
  {
    vsprintf_s(Buffer[0], v2, (const char *const)this, (va_list)&v5);
    puts(Buffer[0]);
  }
  DbgPrintEx(0x65u, 0, "%s", Buffer[0]);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)Buffer);
}
