/*
 * XREFs of HvlSetHpetConfig @ 0x1405855B0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlSetHpetConfig(int a1, __int64 a2, char a3, _OWORD *a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // rax
  __int16 v10; // bx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  _BYTE v23[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[2064]; // [rsp+80h] [rbp-80h] BYREF

  v18 = 0LL;
  LODWORD(v19) = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v23[31] = 0;
  v17 = 0LL;
  v20 = 0LL;
  memset_0(v23, 0, 0x82FuLL);
  v8 = 0;
  while ( 1 )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v17, 1, (__int64)v23, 40LL);
    *(_DWORD *)v9 = 6;
    *((_DWORD *)v9 + 4) = a1;
    v9[3] = a2;
    *((_BYTE *)v9 + 32) = a3;
    v10 = HvcallInitiateHypercall(111);
    HvlpReleaseHypercallPage((unsigned int *)&v17);
    if ( !HvlpHvStatusIsInsufficientMemory(v10) )
      break;
    result = HvlpHandleInsufficientMemory(v10, v11, v12, v13);
    if ( (int)result < 0 )
      return result;
  }
  if ( v10 )
    return 3221225473LL;
  v15 = HvlpAcquireHypercallPage((__int64)&v17, 1, (__int64)v23, 16LL);
  v16 = HvlpAcquireHypercallPage((__int64)&v20, 2, (__int64)v24, 1032LL);
  *(_DWORD *)v15 = 7;
  if ( (unsigned __int16)HvcallInitiateHypercall(123) )
    v8 = -1073741823;
  else
    *a4 = *(_OWORD *)v16;
  HvlpReleaseHypercallPage((unsigned int *)&v20);
  HvlpReleaseHypercallPage((unsigned int *)&v17);
  return v8;
}
