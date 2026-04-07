/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___ @ 0x18005B2F8
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18005B1C0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___(
        __int64 a1,
        __int64 **a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx
  __int64 v6; // rdx
  void (__fastcall **v7)(_QWORD, _QWORD); // rax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 672); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 648) + 8 * i);
    v6 = **a2;
    v7 = *v5;
    if ( (*(_BYTE *)(v6 + 676) & 2) != 0 )
      (*v7)(v5, *(_QWORD *)(v6 + 440));
    else
      v7[1](v5, *(_QWORD *)(v6 + 440));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
}
