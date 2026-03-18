/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C023220C
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C00B7224 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     NtUserRemoveVisualIdentifier @ 0x1C014A280 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00660CC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C0232000 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x1C02323C8 (-RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID *a1, int a2)
{
  struct InputObjectMapEntry *Entry; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct InputObjectMapEntry *v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  struct InputObjectMapEntry *i; // rdx
  __int64 v13; // [rsp+50h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v14, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  Entry = InputObjectMap::FindEntry(a1);
  v8 = Entry;
  if ( !Entry )
  {
    v10 = -1073741275;
    goto LABEL_12;
  }
  if ( a2 != 1 )
  {
    v9 = *((_QWORD *)Entry + 3);
    if ( *(_QWORD *)(v9 + 56) != PsGetCurrentProcess(v6, v5, v7) )
    {
      v10 = -1073741790;
LABEL_12:
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
      return v10;
    }
  }
  v13 = *((_QWORD *)v8 + 1) & (-1LL << (*(&InputObjectMap::s_hashTable + 4) & 0x1F));
  for ( i = (struct InputObjectMapEntry *)((char *)Buffer
                                         + 8
                                         * ((37
                                           * (BYTE6(v13)
                                            + 37
                                            * (BYTE5(v13)
                                             + 37
                                             * (BYTE4(v13)
                                              + 37
                                              * (BYTE3(v13)
                                               + 37
                                               * (BYTE2(v13) + 37
                                                             * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                           + HIBYTE(v13)) & (unsigned int)((*(&InputObjectMap::s_hashTable + 1) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct InputObjectMapEntry **)i )
  {
    if ( *(struct InputObjectMapEntry **)i == v8 )
    {
      *(_QWORD *)i = *(_QWORD *)v8;
      --InputObjectMap::s_hashTable;
      *(_QWORD *)v8 |= 0x8000000000000002uLL;
      break;
    }
  }
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  InputTraceLogging::InputSink::RemoveMapping(*((const struct CompositionInputObject **)v8 + 3), *a1);
  ObfDereferenceObject(*((PVOID *)v8 + 3));
  ExFreePoolWithTag(v8, 0);
  return 0LL;
}
