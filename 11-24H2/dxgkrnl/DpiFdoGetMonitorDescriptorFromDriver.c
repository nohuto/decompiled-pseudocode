/*
 * XREFs of DpiFdoGetMonitorDescriptorFromDriver @ 0x140240BF4
 * Callers:
 *     DpiGetWholeMonitorDescriptor @ 0x14008D454 (DpiGetWholeMonitorDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x14042B12C (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x14008CC2C (DpiDxgkDdiQueryMonitorDescriptor.c)
 */

__int64 __fastcall DpiFdoGetMonitorDescriptorFromDriver(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 result; // rax
  int MonitorDescriptor; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

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
        WdLogGlobalForLineNumber = 20514;
        return result;
      }
      v14 = *(_OWORD *)a3;
      MonitorDescriptor = DpiDxgkDdiQueryMonitorDescriptor(a1, a2, (int *)&v14);
      v9 = MonitorDescriptor;
      if ( MonitorDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL, MonitorDescriptor);
        result = v9;
        WdLogGlobalForLineNumber = 20525;
        return result;
      }
      if ( DWORD1(v14) )
      {
        v10 = operator new[](DWORD1(v14), 0x4B677844u, 256LL);
        v11 = (void *)v10;
        if ( !v10 )
        {
          WdLogSingleEntry1(6LL, DWORD1(v14));
          result = 3221225626LL;
          WdLogGlobalForLineNumber = 20542;
          return result;
        }
        *((_QWORD *)&v14 + 1) = v10;
        v12 = DpiDxgkDdiQueryMonitorDescriptor(a1, v4, (int *)&v14);
        v13 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(2LL, v12);
          WdLogGlobalForLineNumber = 20551;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
          return v13;
        }
        a3[1] = DWORD1(v14);
        *((_QWORD *)a3 + 1) = v11;
      }
      else
      {
        WdLogSingleEntry2(4LL, (int)v14, v4);
        WdLogGlobalForLineNumber = 20533;
      }
      return 0LL;
    }
    WdLogSingleEntry2(2LL, (unsigned int)a3[1], *((_QWORD *)a3 + 1));
    WdLogGlobalForLineNumber = 20507;
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 20501;
  }
  return 3221225485LL;
}
