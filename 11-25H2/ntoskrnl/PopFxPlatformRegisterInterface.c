/*
 * XREFs of PopFxPlatformRegisterInterface @ 0x1406EDD84
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
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
      if ( !_InterlockedCompareExchange64(&qword_140F05E90, v4, 0LL) )
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
