/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x1403A5F78
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x1403A5D50 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x1405D6724 (PopPepComponentSetResidency.c)
 *     PopPepRegisterDevice @ 0x140A929B0 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetResidencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 *v4; // rcx

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !PopPepLowPowerEpoch && *(_DWORD *)(a1 + 188) != 1 )
  {
    v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 200) + 8LL + 24 * v2);
    do
    {
      if ( *v4 <= a2 )
        break;
      v4 -= 3;
      LODWORD(v2) = v2 - 1;
    }
    while ( (_DWORD)v2 );
  }
  return (unsigned int)v2;
}
