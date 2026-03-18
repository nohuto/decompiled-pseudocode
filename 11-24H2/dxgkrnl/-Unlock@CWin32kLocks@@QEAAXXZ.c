/*
 * XREFs of ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x140033200
 * Callers:
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140037A18 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CWin32kLocks::Unlock(CWin32kLocks *this)
{
  char *v2; // rdi
  __int64 v3; // rcx

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
      *((_DWORD *)this + 12) = 0;
      *((_DWORD *)this + 13) = 0;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 304LL))(*(_QWORD *)this, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)this, *((_QWORD *)this + 1));
    *(_QWORD *)this = 0LL;
  }
}
