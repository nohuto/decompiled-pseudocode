/*
 * XREFs of _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x1801D3621
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800998BC (--1-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

unsigned int __fastcall InputSystemInternalClientConnection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  unsigned int result; // eax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(*(Microsoft::Bamo::BaseBamoConnection ***)(a2 + 80));
  }
  return result;
}
