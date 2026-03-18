/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x140033BE0
 * Callers:
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = (char *)this + 24;
  if ( *((_QWORD *)this + 2) )
  {
    (*(void (**)(void))(*(_QWORD *)v2 + 24LL))();
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      if ( *((_DWORD *)this + 13) )
        (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)this + 4) + 296LL))(v3, *((_DWORD *)this + 12) == 0);
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 4) + 280LL))(*((unsigned int *)this + 14));
      *((_QWORD *)this + 5) = 0LL;
      *((_QWORD *)this + 6) = 0LL;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 304LL))(*(_QWORD *)this, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)this, *((_QWORD *)this + 1));
    *(_QWORD *)this = 0LL;
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    if ( *((_DWORD *)this + 13) )
      (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)this + 4) + 296LL))(v4, *((_DWORD *)this + 12) == 0);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 4) + 280LL))(*((unsigned int *)this + 14));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
