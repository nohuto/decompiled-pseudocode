/*
 * XREFs of CmpVerifyLogRecord @ 0x1407E12B8
 * Callers:
 *     CmpRmReDoPhase @ 0x1407E0F14 (CmpRmReDoPhase.c)
 * Callees:
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     HvBufferCheckSum @ 0x140A02614 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmpVerifyLogRecord(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  bool v10; // cf
  __int64 v11; // rcx
  ULONG v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // eax

  if ( a2 < 0x30 )
    return (unsigned int)-1072103376;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > a2 )
    return (unsigned int)-1072103376;
  if ( v3 < 0x30 )
    return (unsigned int)-1072103376;
  if ( *(_DWORD *)a1 != (unsigned int)HvBufferCheckSum(a1, v3) )
    return (unsigned int)-1072103376;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 >= 0xB )
    return (unsigned int)-1072103376;
  v5 = 0;
  if ( v4 <= 5 )
  {
    if ( v4 == 5 )
    {
LABEL_12:
      if ( v3 < 0x50 || v4 == 5 && (*(_QWORD *)(a1 + 72) || *(_DWORD *)(a1 + 68)) )
        return (unsigned int)-1072103376;
      v6 = *(unsigned __int16 *)(a1 + 32);
      if ( (v6 & 1) != 0 )
        return (unsigned int)-1072103376;
      v7 = *(unsigned __int16 *)(a1 + 48);
      if ( (v7 & 1) != 0 )
        return (unsigned int)-1072103376;
      v8 = v6 + 64 + v7;
      if ( v8 < v6 + 64 )
        return (unsigned int)-1072103376;
      v9 = v8 + *(_DWORD *)(a1 + 68);
      if ( v9 < v8 )
        return (unsigned int)-1072103376;
      v10 = v3 < v9;
      goto LABEL_44;
    }
    if ( !v4 )
      return v5;
    if ( v4 != 1 && v4 != 2 )
    {
      if ( v4 - 3 <= 1 )
        goto LABEL_12;
LABEL_33:
      __fastfail(5u);
    }
    if ( v3 < 0x40 )
      return (unsigned int)-1072103376;
    if ( *(_DWORD *)(a1 + 48) > 1u )
      return (unsigned int)-1072103376;
    v11 = *(unsigned __int16 *)(a1 + 32);
    if ( (v11 & 1) != 0 || v3 < (int)v11 + 64 )
      return (unsigned int)-1072103376;
    v12 = v3 - (v11 + 64);
LABEL_26:
    if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(a1 + v11 + 64), v12, 0) )
      return (unsigned int)-1072103376;
    return v5;
  }
  v13 = v4 - 6;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
          return (unsigned int)-1073741822;
        if ( v16 != 1 )
          goto LABEL_33;
      }
      if ( v3 < 0x40 )
        return (unsigned int)-1072103376;
      v11 = *(unsigned __int16 *)(a1 + 32);
      if ( (v11 & 1) != 0 )
        return (unsigned int)-1072103376;
      v17 = v11 + 64;
      v18 = *(_DWORD *)(a1 + 48);
      if ( v18 + v17 < v17 || v3 < v18 + v17 )
        return (unsigned int)-1072103376;
      v12 = *(_DWORD *)(a1 + 48);
      goto LABEL_26;
    }
  }
  if ( v3 < 0x38 )
    return (unsigned int)-1072103376;
  v19 = *(unsigned __int16 *)(a1 + 32);
  if ( (v19 & 1) != 0 )
    return (unsigned int)-1072103376;
  v20 = v19 + 56;
  if ( v20 < 0x38 )
    return (unsigned int)-1072103376;
  v10 = v3 < v20;
LABEL_44:
  if ( v10 )
    return (unsigned int)-1072103376;
  return v5;
}
