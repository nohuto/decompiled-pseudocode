/*
 * XREFs of _InputSystemInternalServerConnection::Create_::_1_::dtor$2 @ 0x1801CF392
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800998BC (--1-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

unsigned int __fastcall InputSystemInternalServerConnection::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  unsigned int result; // eax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(*(Microsoft::Bamo::BaseBamoConnection ***)(a2 + 112));
  }
  return result;
}
