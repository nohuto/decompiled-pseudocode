/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140066FA0
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     EditionIsCompositeAppOrSelfDisabled @ 0x140067790 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x1400678B8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400671BC (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1, __int64 a2)
{
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 UserSessionState; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ebp
  tagObjLock **v21; // rsi
  __int64 Prop; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF
  char v26; // [rsp+40h] [rbp-38h]
  char v27; // [rsp+48h] [rbp-30h]

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    v23 = *((_QWORD *)a1 + 3);
    v24 = 0LL;
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 112);
    if ( *((_QWORD *)CompositionInputWindowUIOwner + 13) == v24 )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  }
  if ( CompositionInputWindowUIOwner )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
      if ( !v3 )
        break;
      v6 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( v3 == *(_QWORD *)(v7 + 24) )
          {
            if ( CompositionInputWindowUIOwner )
            {
              v4 = 1;
              if ( (*((_DWORD *)CompositionInputWindowUIOwner + 95) & 0x1000) == 0 )
                goto LABEL_26;
              UserSessionState = W32GetUserSessionState(v3, a2);
              v9 = *((_QWORD *)CompositionInputWindowUIOwner + 18);
              v10 = *(unsigned __int16 *)(UserSessionState + 42318);
              v26 = 0;
              W32GetUserSessionState(v12, v11);
              v25 = 0LL;
              v27 = 0;
              if ( IS_USERCRIT_OWNED_SHAREDONLY(v14, v13, v15) )
              {
                v27 = 1;
                v18 = W32GetUserSessionState(v17, v16);
                v19 = 0LL;
                if ( v9 != v18 + 42520 )
                  v19 = v9;
                *(_QWORD *)&v25 = v19;
                v20 = 0;
                v21 = (tagObjLock **)&v25;
                do
                {
                  if ( *v21 )
                    tagObjLock::LockExclusive(*v21);
                  ++v20;
                  ++v21;
                }
                while ( !v20 );
                v26 = 1;
              }
              Prop = RealGetProp(*((_QWORD *)CompositionInputWindowUIOwner + 18), v10, 1LL);
              if ( v26 && v27 )
              {
                if ( (_QWORD)v25 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v25);
                v26 = 0;
              }
              if ( !Prop
                || !*(_DWORD *)(Prop + 28)
                || (CompositionInputWindowUIOwner = CoreWindowProp::GetCompositeAppFrameWindow(CompositionInputWindowUIOwner)) != 0LL )
              {
LABEL_26:
                if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) != 0 )
                  return v4;
              }
            }
            return 0;
          }
        }
      }
      CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
    }
  }
  return 0;
}
