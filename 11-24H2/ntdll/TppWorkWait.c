/*
 * XREFs of TppWorkWait @ 0x18008B630
 * Callers:
 *     TpWaitForWork @ 0x18008A170 (TpWaitForWork.c)
 *     TpWaitForWait @ 0x18008B410 (TpWaitForWait.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x180086D54 (TppETWCallbackCancel.c)
 */

int __fastcall TppWorkWait(_RTL_SRWLOCK *a1, int a2)
{
  unsigned __int32 Value; // r8d
  int v4; // ebx
  struct _PEB *v5; // rax
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  bool v8; // zf
  signed __int32 v9; // eax

  _m_prefetchw(&a1[29]);
  Value = a1[29].Value;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = Value >> 1;
      if ( !(Value >> 1) )
        break;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)&a1[29], Value & 1, Value);
      v8 = Value == v9;
      Value = v9;
      if ( v8 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4, 1);
  v5 = NtCurrentPeb();
  SharedData = v5->SharedData;
  if ( SharedData && *SharedData )
  {
    v5 = NtCurrentPeb();
    v7 = (__int64)v5->SharedData + 556;
  }
  else
  {
    v7 = 2147353478LL;
  }
  if ( *(_BYTE *)v7 && v4 )
    LODWORD(v5) = TppETWCallbackCancel(a1[18].Value, (__int64)&a1[25], a1[10].Value, a1[11].Value, a1[13].Value, v4);
  return (int)v5;
}
