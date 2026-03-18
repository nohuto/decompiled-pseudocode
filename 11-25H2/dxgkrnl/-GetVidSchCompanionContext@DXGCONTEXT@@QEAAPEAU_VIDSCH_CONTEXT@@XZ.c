/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14032C6B0
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x14032B360 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x14032C754 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x140051854 (-VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *result; // rax
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+24h] [rbp-34h]
  __int64 v6; // [rsp+34h] [rbp-24h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  result = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 33);
  if ( !result )
  {
    v4 = 0;
    v6 = 0LL;
    v7 = 0;
    v3 = *((_QWORD *)this + 2);
    v5 = 0LL;
    LODWORD(v3) = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 416LL);
    DWORD2(v5) = 0;
    v4 = 64;
    LODWORD(v6) = v3;
    DWORD1(v5) = *((_DWORD *)this + 97);
    result = VIDSCH_EXPORT::VidSchCreateContext(
               *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
               this,
               (struct _VIDSCH_CONTEXT_DATA *)&v4);
    *((_QWORD *)this + 33) = result;
  }
  return result;
}
