/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800105D0
 * Callers:
 *     ReleaseExclusiveCpuSets @ 0x18000FF40 (ReleaseExclusiveCpuSets.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005C04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180010204 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800106CC (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, const unsigned __int16 *a2, bool *a3)
{
  int CallingProcessHandle; // eax
  void *v5; // rdx
  bool *v6; // r9
  unsigned int v7; // ebx
  HANDLE v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)a2 = 0;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, (__int64)a2, &hObject);
  v7 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
  {
    v7 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, v5, a2, v6);
    v8 = hObject;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
LABEL_5:
      CloseHandle(v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    v8 = hObject;
    if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_5;
  }
  return v7;
}
