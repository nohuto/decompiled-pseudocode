/*
 * XREFs of NtUserSetProp @ 0x1C003BD70
 * Callers:
 *     <none>
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1C003C084 (UserGetGlobalAtomTableOfWindow.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00A05D0 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C021BE18 (SetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall NtUserSetProp(HWND a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned int v11; // r13d
  struct tagWND *v12; // rax
  struct tagWND *v13; // rsi
  LIST_ENTRY *v14; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  PERESOURCE *v16; // rax
  PERESOURCE *v17; // rax
  int v18; // r14d
  tagObjLock **v19; // rbx
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v21; // rbx
  PERESOURCE *v22; // rax
  PERESOURCE *v23; // rax
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rax
  int v31; // ebx
  _BYTE v32[16]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v33; // [rsp+40h] [rbp-49h] BYREF
  char v34; // [rsp+48h] [rbp-41h]
  __int128 v35; // [rsp+50h] [rbp-39h] BYREF
  char v36; // [rsp+60h] [rbp-29h]
  char v37; // [rsp+68h] [rbp-21h]
  _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit(v8, v7, v9);
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v32, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v32) )
  {
    v10 = (unsigned __int16)a2;
    v11 = HIWORD(a2) != 0 ? 2 : 0;
    v12 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v32);
    v33 = gDomainDummyLock;
    v13 = v12;
    v34 = 0;
    v14 = (LIST_ENTRY *)*((_QWORD *)v12 + 18);
    v35 = 0LL;
    v36 = 0;
    Flink = v14[1].Flink;
    ApcState.ApcListHead[0] = *v14;
    v37 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
    if ( ExIsResourceAcquiredExclusiveLite(*v16) != 1 )
    {
      v17 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
      if ( ExIsResourceAcquiredSharedLite(*v17) )
      {
        v37 = 1;
        if ( v14 == (LIST_ENTRY *)gObjDummyLock )
          v14 = 0LL;
        *(_QWORD *)&v35 = v14;
        if ( !v36 )
        {
          v18 = 0;
          v19 = (tagObjLock **)&v35;
          do
          {
            if ( *v19 )
              tagObjLock::LockExclusive(*v19);
            ++v18;
            ++v19;
          }
          while ( !v18 );
          v36 = 1;
        }
      }
    }
    if ( !word_1C035E338 )
    {
      GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(v13);
      if ( GlobalAtomTableOfWindow )
        word_1C035E338 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
    }
    v21 = *((_QWORD *)v13 + 18);
    if ( !gbInDestroyHandleTableObjects )
    {
      v22 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
      if ( ExIsResourceAcquiredExclusiveLite(*v22) != 1 )
      {
        v23 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
        if ( !ExIsResourceAcquiredSharedLite(*v23) || KeGetCurrentThread() != *(struct _KTHREAD **)(v21 + 8) )
          __int2c();
      }
    }
    if ( (_WORD)v10 == word_1C035E338 )
    {
      *(_QWORD *)(*((_QWORD *)v13 + 5) + 312LL) = a3;
    }
    else if ( (*((_DWORD *)v13 + 81) & 1) != 0 )
    {
      v30 = *((_QWORD *)v13 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v30 + 424), &ApcState);
      v31 = SetSharedPropForFilteredProcesses(v13, v10, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v31 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v33);
        v6 = 1;
        goto LABEL_30;
      }
    }
    v24 = RealInternalSetProp(*((_QWORD *)v13 + 18), v10, a3, v11);
    if ( v37 && v36 && (_QWORD)v35 )
      tagObjLock::UnLockExclusive((tagObjLock *)v35);
    v6 = v24;
  }
LABEL_30:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v32);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v6;
}
