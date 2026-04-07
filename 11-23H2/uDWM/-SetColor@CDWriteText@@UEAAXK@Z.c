/*
 * XREFs of ?SetColor@CDWriteText@@UEAAXK@Z @ 0x18001FA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWriteText::SetColor(CDWriteText *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 60) )
  {
    *((_DWORD *)this + 60) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
  }
}
