/*
 * XREFs of ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x14003FC20
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14003FB28 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@A.c)
 * Callees:
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14000E34C (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x140066AE0 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x1400919E4 (memmove_0.c)
 */

__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct IMMDevice *a4)
{
  char *v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // rsi
  __int64 v11; // rbx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (char *)this + 56;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  if ( v9 > *((_QWORD *)v8 + 3) )
  {
    try
    {
      std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>();
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1F,
                             (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenoti"
                                           "ficationshandler.cpp",
                             v12);
    }
  }
  else
  {
    v10 = v8;
    if ( *((_QWORD *)v8 + 3) > 7uLL )
      v10 = *(char **)v8;
    *((_QWORD *)v8 + 2) = v9;
    v11 = 2 * v9;
    memmove_0(v10, a2, 2 * v9);
    *(_WORD *)&v10[v11] = 0;
  }
  *(struct _GUID *)((char *)this + 40) = *a3;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=((__int64 *)this + 11, (__int64)a4);
  return 0LL;
}
