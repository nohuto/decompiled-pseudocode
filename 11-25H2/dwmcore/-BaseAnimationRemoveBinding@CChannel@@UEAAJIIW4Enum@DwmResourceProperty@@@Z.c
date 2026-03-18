/*
 * XREFs of ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x18026D670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x180230808 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::BaseAnimationRemoveBinding(
        struct CChannel *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v12, a1);
  CChannel::CheckHandle((__int64)a1, a2, 10);
  CChannel::CheckHandle((__int64)a1, a3, 0);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, &si128.m128i_i32[3]);
  if ( v8 < 0 )
  {
    v9 = 1603LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    return (unsigned int)v8;
  }
  v8 = CChannel::SendCommand((struct CCommandBatch **)a1, &si128, 0x10u);
  if ( v8 < 0 )
  {
    v9 = 1604LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
  return 0LL;
}
