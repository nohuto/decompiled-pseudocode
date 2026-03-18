/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x14030E980
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 */

void __fastcall CleanupPvtData(struct PFF *a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned int CurrentThreadId; // eax
  __int64 v5; // r8
  __int64 i; // rcx
  HSEMAPHORE v7; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  SEMOBJ<17>::SEMOBJ<17>(&v7, *(_QWORD *)(SessionState + 96) + 4872LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v5 = *((_QWORD *)a1 + 19);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8) & 4) != 0 && *(_DWORD *)(v5 + 12) == CurrentThreadId )
    {
      i = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *(_QWORD *)(v5 + 16);
LABEL_12:
      Win32FreePool((void *)i);
    }
    else
    {
      for ( i = *(_QWORD *)(v5 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_DWORD *)(i + 8) & 4) != 0 && *(_DWORD *)(i + 12) == CurrentThreadId )
        {
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(i + 16);
          goto LABEL_12;
        }
        v5 = i;
      }
    }
  }
  SEMOBJ<17>::vUnlock(&v7);
}
