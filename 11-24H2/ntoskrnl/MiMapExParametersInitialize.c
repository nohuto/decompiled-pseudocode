/*
 * XREFs of MiMapExParametersInitialize @ 0x14099F5A8
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x14099F100 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline @ 0x140678244 (Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline.c)
 *     MiGetUserReservationHighestAddress @ 0x1409C3960 (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapExParametersInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned __int64 *v6; // r8
  _QWORD *v7; // r11
  unsigned __int64 v8; // r14
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbp
  _DWORD *v11; // r10
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v13; // rcx
  int v14; // ecx

  v5 = 0;
  v8 = MiSectionControlArea(*(_QWORD *)(a2 + 32));
  if ( v6[2] )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    if ( *v6 )
      return (unsigned int)-1073741811;
    v9 = v6 + 1;
    if ( v6[1] )
      return (unsigned int)-1073741811;
    *(_DWORD *)(a1 + 64) |= 0x4000000u;
    *(_DWORD *)(a1 + 60) |= 2u;
    *(_QWORD *)(a1 + 16) = 4096LL;
  }
  else
  {
    v9 = v6 + 1;
  }
  v10 = *v6;
  if ( ((*(_QWORD *)(a1 + 16) - 1LL) & *v6) != 0 )
    return (unsigned int)-1073741811;
  if ( *v7 )
  {
    if ( v10 || *v9 || v6[2] )
      return (unsigned int)-1073741811;
    v11 = v6 + 1;
  }
  else
  {
    v11 = v9;
  }
  if ( *v9 )
  {
    if ( *v9 <= 0x7FFFFFFEFFFFuLL && ((*v11 + 1) & 0xFFF) == 0 )
    {
      UserReservationHighestAddress = *v9;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    UserReservationHighestAddress = 0x7FFFFFFEFFFFLL;
  else
    UserReservationHighestAddress = MiGetUserReservationHighestAddress(v7[5], 0LL);
  *(_QWORD *)v11 = UserReservationHighestAddress;
LABEL_23:
  if ( v10 >= UserReservationHighestAddress )
    return (unsigned int)-1073741811;
  v13 = v7[1];
  if ( v13 )
  {
    if ( UserReservationHighestAddress - v10 + 1 < v13 )
      return (unsigned int)-1073741811;
  }
  v14 = *(_DWORD *)(a1 + 40);
  if ( (v14 & 0x7F) != 0
    || *(_DWORD *)(a1 + 52)
    || *(_DWORD *)(a3 + 32) > (unsigned int)(unsigned __int16)KeNumberNodes
    || (v14 & 0x40000000) != 0 && (*(_DWORD *)(v8 + 56) & 0x420) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v14 & 0x20000000) != 0 && (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(a1 + 60) & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (*(_BYTE *)(a3 + 56) & 0x20) != 0 )
    *(_DWORD *)(a1 + 64) |= 2u;
  if ( (*(_BYTE *)(a3 + 56) & 0x40) != 0 )
    *(_DWORD *)(a1 + 120) |= 8u;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a3 + 8);
  *(_WORD *)(a1 + 58) = *(_WORD *)(a3 + 50);
  if ( (unsigned int)Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a3 + 56);
  *(_DWORD *)(a1 + 40) &= ~0x4000u;
  return v5;
}
