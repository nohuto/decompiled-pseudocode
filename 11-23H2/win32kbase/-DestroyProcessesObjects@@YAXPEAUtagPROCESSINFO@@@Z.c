/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C004F640
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A1FE8 (HMChangeOwnerPheProcessWorker.c)
 *     FixupGlobalCursor @ 0x1C00B6890 (FixupGlobalCursor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  _BOOL8 v2; // r14
  char *v3; // rbx
  __int64 v4; // rsi
  char *v5; // rdi
  struct _HANDLEENTRY *v6; // rbx
  _QWORD *v7; // rdi
  struct _HANDLEENTRY *v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  unsigned int CurrentProcessId; // ebx

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C0291E38 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner(qword_1C0291E30, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
    {
      if ( qword_1C0296000 )
        qword_1C0296000();
    }
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (char *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlockWorker(v5);
    v5 += 16;
    v3 += 16;
    --v4;
  }
  while ( v4 );
  v6 = qword_1C028FE68;
  v7 = gpKernelHandleTable;
  v8 = (struct _HANDLEENTRY *)((char *)qword_1C028FE68 + 32 * (unsigned int)giheLast);
  if ( qword_1C028FE68 <= v8 )
  {
    do
    {
      v9 = *((unsigned __int8 *)v6 + 24);
      if ( (_BYTE)v9 && (*((_BYTE *)&unk_1C024292C + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
      {
        if ( v2 && (_BYTE)v9 == 3 )
          FixupGlobalCursor(*v7, a1);
        if ( (*((_BYTE *)v6 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker(v6);
        v10 = *((_BYTE *)v6 + 24);
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( qword_1C0295C88 && (int)qword_1C0295C88() >= 0 )
            {
              if ( qword_1C0295C90 )
                qword_1C0295C90(*v7);
            }
          }
          else
          {
            HMChangeOwnerPheProcessWorker(v6);
          }
        }
      }
      v6 = (struct _HANDLEENTRY *)((char *)v6 + 32);
      v7 += 3;
    }
    while ( v6 <= v8 );
  }
}
