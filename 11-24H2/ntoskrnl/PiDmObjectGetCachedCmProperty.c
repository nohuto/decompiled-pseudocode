/*
 * XREFs of PiDmObjectGetCachedCmProperty @ 0x1409C4A60
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

int __fastcall PiDmObjectGetCachedCmProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // rbx
  int result; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // [rsp+30h] [rbp-E0h]
  __int64 v19; // [rsp+38h] [rbp-D8h]
  __int64 v20; // [rsp+40h] [rbp-D0h]
  int v21; // [rsp+90h] [rbp-80h] BYREF
  int v22; // [rsp+94h] [rbp-7Ch] BYREF
  GUID v23; // [rsp+98h] [rbp-78h] BYREF
  wchar_t pszDest[8]; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-50h]
  __int128 v26; // [rsp+D0h] [rbp-40h]
  __int128 v27; // [rsp+E0h] [rbp-30h]
  __int64 v28; // [rsp+F0h] [rbp-20h]
  int v29; // [rsp+F8h] [rbp-18h]
  __int16 v30; // [rsp+FCh] [rbp-14h]

  v7 = a6;
  v22 = 0;
  v21 = 0;
  v23 = 0LL;
  if ( a6 )
  {
    if ( !*a7 )
      v7 = 0LL;
  }
  else
  {
    *a7 = 0;
  }
  if ( a4 != 9 || (_DWORD)a1 != 1 )
    return -1073741802;
  v9 = CmMapCmObjectTypeToPnpObjectType(a1);
  result = PiDmObjectGetCachedObjectProperty(
             v9,
             v10,
             v11,
             0LL,
             (ULONG_PTR)&DEVPKEY_Device_ClassGuid,
             (__int64)&v22,
             &v23,
             16,
             (__int64)&v21);
  if ( result >= 0 )
  {
    *a5 = 1;
    if ( *a7 < 0x4Eu )
    {
      *a7 = 78;
      return -1073741789;
    }
    else
    {
      LODWORD(v20) = v23.Data3;
      LODWORD(v19) = v23.Data2;
      LODWORD(v18) = v23.Data1;
      result = RtlStringCchPrintfExW(
                 pszDest,
                 0x27uLL,
                 0LL,
                 0LL,
                 0x800u,
                 L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                 v18,
                 v19,
                 v20,
                 v23.Data4[0],
                 v23.Data4[1],
                 v23.Data4[2],
                 v23.Data4[3],
                 v23.Data4[4],
                 v23.Data4[5],
                 v23.Data4[6],
                 v23.Data4[7]);
      v12 = result;
      if ( result >= 0 )
      {
        v13 = v29;
        v14 = *(_OWORD *)pszDest;
        v15 = v25;
        *a7 = 78;
        *(_OWORD *)v7 = v14;
        v16 = v26;
        *(_OWORD *)(v7 + 16) = v15;
        v17 = v27;
        *(_OWORD *)(v7 + 32) = v16;
        *(_QWORD *)&v16 = v28;
        *(_OWORD *)(v7 + 48) = v17;
        *(_QWORD *)(v7 + 64) = v16;
        *(_DWORD *)(v7 + 72) = v13;
        *(_WORD *)(v7 + 76) = v30;
        return v12;
      }
    }
  }
  return result;
}
