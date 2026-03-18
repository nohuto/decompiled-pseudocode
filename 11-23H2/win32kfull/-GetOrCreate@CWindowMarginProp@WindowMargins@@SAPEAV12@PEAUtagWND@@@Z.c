/*
 * XREFs of ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EBFF8
 * Callers:
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00170B8 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C005F7F8 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$CreateWindowProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAJPEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C00EDAA0 (--$CreateWindowProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAJPEAPEAVCWindowMarginProp@.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

struct WindowMargins::CWindowMarginProp *__fastcall WindowMargins::CWindowMarginProp::GetOrCreate(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int128 *v4; // rbx
  __int64 v5; // r15
  __int64 v7; // xmm1_8
  PERESOURCE *v8; // rax
  char v9; // di
  int v10; // esi
  tagObjLock **v11; // rbx
  CWindowProp *Prop; // rbx
  __int64 v13; // r9
  CWindowProp *v15; // [rsp+50h] [rbp-29h] BYREF
  __int128 v16; // [rsp+58h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-11h]
  __int64 v18; // [rsp+70h] [rbp-9h]
  char v19; // [rsp+78h] [rbp-1h]
  __int128 v20; // [rsp+80h] [rbp+7h] BYREF
  char v21; // [rsp+90h] [rbp+17h]
  char v22; // [rsp+98h] [rbp+1Fh]

  v4 = (__int128 *)*((_QWORD *)a1 + 18);
  v5 = WindowMargins::CWindowMarginProp::s_atom;
  v18 = gDomainDummyLock;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v7 = *((_QWORD *)v4 + 2);
  v16 = *v4;
  v22 = 0;
  v17 = v7;
  v8 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v9 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*v8) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v22 = 1;
    if ( v4 == (__int128 *)gObjDummyLock )
      v4 = 0LL;
    *(_QWORD *)&v20 = v4;
    v10 = 0;
    v11 = (tagObjLock **)&v20;
    do
    {
      if ( *v11 )
        tagObjLock::LockExclusive(*v11);
      ++v10;
      ++v11;
    }
    while ( !v10 );
    v21 = 1;
  }
  Prop = (CWindowProp *)RealGetProp(*((_QWORD *)a1 + 18), v5, 1LL);
  if ( v22 && v21 && (_QWORD)v20 )
    tagObjLock::UnLockExclusive((tagObjLock *)v20);
  v15 = Prop;
  if ( !Prop )
  {
    if ( (int)CWindowProp::CreateWindowProp<WindowMargins::CWindowMarginProp>(&v15) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v13,
          2u,
          0x15u,
          0xAu,
          (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
          *(_QWORD *)a1);
      return v15;
    }
    else
    {
      Prop = v15;
      if ( !(unsigned int)CWindowProp::SetProp(v15, a1) )
      {
        (**(void (__fastcall ***)(CWindowProp *))Prop)(Prop);
        return 0LL;
      }
    }
  }
  return Prop;
}
