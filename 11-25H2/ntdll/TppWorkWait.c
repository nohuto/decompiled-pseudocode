/*
 * XREFs of TppWorkWait @ 0x180041190
 * Callers:
 *     TpWaitForWork @ 0x18003A590 (TpWaitForWork.c)
 *     TpWaitForWait @ 0x18003D030 (TpWaitForWait.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1801144BC (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  bool v8; // zf
  signed __int32 v9; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v8 = v3 == v9;
      v3 = v9;
      if ( v8 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4, 1LL);
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v7 = (__int64)result->SharedData + 556;
  }
  else
  {
    v7 = 2147353478LL;
  }
  if ( *(_BYTE *)v7 )
  {
    if ( v4 )
      return (struct _PEB *)TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
