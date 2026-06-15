/*
 * XREFs of ?RegisterForAudioRenderEndpointChangeNotifications@CAudioResourceManager@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800A3600
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800A6330 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___ @ 0x1800A3678 (wil--init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1800A370C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioResourceManager::RegisterForAudioRenderEndpointChangeNotifications(
        union _RTL_RUN_ONCE *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(&v8, &this[-4]);
  wil::init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___(this + 4);
  v4 = (*(__int64 (__fastcall **)(__int64, struct Microsoft::WRL::WeakRef *))(*((_QWORD *)this[5].Ptr + 1) + 24LL))(
         (__int64)this[5].Ptr + 8,
         a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE23,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
