/*
 * XREFs of ?GetGroupingParamInternal@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180080C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetGroupingParamInternal(CAudioSession *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct _GUID *)((char *)this + 204);
  return result;
}
