/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x140414B04
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403B00D8 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MonitorAreSpecializedDisplaysSupported@@YAHXZ @ 0x140053544 (-MonitorAreSpecializedDisplaysSupported@@YAHXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x140185B90 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, char a2)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct DXGSESSIONDATA *v8; // rsi
  __int64 v9; // rcx
  bool v11; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v5 = Current;
  if ( Current && (*((_DWORD *)Current + 102) & 4) != 0 )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v8 = SessionData;
  if ( SessionData )
  {
    if ( *((_BYTE *)SessionData + 18500) )
      return 0LL;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v5 + 11) + 224LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v9) )
  {
    if ( DXGPROCESS::IsCurrentThreadAppContainer() )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
      v13 = 0;
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v13) < 0 || !v13 )
        return 3221225506LL;
    }
    return 0LL;
  }
  v11 = g_OSTestSigningEnabled != 0;
  if ( v8 && *((_BYTE *)v8 + 18501) )
    v11 = 0;
  if ( DXGPROCESS::IsCurrentThreadAppContainer() || a2 && !v11 )
    return 3221225506LL;
  if ( v3 == 2 )
  {
    if ( !(unsigned int)MonitorAreSpecializedDisplaysSupported() && !v11 )
      return 3221225506LL;
    return 0LL;
  }
  return v3 != 1 ? 0xC0000022 : 0;
}
