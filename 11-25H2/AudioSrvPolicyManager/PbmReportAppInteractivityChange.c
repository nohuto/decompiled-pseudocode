/*
 * XREFs of PbmReportAppInteractivityChange @ 0x180019370
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180007620 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18000B110 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 */

__int64 __fastcall PbmReportAppInteractivityChange(
        void *a1,
        const unsigned __int16 *a2,
        CApplication *a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9[5]; // [rsp+34h] [rbp-14h] BYREF

  v9[0] = 0;
  v8 = 0;
  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    result = RpcClientProcessSessionId(a1, v9, &v8);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CApplicationManager::ProcessInteractivityNotification((__int64)g_ApplicationManager, a2, a3, a4, v8);
    }
  }
  return result;
}
