/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140059F50 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMUpdatePrimaryDevice @ 0x1400D94BC (RIMUpdatePrimaryDevice.c)
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 *     RIMApiSetIsPointerInputTypeRedirected @ 0x1400D9BE0 (RIMApiSetIsPointerInputTypeRedirected.c)
 *     rimFinalizePointerFlags @ 0x1401815FC (rimFinalizePointerFlags.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14018250C (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1401EE3EC (rimIsPointerDevicePrimaryContactDown.c)
 */

char __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int v4; // r12d
  __int64 active; // rax
  __int64 v7; // xmm1_8
  int IsPointerDevicePrimaryContactDown; // eax
  int v9; // esi
  __int64 v10; // rbx
  int v11; // edx
  _DWORD *v12; // rcx
  int v13; // r15d
  unsigned int v14; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v16; // rcx
  int v17; // r15d
  int v18; // edx
  _DWORD *v19; // rax
  int v20; // ecx
  bool v21; // zf
  int v22; // r14d
  __int64 v23; // rcx
  int v24; // ebx
  int IsContactDeliveringPointerData; // [rsp+20h] [rbp-50h]
  __int128 v27; // [rsp+28h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-38h]
  __int128 v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h]
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  BOOL v33; // [rsp+C8h] [rbp+58h]

  IsContactDeliveringPointerData = 0;
  v3 = 0LL;
  v4 = 0;
  active = RIMCmActiveContactsBeginNoButton((__int64)&v29, a2);
  v7 = *(_QWORD *)(active + 16);
  v31 = *(_OWORD *)active;
  v32 = v7;
  RIMCmActiveContactsEnd((__int64)&v27, a2);
  v29 = v27;
  v30 = v28;
  LOBYTE(IsPointerDevicePrimaryContactDown) = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v31, (__int64)&v29);
  v9 = 1;
  if ( (_BYTE)IsPointerDevicePrimaryContactDown )
  {
    do
    {
      v10 = v32 - 16;
      v11 = *(_DWORD *)(v32 - 16 + 2684);
      v12 = (_DWORD *)(v32 - 16 + 2444);
      v33 = (v11 & 2) == 0 && (*v12 & 2) != 0;
      if ( (v11 & 4) != 0 || (v13 = 1, (*v12 & 4) == 0) )
        v13 = 0;
      if ( (*(_DWORD *)(v10 + 32) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1777LL);
      if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1778LL);
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) )
        ++v4;
      if ( (*(_DWORD *)(v10 + 2364) & 1) != 0 )
      {
        if ( !*(_QWORD *)(a2 + 1024) && (v33 || v13) && !v3 && !(unsigned int)RIMCmIsContactSuppressed(v10) )
        {
          IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v10);
          v3 = v10;
        }
        rimFinalizePointerFlags(a1, a2, v10);
      }
      RIMCmActiveContactsNext(a2, &v31);
      RIMCmActiveContactsEnd((__int64)&v27, a2);
      v29 = v27;
      v30 = v28;
      LOBYTE(IsPointerDevicePrimaryContactDown) = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v31, (__int64)&v29);
    }
    while ( (_BYTE)IsPointerDevicePrimaryContactDown );
    if ( v3 && (!v4 || v4 == 1 && IsContactDeliveringPointerData) )
    {
      if ( *(_QWORD *)(a2 + 1024) )
        LOBYTE(IsPointerDevicePrimaryContactDown) = MicrosoftTelemetryAssertTriggeredArgsKM(
                                                      "IXPTelAssert",
                                                      0x20000LL,
                                                      1814LL);
      *(_DWORD *)(v3 + 32) |= 8u;
      *(_DWORD *)(v3 + 2444) |= 0x4000000u;
      *(_QWORD *)(a2 + 1024) = v3;
    }
  }
  if ( *(_QWORD *)(a2 + 1024) )
  {
    v14 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = RIMApiSetIsPointerInputTypeRedirected(v14);
    v16 = *(_QWORD *)(a2 + 1024);
    v17 = IsPointerInputTypeRedirected;
    v18 = *(_DWORD *)(v16 + 2684);
    v19 = (_DWORD *)(v16 + 2444);
    if ( (v18 & 2) != 0 || (v20 = 1, (*v19 & 2) == 0) )
      v20 = 0;
    if ( (v18 & 4) != 0 || (v21 = (*v19 & 4) == 0, IsPointerDevicePrimaryContactDown = 1, v21) )
      IsPointerDevicePrimaryContactDown = 0;
    if ( v20 || (v22 = 0, IsPointerDevicePrimaryContactDown) )
      v22 = 1;
    v23 = *(_QWORD *)(a1 + 480);
    if ( v23 )
    {
      v24 = RIMGetPointerInputType(v23);
      IsPointerDevicePrimaryContactDown = RIMGetPointerInputType(a2);
      if ( (v24 == IsPointerDevicePrimaryContactDown
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(a1 + 480))) != 0
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(a2)) == 0)
        && (!*(_DWORD *)(a1 + 488) || v17) )
      {
        v9 = 0;
      }
    }
    if ( v22 && v9 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 2444LL) |= 0x2000u;
      LOBYTE(IsPointerDevicePrimaryContactDown) = RIMUpdatePrimaryDevice(a1, a2);
    }
  }
  return IsPointerDevicePrimaryContactDown;
}
