/*
 * XREFs of ?get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801D28D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x18022A0E8 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f___ @ 0x180447124 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ExperienceId(UwpWindowWrapperBase *this, HSTRING *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  v3 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
         v6,
         (char *)this - 8,
         &v8);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f___(v3);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v4;
}
