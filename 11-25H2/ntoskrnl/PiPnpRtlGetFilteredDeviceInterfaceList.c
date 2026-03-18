/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1408D1AE8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PiDmGetObjectConstraintList @ 0x1408D1930 (PiDmGetObjectConstraintList.c)
 *     PiDmGetCmObjectListFromCache @ 0x14094FF28 (PiDmGetCmObjectListFromCache.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  bool v2; // zf
  unsigned __int16 *v3; // rdx
  char v4; // cl
  _DWORD *v5; // rax
  __int64 v6; // r8
  unsigned int v7; // ecx
  _WORD *v8; // r9
  int v9; // ecx
  NTSTATUS result; // eax
  _DWORD *v11; // rax
  unsigned int v12; // [rsp+30h] [rbp-21h]
  _DWORD *v13; // [rsp+38h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  int v15; // [rsp+58h] [rbp+7h]
  int v16; // [rsp+5Ch] [rbp+Bh]
  __int128 v17; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  GUID Guid; // [rsp+88h] [rbp+37h] BYREF

  v2 = (*(_BYTE *)(a1 + 32) & 1) == 0;
  v18 = 0LL;
  v3 = *(unsigned __int16 **)(a1 + 16);
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( !v2 )
    v4 = 1;
  v2 = *(_QWORD *)(a1 + 24) == 0LL;
  *((_QWORD *)&v18 + 1) = *(_QWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 48);
  Guid = 0LL;
  LOBYTE(v18) = v4;
  v17 = 0LL;
  DestinationString = 0LL;
  if ( v2 )
  {
    v5 = *(_DWORD **)(a1 + 72);
    v6 = (__int64)&v17;
    v7 = *(_DWORD *)(a1 + 64);
    v8 = *(_WORD **)(a1 + 56);
    if ( !v3 )
      return PiDmGetCmObjectListFromCache(
               3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)&v17,
               (_DWORD)v8,
               v7,
               *(_QWORD *)(a1 + 72));
    v16 = 0;
    v13 = v5;
    v12 = v7;
    v9 = 0;
    *(_QWORD *)&DestinationString.Length = PiPnpRtlInterfaceFilterCallback;
    DestinationString.Buffer = (wchar_t *)&v17;
    goto LABEL_6;
  }
  if ( !v3 )
  {
LABEL_12:
    v11 = *(_DWORD **)(a1 + 72);
    v6 = *(unsigned int *)(a1 + 64);
    v9 = 1;
    v8 = *(_WORD **)(a1 + 56);
    v3 = *(unsigned __int16 **)(a1 + 24);
    v16 = 0;
    *(_QWORD *)&DestinationString.Length = PiPnpRtlInterfaceFilterCallback;
    v13 = v11;
    DestinationString.Buffer = (wchar_t *)&v17;
    v12 = v6;
LABEL_6:
    v15 = 3;
    return PiDmGetObjectConstraintList(v9, v3, v6, (__int64)&DestinationString, v8, v12, v13);
  }
  result = RtlInitUnicodeStringEx(&DestinationString, v3);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      *(_QWORD *)&v17 = &Guid;
      goto LABEL_12;
    }
  }
  return result;
}
