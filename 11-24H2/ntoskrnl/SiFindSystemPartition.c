/*
 * XREFs of SiFindSystemPartition @ 0x140816574
 * Callers:
 *     SyspartGetPhysicalPartitions @ 0x140816418 (SyspartGetPhysicalPartitions.c)
 * Callees:
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SiGetDriveLayoutInformation @ 0x140816754 (SiGetDriveLayoutInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiFindSystemPartition(__int64 a1)
{
  __int64 v1; // r9
  int DriveLayoutInformation; // eax
  PVOID v4; // r8
  unsigned int v5; // ebx
  __int64 i; // rdx
  __int64 v7; // rax
  PVOID P[2]; // [rsp+20h] [rbp-68h] BYREF
  wchar_t Dst[32]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(unsigned int *)(a1 + 4);
  P[0] = 0LL;
  swprintf_s(Dst, 0x20uLL, L"\\??\\PhysicalDrive%d", v1);
  DriveLayoutInformation = SiGetDriveLayoutInformation(Dst, P);
  v4 = P[0];
  v5 = DriveLayoutInformation;
  if ( DriveLayoutInformation >= 0 )
  {
    if ( *(_DWORD *)P[0] )
    {
      if ( *(_DWORD *)P[0] == 1 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)P[0] + 1); i = (unsigned int)(i + 1) )
        {
          v7 = *((_QWORD *)P[0] + 18 * i + 10) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
          if ( !v7 )
            v7 = *((_QWORD *)P[0] + 18 * i + 11) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
          if ( !v7 )
            goto LABEL_14;
        }
      }
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)P[0] + 1); i = (unsigned int)(i + 1) )
      {
        if ( *((_BYTE *)P[0] + 144 * i + 81) )
        {
LABEL_14:
          *(_DWORD *)(a1 + 8) = *((_DWORD *)P[0] + 36 * i + 18);
          goto LABEL_16;
        }
      }
    }
    v5 = -1073741275;
  }
LABEL_16:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
