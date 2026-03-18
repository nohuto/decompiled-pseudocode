/*
 * XREFs of NtUserTransformRect @ 0x1C006ECF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // ebx
  BOOL v11; // eax
  unsigned int v12; // ecx
  BOOL v13; // eax
  _BYTE *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v20[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int128 v22; // [rsp+58h] [rbp-50h] BYREF

  v5 = a3;
  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v22 = 0LL;
  v20[0] = 0LL;
  v8 = v6 & 0x7FFFFFFF;
  v9 = 24592LL;
  if ( (v6 & 0x7FFFFFFF) == 0x22 || v8 == 24592 || v8 == 1073766416 || v8 == 18 )
  {
    v10 = 1;
    v11 = 1;
  }
  else
  {
    v10 = 1;
    v11 = (((v6 & 0x7FFE00FF) - 17) & 0xFFFFFFFD) == 0 && ((v8 >> 8) & 0x1FF) != 0;
  }
  if ( v11
    && ((v12 = v5 & 0x7FFFFFFF, (v5 & 0x7FFFFFFF) == 0x6010) || v12 == 18 || v12 == 34 || v12 == 1073766416
      ? (v13 = 1)
      : (((v5 & 0x7FFE00FF) - 17) & 0xFFFFFFFD) != 0
      ? (v13 = 0)
      : (v13 = ((v12 >> 8) & 0x1FF) != 0),
        v13) )
  {
    v14 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[15] = v14[15];
    v22 = *a1;
    if ( a4 && (v6 & 0xF) == 2 )
      v20[0] = ValidateHmonitor(a4);
    if ( !v20[0] )
    {
      LODWORD(v21) = (DWORD2(v22) + (int)v22) / 2;
      HIDWORD(v21) = (HIDWORD(v22) + DWORD1(v22)) / 2;
      v20[0] = GuessMonitorOverrideForCoordinateConversions(v21, v5, 0LL, v9);
    }
    LogicalToPhysicalDPIRect(&v22, &v22, v5, v20);
    PhysicalToLogicalDPIRect(&v22, &v22, v6, v20);
    *a1 = v22;
  }
  else
  {
    v10 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v10;
}
