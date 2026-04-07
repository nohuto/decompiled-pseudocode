/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800523C4
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800532CC (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180052498 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // edi
  int v2; // ebx
  CTopLevelWindow::WindowFrame *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  CTopLevelWindow::WindowFrame *v8; // [rsp+48h] [rbp+10h]

  v0 = 0;
  if ( !dword_1801487A8 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = (CTopLevelWindow::WindowFrame *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                             WPF::g_pProcessHeap,
                                             1872LL);
      v8 = v3;
      v4 = v3 ? CTopLevelWindow::WindowFrame::WindowFrame(v3) : 0LL;
      v7 = v4;
      if ( !v4 )
        break;
      v5 = dword_1801487A8 + 1;
      if ( dword_1801487A8 + 1 < (unsigned int)dword_1801487A8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v5 > HIDWORD(qword_1801487A0) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8, 1, &v7);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1801487A8) = v4;
        dword_1801487A8 = v5;
      }
      if ( (unsigned int)++v2 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2D5u, 0LL);
  }
  return v0;
}
