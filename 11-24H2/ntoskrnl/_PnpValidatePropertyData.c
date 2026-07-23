/*
 * XREFs of _PnpValidatePropertyData @ 0x1408B6740
 * Callers:
 *     ValidFilterExpression @ 0x1404818E0 (ValidFilterExpression.c)
 *     _PnpSetObjectPropertyWorker @ 0x1408B6520 (_PnpSetObjectPropertyWorker.c)
 *     PiSwValidatePropertyArray @ 0x1408B66DC (PiSwValidatePropertyArray.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDqQueryValidateQueryData @ 0x1409F27A0 (PiDqQueryValidateQueryData.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x14045264C (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x14046E8F8 (_IsFixedSizeType.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(__int64 *psz, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  unsigned int v11; // r11d
  bool v12; // zf
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int64 v19; // r11
  size_t v20; // rax
  bool v21; // zf
  int v22; // r11d
  unsigned __int64 v23; // rsi
  size_t v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // esi
  unsigned int v27; // eax
  size_t pcbLength; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  pcbLength = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_11;
  if ( v10 == 4096 )
  {
    if ( v8 < 2 || !IsFixedSizeType(v9) || (unsigned int)v4 < v11 )
      return (unsigned int)-1073741811;
    v12 = (unsigned int)v4 % v11 == 0;
LABEL_10:
    if ( !v12 )
      return (unsigned int)-1073741811;
    goto LABEL_11;
  }
  if ( v10 == 0x2000 )
  {
    if ( ((v8 - 18) & 0xFFFFFFFD) != 0 )
      return (unsigned int)-1073741811;
    goto LABEL_19;
  }
  if ( (v9 & 0xF000) != 0 )
    return (unsigned int)-1073741811;
  if ( IsFixedSizeType(v9) )
  {
    v12 = (_DWORD)v4 == v22;
    goto LABEL_10;
  }
LABEL_11:
  if ( v8 && (v13 = v8 - 1) != 0 )
  {
    v14 = v13 - 15;
    if ( !v14 )
    {
      if ( psz )
      {
        v26 = (unsigned int)v4 >> 3;
        v27 = 0;
        if ( !v26 )
          return v3;
        while ( *psz >= 0 )
        {
          ++v27;
          ++psz;
          if ( v27 >= v26 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( psz )
      {
        v25 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( *(_BYTE *)psz == 0xFF || *(_BYTE *)psz == 0 )
        {
          ++v25;
          psz = (__int64 *)((char *)psz + 1);
          if ( v25 >= (unsigned int)v4 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    }
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_19;
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( psz && RtlValidRelativeSecurityDescriptor(psz, v4, 0) )
      {
        v21 = RtlLengthSecurityDescriptor(psz) == (_DWORD)v4;
LABEL_25:
        if ( v21 )
          return v3;
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741811;
    }
    v18 = v17 - 1;
    if ( !v18 || v18 == 5 )
    {
LABEL_19:
      if ( psz && (unsigned int)v4 >= 2 )
      {
        v19 = v4;
        if ( (v10 & 0x2000) != 0 )
        {
          v23 = 0LL;
          do
          {
            if ( !*(_WORD *)psz )
              break;
            if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)psz, v19 - v23, &pcbLength) < 0 )
              return (unsigned int)-1073741811;
            if ( (pcbLength & 1) != 0 )
              return (unsigned int)-1073741811;
            v24 = pcbLength + 2;
            pcbLength = v24;
            if ( v24 > 0xFFFE )
              return (unsigned int)-1073741811;
            v23 += v24;
            if ( v23 > v19 )
              return (unsigned int)-1073741811;
            psz = (__int64 *)((char *)psz + 2 * (v24 >> 1));
          }
          while ( v23 + 2 <= v19 );
          v20 = v23 + 2;
          goto LABEL_24;
        }
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)psz, v4, &pcbLength) >= 0 )
        {
          v20 = pcbLength + 2;
          if ( pcbLength + 2 <= 0xFFFE )
          {
LABEL_24:
            v21 = v20 == v19;
            goto LABEL_25;
          }
        }
      }
      return (unsigned int)-1073741811;
    }
  }
  else if ( (_DWORD)v4 )
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
