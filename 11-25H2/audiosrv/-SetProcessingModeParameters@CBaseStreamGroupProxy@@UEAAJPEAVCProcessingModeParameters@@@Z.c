/*
 * XREFs of ?SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800F37A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180027060 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Reset@CProcessingModeParameters@@QEAAXXZ @ 0x1800A3E60 (-Reset@CProcessingModeParameters@@QEAAXXZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::SetProcessingModeParameters(CBaseStreamGroupProxy *this, const void **a2)
{
  void **v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void **)((char *)this + 264);
  if ( a2 )
  {
    try
    {
      CProcessingModeParameters::operator=(v2, a2);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x390,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                             v3);
    }
  }
  else
  {
    CProcessingModeParameters::Reset(v2);
  }
  return 0LL;
}
