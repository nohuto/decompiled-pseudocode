/*
 * XREFs of ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x18027E3E0
 * Callers:
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x18009B8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFSVPProvider::RequestThreadpoolWork(_QWORD *pv)
{
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  unsigned int v4; // ebx
  struct _TP_WORK *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( pv[3] )
    goto LABEL_12;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)lambda_a29cc3fe718aa785b8a158e67bed590f_::_lambda_invoker_cdecl_,
                     pv,
                     0LL);
  pv[3] = ThreadpoolWork;
  if ( ThreadpoolWork )
    goto LABEL_12;
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  if ( (v4 & 0x80000000) == 0 )
  {
LABEL_12:
    if ( !*((_BYTE *)pv + 72) )
    {
      v6 = (struct _TP_WORK *)pv[3];
      *((_BYTE *)pv + 72) = 1;
      SubmitThreadpoolWork(v6);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\fsvpprovider.cpp",
      (const char *)v4);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\fsvpprovider.cpp",
      (const char *)v4);
    return v4;
  }
}
