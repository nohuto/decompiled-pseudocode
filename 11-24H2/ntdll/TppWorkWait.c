/*
 * XREFs of TppWorkWait @ 0x18006ED50
 * Callers:
 *     TpWaitForWork @ 0x18006D890 (TpWaitForWork.c)
 *     TpWaitForWait @ 0x18006EB30 (TpWaitForWait.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18006A664 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TppWorkWait(__int64 a1, int a2)
{
  unsigned __int32 v3; // r8d
  int v4; // ebx
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  bool v8; // zf
  signed __int32 v9; // eax

  _m_prefetchw((const void *)(a1 + 232));
  v3 = *(_DWORD *)(a1 + 232);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), v3 & 1, v3);
      v8 = v3 == v9;
      v3 = v9;
      if ( v8 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v4, 1);
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
      return (struct _PEB *)TppETWCallbackCancel(
                              *(_QWORD *)(a1 + 144),
                              a1 + 200,
                              *(_QWORD *)(a1 + 80),
                              *(_QWORD *)(a1 + 88),
                              *(_QWORD *)(a1 + 104),
                              v4);
  }
  return result;
}
