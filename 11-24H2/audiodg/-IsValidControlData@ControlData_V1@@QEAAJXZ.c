/*
 * XREFs of ?IsValidControlData@ControlData_V1@@QEAAJXZ @ 0x140084760
 * Callers:
 *     ?Initialize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400832F0 (-Initialize@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140039C18 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053234 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140084818 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 */

__int64 __fastcall ControlData_V1::IsValidControlData(ControlData_V1 *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this == 1
    && *((_DWORD *)this + 50) == 1162888004
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)((char *)this + 384)) >= 0
    && *((_DWORD *)this + 51) == 220 )
  {
    v2 = *((_DWORD *)this + 92);
    if ( *((_DWORD *)this + 91) < v2
      && v2 <= *((_DWORD *)this + 93)
      && VolatileControlData_V0::IsValidFlags((ControlData_V1 *)((char *)this + 8), *((_DWORD *)this + 43)) )
    {
      v3 = *((_DWORD *)this + 84);
      if ( !v3
        || IsValidQueueIndex(*((_DWORD *)this + 2), v3)
        && IsValidQueueIndex(*((_DWORD *)this + 3), *((_DWORD *)this + 84)) )
      {
        return 0LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7DF,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)0x887C0045LL);
  return 2289827909LL;
}
