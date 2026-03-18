/*
 * XREFs of ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C2EF0
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C2EA0 (-vUpdate_VisRect@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C2E34 (-iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z.c)
 */

void __fastcall DC::vUpdate_VisRectFastOpt(
        DC *this,
        GdiHandleManager **a2,
        const struct RustAutoHotpatchLockSH *a3,
        struct REGION *a4)
{
  const struct RustAutoHotpatchLockSH *v6; // rdx
  struct _ENTRY *EntryFromObject; // rdi
  const struct RustAutoHotpatchLockSH *v8; // rdx
  __m128i v9; // xmm1
  int v10; // ecx
  int v11; // edx
  _DWORD *v12; // r8
  struct REGION *v13; // [rsp+38h] [rbp+10h] BYREF

  EntryFromObject = GdiHandleManager::GetEntryFromObject(a2[709], this);
  if ( (*((_BYTE *)EntryFromObject + 15) & 4) != 0 )
  {
    if ( !a4
      || (v13 = a4,
          *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)&v13, v6),
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v13, v8) == 1) )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_140259EE0;
    }
    else
    {
      v9 = *(__m128i *)((char *)a4 + 52);
      v10 = *((_DWORD *)this + 258);
      v11 = *((_DWORD *)this + 259);
      v12 = (_DWORD *)*((_QWORD *)this + 122);
      v12[30] = v9.m128i_i32[0] - v10;
      v12[31] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4)) - v11;
      v12[32] = _mm_srli_si128(v9, 8).m128i_u32[0] - v10;
      v12[33] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v11;
    }
    *((_BYTE *)EntryFromObject + 15) &= ~4u;
  }
}
