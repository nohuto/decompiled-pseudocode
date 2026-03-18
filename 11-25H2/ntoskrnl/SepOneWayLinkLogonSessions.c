/*
 * XREFs of SepOneWayLinkLogonSessions @ 0x1405FC0DC
 * Callers:
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405D8BC8 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepRemoveTokenLogonSession @ 0x140784688 (SepRemoveTokenLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepStopReferencingLogonSession @ 0x140A744C0 (SepStopReferencingLogonSession.c)
 */

__int64 __fastcall SepOneWayLinkLogonSessions(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  PVOID v3; // rsi
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  __int128 v15; // [rsp+68h] [rbp-18h]
  PVOID v16; // [rsp+B8h] [rbp+38h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v15 = 0LL;
  DWORD2(v15) = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = -1073741822;
    goto LABEL_17;
  }
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, a3) )
  {
    v7 = -1073741727;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a1 + 192) != 1 )
    goto LABEL_6;
  if ( a2 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(a2, 8u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
    v3 = Object;
    v7 = v8;
    if ( v8 < 0 )
    {
LABEL_17:
      if ( v16 )
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a1 + 216) != *((_QWORD *)Object + 27) )
    {
LABEL_6:
      v7 = -1073741811;
      goto LABEL_17;
    }
  }
  *((_QWORD *)&v13 + 1) = 0LL;
  DWORD2(v14) = 0;
  *(_QWORD *)&v14 = 0LL;
  LODWORD(v13) = 48;
  v15 = 0LL;
  v7 = SepDuplicateToken(a1, (unsigned int)&v13, 0, 1, 0, 0, 0, (__int64)&v16);
  if ( v7 < 0 )
    goto LABEL_17;
  v9 = *(_QWORD *)(a1 + 216);
  v10 = *(_DWORD *)(v9 + 32);
  if ( a2 )
  {
    *(_DWORD *)(v9 + 32) = v10 | 4;
  }
  else
  {
    *(_DWORD *)(v9 + 32) = v10 | 2;
    *((_DWORD *)v16 + 50) |= 0x8000000u;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) = v16;
  if ( SeTokenLeakTracking )
    SepRemoveTokenLogonSession(v16);
  v7 = SepStopReferencingLogonSession(v16);
  if ( v7 < 0 )
    goto LABEL_17;
LABEL_19:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return (unsigned int)v7;
}
