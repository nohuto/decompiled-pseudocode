/*
 * XREFs of ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x1400886D8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CDwmNotifyBatch@@IEAA@XZ @ 0x1400887B8 (--0CDwmNotifyBatch@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z @ 0x1402D1A7C (-DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z.c)
 *     ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402D1B38 (-IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z.c)
 */

CDwmSwpNotifyBatch *__fastcall CDwmSwpNotifyBatch::CDwmSwpNotifyBatch(CDwmSwpNotifyBatch *this, struct tagSMWP *a2)
{
  __int64 v4; // rdx
  CDwmNotifyBatch *v5; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  CDwmNotifyBatch **v9; // rsi
  struct tagWND *v10; // rax
  struct tagTHREADINFO *v11; // rax
  HWND *i; // rsi

  CDwmNotifyBatch::CDwmNotifyBatch(this);
  *((_QWORD *)this + 4) = 0LL;
  if ( *(_BYTE *)this )
  {
    *((_QWORD *)this + 4) = a2;
    v7 = 0;
    v8 = *((_DWORD *)a2 + 7);
    v9 = (CDwmNotifyBatch **)*((_QWORD *)a2 + 5);
    if ( v8 )
    {
      do
      {
        v5 = *v9;
        if ( *v9 )
        {
          LOBYTE(v4) = 1;
          v10 = (struct tagWND *)HMValidateHandleNoSecure(v5, v4);
          if ( v10 )
          {
            if ( !CDwmNotifyBatch::IncrementCounter(v5, v10) )
              break;
          }
        }
        ++v7;
        v9 += 21;
      }
      while ( v7 < v8 );
    }
    if ( v7 == v8 )
    {
      v11 = PtiCurrent((__int64)v5, v4);
      *((_QWORD *)this + 1) = *((_QWORD *)v11 + 48);
      *((_QWORD *)v11 + 48) = (char *)this + 8;
      *((_QWORD *)this + 3) = lambda_d3317ad6738a121a75864f2401651563_::_lambda_invoker_cdecl_;
      *((_QWORD *)this + 2) = this;
    }
    else
    {
      for ( i = *(HWND **)(*((_QWORD *)this + 4) + 40LL); v7; --v7 )
      {
        if ( *i )
          CDwmNotifyBatch::DecrementCounter(v5, *i);
      }
    }
  }
  return this;
}
