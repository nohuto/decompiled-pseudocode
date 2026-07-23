/*
 * XREFs of PopFxPlatformRegisterInterface @ 0x1406F76A0
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PopFxPlatformRegisterInterface(__int64 a1, __int64 (__fastcall **a2)(unsigned int *a1))
{
  unsigned int v3; // ebx
  signed __int64 v4; // rdx

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    if ( *(_QWORD *)(a1 + 8) && (v4 = *(_QWORD *)(a1 + 24)) != 0 )
    {
      v3 = -1073741823;
      if ( !_InterlockedCompareExchange64(&qword_140F065B0, v4, 0LL) )
      {
        v3 = 0;
        PopFxPlatformInterface = *(_OWORD *)(a1 + 8);
        a2[1] = 0LL;
        *a2 = PoFxPlatformRequestHandler;
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 24), 0x4D584650u);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return v3;
}
