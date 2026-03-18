/*
 * XREFs of ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x140076C78
 * Callers:
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E0B10 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1401EFFFC (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F0228 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401F0348 (-QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROTECTEDSESSION::AddReference(DXGPROTECTEDSESSION *this, char a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)this + 20);
  if ( v2 == 1 && !a2 )
  {
    WdLogSingleEntry5(0LL, 275LL, 47LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 145;
  }
  return v2;
}
