/*
 * XREFs of ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14001A11C
 * Callers:
 *     ?StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140018490 (-StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x140038E3C (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAPOProcessingHostObject::ShutdownWorkQueue(CAPOProcessingHostObject *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = 0LL;
  v2[1] = 0LL;
  v4 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  v5 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  *v3 = v4;
  v6 = (std::_Ref_count_base *)v3[1];
  v3[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( !TrySubmitThreadpoolCallback(lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_, v3, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2B,
             (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
             v7);
  else
    return 0LL;
}
