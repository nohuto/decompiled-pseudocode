/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1400768C8
 * Callers:
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140081AFC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_LL @ 0x140037374 (WPP_RECORDER_SF_LL.c)
 *     XilRegister_ReadUshort @ 0x140049C88 (XilRegister_ReadUshort.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int Ulong; // eax
  unsigned int v6; // ecx
  char v7; // bl
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *(_QWORD *)(a1 + 88);
  v10 = 0;
  result = XilRegister_ReadUshort(v2, (unsigned __int16 *)(*(_QWORD *)(v2 + 24) + 33824LL));
  if ( (result & 3) != 0 )
  {
    Ulong = XilRegister_ReadUlong(v2, (unsigned int *)(*(_QWORD *)(v2 + 24) + 1360LL));
    v6 = (Ulong >> 5) & 0xF;
    if ( (Ulong & 0x201) == 0x201 && v6 < 4 )
      v7 = 4;
    else
      v7 = v6 != 8 ? 0 : 4;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, int))(a1 + 696))(
               *(_QWORD *)(a1 + 680),
               0LL,
               &v10,
               162LL,
               1);
    if ( (_DWORD)result != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v8 = 270;
      return WPP_RECORDER_SF_LL(
               *(_QWORD *)(a1 + 72),
               2u,
               4u,
               v8,
               (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
               1,
               result);
    }
    v9 = *(_QWORD *)(a1 + 680);
    v10 = v7 | v10 & 0xFB;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, int))(a1 + 688))(v9, 0LL, &v10, 162LL, 1);
    if ( (_DWORD)result != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 271;
      return WPP_RECORDER_SF_LL(
               *(_QWORD *)(a1 + 72),
               2u,
               4u,
               v8,
               (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
               1,
               result);
    }
  }
  return result;
}
