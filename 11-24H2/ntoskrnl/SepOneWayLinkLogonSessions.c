/*
 * XREFs of SepOneWayLinkLogonSessions @ 0x140605AE8
 * Callers:
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14043F618 (SepDeReferenceLogonSessionDirect.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406059EC (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     SepRemoveTokenLogonSession @ 0x140793AF8 (SepRemoveTokenLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepReferenceLogonSession @ 0x140A25A7C (SepReferenceLogonSession.c)
 *     SepStopReferencingLogonSession @ 0x140A706B4 (SepStopReferencingLogonSession.c)
 */

__int64 __fastcall SepOneWayLinkLogonSessions(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  PVOID v6; // rsi
  _QWORD *v7; // r12
  char v8; // r15
  int v9; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // eax
  __int64 v14; // r8
  _DWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  PVOID v19; // [rsp+48h] [rbp-19h] BYREF
  PVOID v20; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  __int128 v22; // [rsp+60h] [rbp-1h] BYREF
  __int128 v23; // [rsp+70h] [rbp+Fh]
  __int128 v24; // [rsp+80h] [rbp+1Fh]
  _QWORD *v25; // [rsp+E0h] [rbp+7Fh] BYREF

  v19 = 0LL;
  *(_QWORD *)&v24 = 0LL;
  DWORD2(v24) = 0;
  v20 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v23 = 0LL;
  if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = -1073741822;
LABEL_32:
    if ( v19 )
      ObfDereferenceObjectWithTag(v19, 0x746C6644u);
    if ( (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v20 )
        ObfDereferenceObjectWithTag(v20, 0x746C6644u);
      if ( v7 )
        SepDeReferenceLogonSessionDirect(v7);
    }
    goto LABEL_39;
  }
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, a3) )
  {
    v9 = -1073741727;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(a1 + 192) != 1 )
  {
LABEL_6:
    v9 = -1073741811;
    goto LABEL_32;
  }
  if ( a2 )
  {
    IsEnabledDeviceUsageNoInline = Feature_2045735225__private_IsEnabledDeviceUsageNoInline();
    Object = 0LL;
    v11 = 136;
    if ( !IsEnabledDeviceUsageNoInline )
      v11 = 8;
    v12 = ObReferenceObjectByHandle(a2, v11, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
    v6 = Object;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_32;
    if ( *(_QWORD *)(a1 + 216) != *((_QWORD *)Object + 27) )
    {
      if ( !(unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_6;
      v8 = 1;
    }
  }
  LODWORD(v22) = 48;
  *((_QWORD *)&v22 + 1) = 0LL;
  DWORD2(v23) = 0;
  *(_QWORD *)&v23 = 0LL;
  v24 = 0LL;
  v9 = SepDuplicateToken(a1, (unsigned int)&v22, 0, 1, 0, 0, 0, (__int64)&v19);
  if ( v9 < 0 )
    goto LABEL_32;
  if ( (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() && v8 )
  {
    v9 = SepDuplicateToken((_DWORD)v6, (unsigned int)&v22, 0, 1, 0, 0, 0, (__int64)&v20);
    if ( v9 < 0 )
      goto LABEL_32;
    v13 = SepReferenceLogonSession((char *)v20 + 24, &v25);
    v7 = v25;
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_32;
    v14 = a1 + 216;
    *(_QWORD *)(*((_QWORD *)v19 + 27) + 24LL) = *(_QWORD *)(*((_QWORD *)v20 + 27) + 8LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 216) + 40LL) |= 2u;
    *((_DWORD *)v19 + 50) |= 0x8000000u;
    *(_QWORD *)(*((_QWORD *)v20 + 27) + 56LL) = v20;
    *(_QWORD *)(*((_QWORD *)v20 + 27) + 16LL) = *(_QWORD *)(*((_QWORD *)v19 + 27) + 8LL);
    *(_DWORD *)(*((_QWORD *)v20 + 27) + 40LL) |= 4u;
    v15 = v20;
  }
  else
  {
    v14 = a1 + 216;
    v16 = *(_QWORD *)(a1 + 216);
    v17 = *(_DWORD *)(v16 + 40);
    if ( a2 )
    {
      *(_DWORD *)(v16 + 40) = v17 | 4;
      goto LABEL_24;
    }
    *(_DWORD *)(v16 + 40) = v17 | 2;
    v15 = v19;
  }
  v15[50] |= 0x8000000u;
LABEL_24:
  *(_QWORD *)(*(_QWORD *)v14 + 56LL) = v19;
  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(v19);
    if ( (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v8 )
        SepRemoveTokenLogonSession(v20);
    }
  }
  v9 = SepStopReferencingLogonSession(v19);
  if ( v9 < 0 )
    goto LABEL_32;
  if ( (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v8 )
    {
      v9 = SepStopReferencingLogonSession(v20);
      if ( v9 < 0 )
        goto LABEL_32;
    }
  }
LABEL_39:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  return (unsigned int)v9;
}
