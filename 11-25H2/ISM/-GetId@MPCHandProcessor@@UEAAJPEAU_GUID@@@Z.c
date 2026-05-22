/*
 * XREFs of ?GetId@MPCHandProcessor@@UEAAJPEAU_GUID@@@Z @ 0x1800C1D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHandProcessor::GetId(MPCHandProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCHand;
  return result;
}
