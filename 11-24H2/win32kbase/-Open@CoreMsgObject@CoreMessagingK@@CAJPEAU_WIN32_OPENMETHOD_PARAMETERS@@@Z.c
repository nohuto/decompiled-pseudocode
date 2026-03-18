/*
 * XREFs of ?Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400FE144
 * Callers:
 *     ?OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1400FCE34 (-OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::CoreMsgObject::Open(struct _WIN32_OPENMETHOD_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rsi
  int ProcessSessionId; // eax

  v2 = 0;
  if ( !(unsigned __int8)PsIsSystemProcess(*((_QWORD *)a1 + 3)) )
  {
    v4 = (_DWORD *)*((_QWORD *)a1 + 4);
    ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)a1 + 3));
    if ( ProcessSessionId == -1 || ProcessSessionId != *v4 )
      return (unsigned int)-1073741790;
  }
  return v2;
}
