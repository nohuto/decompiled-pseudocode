/*
 * XREFs of ?GetId@MPCMouseProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180081810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::GetId(MPCMouseProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCMouse;
  return result;
}
