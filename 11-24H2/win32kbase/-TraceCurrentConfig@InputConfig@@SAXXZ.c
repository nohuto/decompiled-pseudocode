/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012C280
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z @ 0x14012C3C0 (-InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14012C644 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z @ 0x14012CA34 (-InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall InputConfig::TraceCurrentConfig(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD **v2; // r14
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  _QWORD **v5; // rcx
  _QWORD *i; // rdi
  _QWORD **v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *j; // rbx
  const struct INPUT_SPACE_REGION *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  tagDomLock *v15; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v16; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 18688) )
  {
    v2 = *(_QWORD ***)(W32GetUserSessionState(v1) + 18688);
    UserSessionState = W32GetUserSessionState(v3);
    CEResourceLockShared::CEResourceLockShared(
      (CEResourceLockShared *)&v16,
      (struct CEResourceLock *)(UserSessionState + 18696));
    v5 = (_QWORD **)*v2;
    for ( i = (_QWORD *)**v2; ; i = (_QWORD *)*i )
    {
      v7 = 0LL;
      if ( v5 != v2 )
        v7 = v5 + 2;
      if ( !v7 )
        break;
      InputTraceLogging::InputConfig::InputSpace(
        (const struct INPUT_SPACE *)v7,
        *((_DWORD *)v7 + 363),
        *((_BYTE *)v7 + 1448));
      v8 = v7 + 182;
      v10 = W32GetUserSessionState(v9);
      CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v15, (struct CEResourceLock *)(v10 + 18696));
      for ( j = v7[182]; ; j = (_QWORD *)*j )
      {
        v12 = 0LL;
        if ( j != v8 )
          v12 = (const struct INPUT_SPACE_REGION *)(j + 2);
        if ( !v12 )
          break;
        InputTraceLogging::InputConfig::InputSpaceRegion(v12);
        v13 = 488LL;
        if ( j != v8 )
          v13 = (__int64)(j + 63);
        if ( *(_BYTE *)v13 )
        {
          v14 = 496LL;
          if ( j != v8 )
            v14 = (__int64)(j + 64);
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v14);
        }
      }
      tagDomLock::UnLockExclusive((PERESOURCE *)v15);
      v5 = (_QWORD **)i;
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v16);
  }
}
