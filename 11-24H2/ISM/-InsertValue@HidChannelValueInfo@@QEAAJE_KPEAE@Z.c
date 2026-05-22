/*
 * XREFs of ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x180062D7C
 * Callers:
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180062B40 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidChannelValueInfo::InsertValue(
        HidChannelValueInfo *this,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r10
  unsigned __int8 v6; // dl
  __int64 v7; // r10
  unsigned __int8 *v8; // rcx

  v4 = a2;
  if ( a2 < *((__int64 *)this + 3) || a2 > *((__int64 *)this + 4) )
    return 2147942487LL;
  if ( *((unsigned int *)this + 12) < a3 )
  {
    v6 = 1;
    v7 = v4 << *((_DWORD *)this + 11);
    v8 = &a4[*((unsigned int *)this + 14) + 1];
    *v8 = v7;
    if ( *((_DWORD *)this + 10) > 1u )
    {
      do
      {
        ++v8;
        v7 >>= 8;
        ++v6;
        *v8 |= v7;
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 10) );
    }
  }
  return 0LL;
}
