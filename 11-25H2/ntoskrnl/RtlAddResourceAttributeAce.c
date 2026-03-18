/*
 * XREFs of RtlAddResourceAttributeAce @ 0x140770C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1407711BC (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttribute @ 0x140771564 (RtlpValidAttribute.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 *     RtlFirstFreeAce @ 0x1409A71C0 (RtlFirstFreeAce.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        char *Sid,
        __int64 a6,
        _DWORD *a7)
{
  int v11; // ebx
  BOOLEAN valid; // al
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int i; // ebx
  unsigned int v18; // eax
  _BYTE *v19; // rdi
  __int64 Pool2; // rax
  size_t v21; // r12
  USHORT v22; // cx
  int v23; // ecx
  unsigned __int8 *v24; // rdx
  unsigned int j; // r8d
  __int64 v26; // r8
  __int64 v27; // rsi
  int v28; // edx
  char v29; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  int Size_4; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  int v35; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v36; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v34 = 0LL;
  v35 = 0;
  v36 = 256;
  memset_0(Src, 0, sizeof(Src));
  Size = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  valid = RtlValidSid(Sid);
  v13 = 0LL;
  if ( !valid )
    return (unsigned int)-1073741704;
  v14 = *(_DWORD *)(Sid + 2) - v35;
  if ( !v14 )
    v14 = *((unsigned __int16 *)Sid + 3) - v36;
  if ( v14 || Sid[1] != 1 || *((_DWORD *)Sid + 2) )
    return (unsigned int)-1073741811;
  if ( *a1 > 4u || a2 > 4 )
    return (unsigned int)-1073741735;
  v15 = *a1;
  if ( *a1 <= (unsigned __int8)a2 )
    v15 = (unsigned __int8)a2;
  v35 = v15;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 || !a6 || *(_WORD *)a6 != 1 || *(_WORD *)(a6 + 2) || !*(_DWORD *)(a6 + 4) )
    return (unsigned int)-1073741811;
  v16 = *(_QWORD *)(a6 + 8);
  for ( i = 0; ; ++i )
  {
    v18 = *(_DWORD *)(a6 + 4);
    if ( i >= v18 )
      break;
    if ( !(unsigned __int8)RtlpValidAttribute(v16, v15, v13) )
      return (unsigned int)-1073741811;
    v16 += 32LL;
  }
  if ( v18 != 1 )
    return (unsigned int)-1073741811;
  v19 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &Size);
  if ( v11 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x41uLL);
    v19 = (_BYTE *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Pool2, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( (unsigned __int8)RtlValidAcl(a1) && (unsigned __int8)RtlFirstFreeAce(a1, &v34) )
    {
      v21 = Size;
      v22 = 4 * ((unsigned __int8)Sid[1] + 4);
      pusResult[0] = v22;
      if ( Size > 0xFFFF || RtlUShortAdd(v22, Size, pusResult) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v23 = 8;
        v24 = a1 + 8;
        *a7 = 8;
        for ( j = 0; j < *((unsigned __int16 *)a1 + 2); v24 += *((unsigned __int16 *)v24 + 1) )
        {
          ++j;
          v23 += *((unsigned __int16 *)v24 + 1);
          *a7 = v23;
        }
        v26 = pusResult[0];
        v27 = v34;
        v28 = v23 + pusResult[0];
        *a7 = v28;
        if ( v27 && v27 + v26 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
        {
          v29 = Size_4;
          *(_WORD *)(v27 + 2) = v26;
          *(_BYTE *)(v27 + 1) = v29;
          *(_BYTE *)v27 = 18;
          *(_DWORD *)(v27 + 4) = 0;
          RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, (PSID)(v27 + 8), Sid);
          memmove((void *)(v27 + 16 + 4LL * (unsigned __int8)Sid[1]), v19, v21);
          ++*((_WORD *)a1 + 2);
          *a1 = v35;
        }
        else
        {
          v11 = -1073741671;
          *a7 = (v28 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v19 && v19 != Src )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v11;
}
