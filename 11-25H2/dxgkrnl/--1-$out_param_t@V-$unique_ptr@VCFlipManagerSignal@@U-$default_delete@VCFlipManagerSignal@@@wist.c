/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x1400507E4
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140050808 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 */

__int64 __fastcall wil::details::out_param_t<wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>>::~out_param_t<wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
