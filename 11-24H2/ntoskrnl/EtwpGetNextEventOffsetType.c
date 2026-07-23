/*
 * XREFs of EtwpGetNextEventOffsetType @ 0x1404A7234
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A71B4 (EtwpInvokeEventCallback.c)
 *     EtwpCompressBuffer @ 0x14064F3BC (EtwpCompressBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1407AD07C (EtwpSendBufferToDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetNextEventOffsetType(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  int v6; // r8d
  unsigned int v7; // edx
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // eax
  bool v11; // cf
  unsigned int v12; // eax

  *a3 = 0;
  v4 = *a1;
  v5 = a2;
  if ( !(_DWORD)v4 || a2 < 0x48 || a2 >= (unsigned __int64)(v4 - 4) )
    return 0LL;
  v6 = *(unsigned int *)((char *)a1 + a2);
  if ( (v6 & 0xFF000000) == 0x90000000 )
  {
    v10 = (unsigned __int16)v6;
    v7 = 15;
    v11 = (unsigned __int16)v6 < 8u;
  }
  else
  {
    if ( (v6 & 0xFF000000) != 0xC0000000 )
      return 0LL;
    v7 = BYTE2(v6);
    if ( BYTE2(v6) > 0xDu )
    {
      if ( BYTE2(v6) == 16 || BYTE2(v6) == 17 )
      {
        if ( v5 >= v4 - 8 )
          return 0LL;
        v10 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
        v11 = v10 < 0x10;
        goto LABEL_29;
      }
      if ( BYTE2(v6) != 18 && BYTE2(v6) != 19 )
      {
        v9 = BYTE2(v6) - 20;
        v8 = BYTE2(v6) == 20;
LABEL_13:
        if ( !v8 && v9 != 1 )
          return 0LL;
        v10 = (unsigned __int16)v6;
        v11 = (unsigned __int16)v6 < 0x30u;
        goto LABEL_29;
      }
    }
    else if ( BYTE2(v6) != 13 )
    {
      if ( BYTE2(v6) == 1 || BYTE2(v6) == 2 )
      {
        if ( v5 >= v4 - 8 )
          return 0LL;
        v10 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
        v11 = v10 < 0x20;
        goto LABEL_29;
      }
      if ( BYTE2(v6) == 3 || BYTE2(v6) == 4 )
      {
        if ( v5 >= v4 - 8 )
          return 0LL;
        v10 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
        v11 = v10 < 0x18;
        goto LABEL_29;
      }
      v9 = BYTE2(v6) - 10;
      v8 = BYTE2(v6) == 10;
      goto LABEL_13;
    }
    v10 = (unsigned __int16)v6;
    v11 = (unsigned __int16)v6 < 0x50u;
  }
LABEL_29:
  if ( !v11 )
  {
    v12 = (v10 + 7) & 0xFFFFFFF8;
    if ( v12 < (unsigned int)v4 && v12 + (unsigned int)v5 <= (unsigned int)v4 )
    {
      *a3 = v12;
      return v7;
    }
  }
  return 0LL;
}
