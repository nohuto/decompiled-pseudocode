/*
 * XREFs of ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140050288
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x140050264 (--1-$out_param_t@V-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wist.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (**v2)(v2, 1LL);
  return result;
}
