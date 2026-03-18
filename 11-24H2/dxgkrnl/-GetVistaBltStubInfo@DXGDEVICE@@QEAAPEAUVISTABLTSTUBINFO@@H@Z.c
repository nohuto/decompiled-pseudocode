/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x140036658
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2)
{
  __int64 v4; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 245) )
    {
      v4 = operator new(0x10uLL, 0x4B677844u, 256LL);
      *((_QWORD *)this + 245) = v4;
      if ( !v4 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1105;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate Vista BLT stub info",
          1105LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 245);
}
