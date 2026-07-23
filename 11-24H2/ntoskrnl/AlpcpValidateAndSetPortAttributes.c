/*
 * XREFs of AlpcpValidateAndSetPortAttributes @ 0x140867A60
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeValidateSecurityQos @ 0x140867C90 (SeValidateSecurityQos.c)
 */

__int64 __fastcall AlpcpValidateAndSetPortAttributes(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+24h] [rbp-5Ch]
  int v20; // [rsp+2Ch] [rbp-54h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+60h] [rbp-20h]

  memset_0(&v18, 0, 0x48uLL);
  if ( a2 )
  {
    v12 = *((_QWORD *)a2 + 2);
    if ( v12 < 0x28 || v12 > 0xFFFF || (*a2 & 0x100000) != 0 && KeGetCurrentThread()->PreviousMode )
      return 3221225485LL;
    v11 = *a2 & 0x3FF0000;
    a2[16] &= 0xFFDu;
    *a2 = v11;
  }
  else
  {
    v21 = 512LL;
    v23 = 0x4000LL;
    a2 = &v18;
    v24 = 0x4000LL;
    v16 = v18;
    if ( a7 )
      v16 = 4096;
    v26 = 0x20000LL;
    v18 = v16;
    v25 = 0LL;
    v22 = 0LL;
    v19 = 12LL;
    v20 = 257;
    v27 = 0;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v17 = *a2 | 0x20000;
    *a2 = v17;
    if ( !a7 )
      goto LABEL_13;
    v15 = a5;
    if ( a5 > LpcLegacyMaxMessageLength )
      return 3221225485LL;
    if ( a6 )
      *a2 = v17 | 0x40000;
LABEL_29:
    *((_QWORD *)a2 + 2) = v15;
    goto LABEL_13;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 2 )
  {
    *a2 &= ~0x20000u;
    if ( !a7 )
      goto LABEL_13;
    v15 = *(_QWORD *)(a3 + 272);
    if ( v15 > (unsigned int)LpcLegacyMaxMessageLength )
      return 3221225485LL;
    goto LABEL_29;
  }
  if ( a2 == &v18 )
    *a2 |= 0x10000u;
  if ( a7 )
  {
    *a2 |= 0x20000u;
    if ( a4 )
    {
      *(_QWORD *)(a2 + 1) = *(_QWORD *)a4;
      a2[3] = *(_DWORD *)(a4 + 8);
    }
    v13 = *(_QWORD *)(a3 + 272);
  }
  else
  {
    v13 = *(_QWORD *)(a3 + 272);
    if ( *((_QWORD *)a2 + 2) <= v13 )
      goto LABEL_13;
  }
  *((_QWORD *)a2 + 2) = v13;
LABEL_13:
  result = SeValidateSecurityQos(a2 + 1, v11, 0LL);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)(a1 + 256) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 272) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 288) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(a1 + 304) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(a1 + 320) = *((_QWORD *)a2 + 8);
  }
  return result;
}
