/*
 * XREFs of ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140040864
 * Callers:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400407C8 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x140041134 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Free(__int64 *a1, ULONG_PTR a2)
{
  struct W32_PUSH_LOCK *v4; // r15
  __int64 *i; // rsi
  __int64 v6; // r12
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  struct W32_PUSH_LOCK *v10; // rbx
  ULONG v11; // edi
  struct W32_PUSH_LOCK *v12; // rbx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset((void *)a2, 0, 0xC0uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], (PVOID)a2);
    return;
  }
  v4 = (struct W32_PUSH_LOCK *)a1[2];
  RIMLockShared(v4);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      W32ReleasePushLockShared(v4);
      KeBugCheckEx(0x164u, 0x21uLL, a2, 0LL, 0LL);
    }
    v6 = i[4];
    v7 = *(_QWORD *)(v6 + 8) ^ *(_QWORD *)(v6 + 16);
    if ( a2 >= v7 && a2 < v7 + 49152 )
      break;
LABEL_11:
    ;
  }
  v8 = (a2 & 0xFFF) / 0xC0;
  if ( (a2 & 0xFFF) != 192 * v8 )
  {
    v9 = 2LL;
    goto LABEL_10;
  }
  if ( !RtlTestBit(
          (PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)),
          v8 + 21 * (((unsigned int)a2 - (*(_DWORD *)(v6 + 8) ^ (unsigned int)*(_QWORD *)(v6 + 16))) >> 12)) )
  {
    v9 = 1LL;
LABEL_10:
    NSInstrumentation::PlatformAbort(v9, a2, 0LL);
    goto LABEL_11;
  }
  v10 = *(struct W32_PUSH_LOCK **)v6;
  GreEnterCriticalRegionAndAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)v6);
  v11 = (a2 & 0xFFF) / 0xC0 + 21 * ((unsigned int)(a2 - (*(_DWORD *)(v6 + 8) ^ *(_DWORD *)(v6 + 16))) >> 12);
  RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 16) ^ *(_QWORD *)(v6 + 24)), v11);
  memset((void *)a2, 0, 0xC0uLL);
  *(_DWORD *)(v6 + 32) = v11;
  W32ReleasePushLockExclusive(v10);
  if ( i == (__int64 *)*a1 )
  {
    W32ReleasePushLockShared(v4);
  }
  else
  {
    W32ReleasePushLockShared(v4);
    v12 = (struct W32_PUSH_LOCK *)a1[2];
    GreEnterCriticalRegionAndAcquirePushLockExclusive(v12);
    v13 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v14 = (__int64 **)i[1], *v14 != i)
      || (*v14 = v13, v13[1] = (__int64)v14, v15 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v15;
    i[1] = (__int64)a1;
    *(_QWORD *)(v15 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusive(v12);
  }
}
