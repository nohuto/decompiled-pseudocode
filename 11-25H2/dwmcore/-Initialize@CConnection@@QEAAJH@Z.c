/*
 * XREFs of ?Initialize@CConnection@@QEAAJH@Z @ 0x18022E2EC
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180233120 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartCompositionThread@CConnection@@IEAAJH@Z @ 0x18022E360 (-StartCompositionThread@CConnection@@IEAAJH@Z.c)
 *     ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z @ 0x18022E4C8 (-Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z.c)
 */

__int64 __fastcall CConnection::Initialize(struct CTransport **this, int a2)
{
  int started; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  started = CKernelTransport::Create(a2, this + 1);
  if ( started < 0 )
  {
    v5 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = CConnection::StartCompositionThread((CConnection *)this, a2);
  if ( started < 0 )
  {
    v5 = 66LL;
    goto LABEL_3;
  }
  return 0LL;
}
