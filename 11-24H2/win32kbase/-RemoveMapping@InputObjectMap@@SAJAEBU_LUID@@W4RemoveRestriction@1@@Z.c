/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x14023A770
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x14015BF68 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401BCD30 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x14023A52C (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x14023A924 (-RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID *a1, int a2)
{
  struct W32_PUSH_LOCK *v4; // rbx
  struct InputObjectMapEntry *Entry; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct InputObjectMapEntry *v10; // rsi
  __int64 v11; // rdi
  __int64 UserInputMgrSessionState; // r10
  struct InputObjectMapEntry *i; // rdx
  __int64 v15; // [rsp+50h] [rbp+18h]

  v4 = (struct W32_PUSH_LOCK *)(W32GetUserInputMgrSessionState() + 8);
  W32AcquirePushLockExclusiveEx(v4, 0);
  Entry = InputObjectMap::FindEntry(a1);
  v10 = Entry;
  if ( Entry )
  {
    if ( a2 == 1 || (v11 = *((_QWORD *)Entry + 3), *(_QWORD *)(v11 + 56) == PsGetCurrentProcess(v7, v6, v8, v9)) )
    {
      UserInputMgrSessionState = W32GetUserInputMgrSessionState();
      v15 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(UserInputMgrSessionState + 20) & 0x1F));
      for ( i = (struct InputObjectMapEntry *)(*(_QWORD *)(UserInputMgrSessionState + 24)
                                             + 8LL
                                             * ((37
                                               * (BYTE6(v15)
                                                + 37
                                                * (BYTE5(v15)
                                                 + 37
                                                 * (BYTE4(v15)
                                                  + 37
                                                  * (BYTE3(v15)
                                                   + 37
                                                   * (BYTE2(v15)
                                                    + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                                               + HIBYTE(v15)) & (unsigned int)((*(_DWORD *)(UserInputMgrSessionState + 20) >> 5)
                                                                             - 1)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct InputObjectMapEntry **)i )
      {
        if ( *(struct InputObjectMapEntry **)i == v10 )
        {
          *(_QWORD *)i = *(_QWORD *)v10;
          --*(_DWORD *)(UserInputMgrSessionState + 16);
          *(_QWORD *)v10 |= 0x8000000000000002uLL;
          break;
        }
      }
      W32ReleasePushLockExclusiveEx(v4, 0LL);
      InputTraceLogging::InputSink::RemoveMapping(*((const struct CompositionInputObject **)v10 + 3), *a1);
      ObfDereferenceObject(*((PVOID *)v10 + 3));
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    else
    {
      W32ReleasePushLockExclusiveEx(v4, 0LL);
      return 3221225506LL;
    }
  }
  else
  {
    W32ReleasePushLockExclusiveEx(v4, 0LL);
    return 3221226021LL;
  }
}
