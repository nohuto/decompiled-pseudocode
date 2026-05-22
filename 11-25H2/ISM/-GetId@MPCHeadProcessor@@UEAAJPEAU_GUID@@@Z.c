/*
 * XREFs of ?GetId@MPCHeadProcessor@@UEAAJPEAU_GUID@@@Z @ 0x1801BCBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadProcessor::GetId(MPCHeadProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCHead;
  return result;
}
