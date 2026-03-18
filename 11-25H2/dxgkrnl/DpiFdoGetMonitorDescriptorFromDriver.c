/*
 * XREFs of DpiFdoGetMonitorDescriptorFromDriver @ 0x14023A0E4
 * Callers:
 *     DpiGetWholeMonitorDescriptor @ 0x14008C494 (DpiGetWholeMonitorDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1403C9318 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x14008BC6C (DpiDxgkDdiQueryMonitorDescriptor.c)
 */

__int64 __fastcall DpiFdoGetMonitorDescriptorFromDriver(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 result; // rax
  int MonitorDescriptor; // eax
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  void *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v5 = *a3;
  if ( (unsigned int)(v5 - 1) <= 1 )
  {
    if ( !a3[1] && !*((_QWORD *)a3 + 1) )
    {
      if ( !*(_QWORD *)(a1 + 6432) )
      {
        WdLogSingleEntry0(2LL);
        result = 3221225474LL;
        WdLogGlobalForLineNumber = 20282;
        return result;
      }
      v15 = *(_OWORD *)a3;
      MonitorDescriptor = DpiDxgkDdiQueryMonitorDescriptor(a1, a2, (int *)&v15);
      v10 = MonitorDescriptor;
      if ( MonitorDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL, MonitorDescriptor);
        result = v10;
        WdLogGlobalForLineNumber = 20293;
        return result;
      }
      if ( DWORD1(v15) )
      {
        v11 = operator new[](DWORD1(v15), 0x4B677844u, 256LL, v9);
        v12 = (void *)v11;
        if ( !v11 )
        {
          WdLogSingleEntry1(6LL, DWORD1(v15));
          result = 3221225626LL;
          WdLogGlobalForLineNumber = 20310;
          return result;
        }
        *((_QWORD *)&v15 + 1) = v11;
        v13 = DpiDxgkDdiQueryMonitorDescriptor(a1, v4, (int *)&v15);
        v14 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(2LL, v13);
          WdLogGlobalForLineNumber = 20319;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
          return v14;
        }
        a3[1] = DWORD1(v15);
        *((_QWORD *)a3 + 1) = v12;
      }
      else
      {
        WdLogSingleEntry2(4LL, (int)v15, v4);
        WdLogGlobalForLineNumber = 20301;
      }
      return 0LL;
    }
    WdLogSingleEntry2(2LL, (unsigned int)a3[1], *((_QWORD *)a3 + 1));
    WdLogGlobalForLineNumber = 20275;
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 20269;
  }
  return 3221225485LL;
}
