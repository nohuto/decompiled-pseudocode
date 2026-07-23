/*
 * XREFs of PpvUtilIsHardwareBeingVerified @ 0x140B84C58
 * Callers:
 *     VfFailDeviceNode @ 0x1404A5500 (VfFailDeviceNode.c)
 *     VfIsVerificationEnabled @ 0x1404A8EB0 (VfIsVerificationEnabled.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpvUtilIsHardwareBeingVerified(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = *(_DWORD *)(v1 + 396);
      if ( (v2 & 0x20000) == 0 && (v2 & 0x8000) != 0 )
        return 1;
    }
  }
  return result;
}
