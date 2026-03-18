/*
 * XREFs of ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C75AC
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x1400C8558 (-GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::GetPointerDeviceConfig(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  char v4; // di
  __int64 UserSessionState; // rax
  _QWORD **v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD **v12; // rcx
  _QWORD *i; // r12
  _QWORD **v14; // rax
  _QWORD **v15; // rbx
  _QWORD **v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // rax
  _QWORD *j; // rdx
  _QWORD *v20; // rax
  _DWORD *v21; // rcx
  tagDomLock *v23; // [rsp+20h] [rbp-68h] BYREF
  tagDomLock *v24; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0;
  if ( *((_DWORD *)a2 + 6) == 7 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    CInputConfig::GetMouseInputSpace(*(CInputConfig **)(UserSessionState + 18688), a3);
    v4 = 1;
    *(_QWORD *)a4 = *(_QWORD *)a3 + 24LL;
  }
  else
  {
    v9 = *(_QWORD ***)(W32GetUserSessionState(a1) + 18688);
    v11 = W32GetUserSessionState(v10);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v24, (struct CEResourceLock *)(v11 + 18696));
    v12 = (_QWORD **)*v9;
    for ( i = (_QWORD *)**v9; ; i = (_QWORD *)*i )
    {
      v14 = 0LL;
      if ( v12 != v9 )
        v14 = v12 + 2;
      if ( !v14 )
        break;
      v15 = 0LL;
      if ( v12 != v9 )
        v15 = v12 + 2;
      if ( *((_DWORD *)v15 + 363) )
      {
        if ( *((_DWORD *)a1 + 334) )
        {
          if ( *((_DWORD *)a1 + 338) == 4 )
          {
            if ( ((_DWORD)v15[1] & 1) != 0 )
            {
              v16 = v15 + 92;
LABEL_31:
              *(_QWORD *)a3 = v15;
              v4 = 1;
              *(_QWORD *)a4 = v16;
              break;
            }
          }
          else
          {
            v17 = v15 + 182;
            v18 = W32GetUserSessionState(v12);
            CEResourceLockShared::CEResourceLockShared(
              (CEResourceLockShared *)&v23,
              (struct CEResourceLock *)(v18 + 18696));
            for ( j = v15[182]; ; j = (_QWORD *)*j )
            {
              v20 = 0LL;
              if ( j != v17 )
                v20 = j + 2;
              if ( !v20 )
                break;
              v21 = 0LL;
              if ( j != v17 )
                v21 = j + 2;
              if ( (v21[4] & 2) != 0
                && v21[9] == *((_DWORD *)a1 + 467)
                && v21[10] == *((_DWORD *)a1 + 468)
                && v21[11] == *((_DWORD *)a1 + 470) )
              {
                *(_QWORD *)a3 = v15;
                v4 = 1;
                *(_QWORD *)a4 = v21;
                break;
              }
            }
            tagDomLock::UnLockExclusive((PERESOURCE *)v23);
            if ( v4 )
              break;
          }
        }
        else if ( ((_DWORD)v15[1] & 1) != 0 )
        {
          v16 = v15 + 3;
          goto LABEL_31;
        }
      }
      v12 = (_QWORD **)i;
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v24);
  }
  return v4;
}
