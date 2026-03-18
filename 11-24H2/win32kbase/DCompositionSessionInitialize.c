/*
 * XREFs of DCompositionSessionInitialize @ 0x1400CEA40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1400CEA60 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CF04C (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
    return DirectComposition::CSynchronizationManager::OnSessionCreation();
  return result;
}
