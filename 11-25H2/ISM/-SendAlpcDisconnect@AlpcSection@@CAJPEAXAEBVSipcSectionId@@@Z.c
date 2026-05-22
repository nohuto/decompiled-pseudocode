/*
 * XREFs of ?SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z @ 0x18010E604
 * Callers:
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010ADEC (--1AlpcSection@@UEAA@XZ.c)
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x18010B968 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x18010D8D8 (-IsInitialized@SipcSectionId@@QEBA_NXZ.c)
 */

__int64 __fastcall AlpcSection::SendAlpcDisconnect(void *a1, const struct SipcSectionId *a2)
{
  __int128 *v2; // rdx
  __int64 v3; // r10
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  int v6; // ecx
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v10[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+68h] [rbp-98h]
  __int128 v12; // [rsp+70h] [rbp-90h]
  __int128 v13; // [rsp+80h] [rbp-80h]
  __int64 v14[9]; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( !SipcSectionId::IsInitialized(a2) )
    return 0LL;
  v4 = v2[1];
  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v14[0] = 1610612736LL;
  LODWORD(v10[0]) = 4718624;
  v5 = *v2;
  v13 = v4;
  v12 = v5;
  v6 = NtAlpcSendWaitReceivePort(v3, 0x10000LL, v10, v14, 0LL, 0LL, 0LL, &v9);
  if ( v6 >= 0 )
    return 0LL;
  v7 = v6 | 0x10000000;
  result = 2147549183LL;
  if ( v7 < 0 )
    return (unsigned int)v7;
  return result;
}
