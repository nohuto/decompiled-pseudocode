/*
 * XREFs of TcglibpAuthenticateSession @ 0x14014147C
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x14013B87C (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x14013BC78 (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x14013BE18 (TcglibDeassignNamespaceLocking.c)
 *     TcglibRevertLockingSpEx @ 0x14013C434 (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x14013C5B4 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x14013C8E8 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x14013CACC (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x14013CC20 (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x14013CD8C (TcglibSetSidPin.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpAuthenticateSession(int **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // cc
  __int64 result; // rax
  int *v8; // rcx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a4 <= 0x20u;
  v10 = 0;
  if ( !v4 )
    return 3221225485LL;
  v8 = *a1;
  v9[0] = a3;
  v9[1] = a4;
  TcglibEalLogCommand(v8, "AuthenticateSession", 1, 28, a3, 0LL);
  result = TcglibpCallMethod(
             (__int64)a1,
             a2,
             1LL,
             0x60000001CLL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenAuthenticateParams,
             (__int64)v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseBooleanData,
             (__int64)&v10);
  if ( (int)result >= 0 )
    return v10 == 0 ? 0xC0000022 : 0;
  return result;
}
