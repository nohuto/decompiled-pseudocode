/*
 * XREFs of ?UnregisterCOMObject@?$Module@$01VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAKI@Z @ 0x1800CFEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>::UnregisterCOMObject(
        __int64 a1,
        __int64 a2,
        DWORD *a3,
        unsigned int a4)
{
  HRESULT result; // eax
  unsigned int i; // edi

  result = 0;
  for ( i = 0; i < a4; ++a3 )
  {
    if ( result < 0 )
      break;
    if ( *a3 )
    {
      result = CoRevokeClassObject(*a3);
      if ( result >= 0 )
        *a3 = 0;
    }
    ++i;
  }
  return result;
}
