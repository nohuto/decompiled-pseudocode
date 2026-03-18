/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x140036668
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 243) )
    {
      v6 = operator new(0x10uLL, 0x4B677844u, 256LL, a4);
      *((_QWORD *)this + 243) = v6;
      if ( !v6 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1089;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate Vista BLT stub info",
          1089LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 243);
}
