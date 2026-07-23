/*
 * XREFs of PopEtGetProcessAppId @ 0x1408DEC68
 * Callers:
 *     PoEnergyContextStart @ 0x1408DEB60 (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtAppIdIntern @ 0x1408DEE00 (PopEtAppIdIntern.c)
 *     PopEtGetProcessVersionInfo @ 0x1408E009C (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1408E0534 (PopEtGetProcessImageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1408E082C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PopEtAppIdDereference @ 0x14099BEA8 (PopEtAppIdDereference.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 i; // rcx
  WCHAR v9; // ax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-90h]
  __int64 *v16; // [rsp+78h] [rbp-88h]
  wchar_t *Buffer; // [rsp+80h] [rbp-80h]
  char *v18; // [rsp+88h] [rbp-78h]
  char *v19; // [rsp+90h] [rbp-70h]
  _BYTE *v20; // [rsp+98h] [rbp-68h]
  __int16 v21; // [rsp+A0h] [rbp-60h]
  __int16 v22; // [rsp+A2h] [rbp-5Eh]
  __int16 v23; // [rsp+A4h] [rbp-5Ch]
  __int16 v24; // [rsp+A6h] [rbp-5Ah]
  _BYTE v25[80]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v26[2]; // [rsp+100h] [rbp+0h] BYREF
  char v27; // [rsp+104h] [rbp+4h] BYREF
  char v28; // [rsp+204h] [rbp+104h] BYREF
  WCHAR SourceString[16]; // [rsp+290h] [rbp+190h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  DestinationString = 0LL;
  memset_0(v26, 0, 0x188uLL);
  memset_0(v25, 0, 0x44uLL);
  p_DestinationString = *(UNICODE_STRING **)(a1 + 848);
  v10 = 0LL;
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v9 = *(unsigned __int8 *)(a1 + i + 824);
      SourceString[i] = v9;
      if ( !(_BYTE)v9 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, &v12);
  PopEtGetProcessSidAndPackageIdentity(a1, v25, v26);
  v15 = &v12;
  memset(v14, 0, sizeof(v14));
  if ( (int)PopEtGetProcessVersionInfo(a1, &v10) < 0 )
    v10 = 0LL;
  v16 = &v10;
  v20 = v25;
  v24 = 4 * (v25[1] + 2);
  Buffer = p_DestinationString->Buffer;
  v21 = p_DestinationString->Length >> 1;
  v18 = &v27;
  v22 = v26[0];
  v19 = &v28;
  v23 = v26[1];
  v5 = PopEtAppIdIntern(v14, &v11);
  if ( v5 < 0 )
  {
    v6 = v11;
  }
  else
  {
    v6 = 0LL;
    *a2 = v11;
    v5 = 0;
  }
  if ( v6 )
    PopEtAppIdDereference(v6);
  return (unsigned int)v5;
}
