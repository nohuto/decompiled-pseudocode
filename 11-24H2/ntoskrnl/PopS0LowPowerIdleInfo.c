/*
 * XREFs of PopS0LowPowerIdleInfo @ 0x140A5D840
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopS0LowPowerIdleInfo(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl
  __int64 v13; // [rsp+20h] [rbp-8h]

  v1 = 0;
  v2 = 0;
  *(_QWORD *)a1 = 0LL;
  if ( SSHSupportIsPlatformAoAc() )
  {
    PopAcquirePolicyLock(v5, v4);
    v7 = (unsigned int)PopNetStandbyReason;
    if ( PopNetStandbyReason )
    {
      v7 = (unsigned int)(PopNetStandbyReason - 1);
      if ( PopNetStandbyReason == 1 )
      {
        v1 = 2;
      }
      else
      {
        v7 = (unsigned int)(PopNetStandbyReason - 2);
        if ( PopNetStandbyReason == 2 )
        {
          v1 = 3;
        }
        else
        {
          v7 = (unsigned int)(PopNetStandbyReason - 3);
          if ( PopNetStandbyReason == 3 )
          {
            v1 = 4;
          }
          else
          {
            v7 = (unsigned int)(PopNetStandbyReason - 6);
            if ( PopNetStandbyReason == 6 )
            {
              v1 = 1;
            }
            else if ( PopNetStandbyReason == 7 )
            {
              v1 = 5;
            }
          }
        }
      }
    }
    v8 = *(_BYTE *)(a1 + 4);
    LOBYTE(v6) = PopNetStandbyState == 2;
    *(_DWORD *)a1 = v1;
    v9 = (PopCsDeviceCompliance[0] == 1) | v8 & 0xFE;
    *(_BYTE *)(a1 + 4) = v9;
    v10 = (dword_140E6789C != 1 ? 0 : 2) | v9 & 0xFD;
    *(_BYTE *)(a1 + 4) = v10;
    v11 = (dword_140E678A0 != 1 ? 0 : 4) | v10 & 0xFB;
    *(_BYTE *)(a1 + 4) = v11;
    *(_BYTE *)(a1 + 4) = (dword_140E678A8 != 1 ? 0 : 8) | v11 & 0xF7;
    if ( (unsigned int)(v1 - 3) > 1 )
      LOBYTE(v7) = v6 & 0xFD | *(_BYTE *)(a1 + 5) & 0xFC;
    else
      LOBYTE(v7) = v6 | *(_BYTE *)(a1 + 5) & 0xFE | 2;
    *(_BYTE *)(a1 + 5) = v7;
    PopReleasePolicyLock(v7, v6, 2LL, 1LL, v13);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
