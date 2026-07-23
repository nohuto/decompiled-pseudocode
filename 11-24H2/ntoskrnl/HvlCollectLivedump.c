/*
 * XREFs of HvlCollectLivedump @ 0x1405874B0
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpSnapshotCrashArea @ 0x140588100 (HvlpSnapshotCrashArea.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  __int16 v11; // ax
  int v12; // esi
  void *v13; // rcx
  unsigned int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h]
  _BYTE v21[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v22[64]; // [rsp+F0h] [rbp-10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  HvlpSnapshotCrashArea(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0);
  if ( VslVsmEnabled )
  {
    memset_0(v19, 0, 0x68uLL);
    v20 = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFEBuLL) + 24;
    result = VslpEnterIumSecureMode(2u, 0xFDu, 0, (__int64)v19);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else if ( (HvlpRootFlags & 2) != 0 && Address )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v16, 1, (__int64)v22, 32LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v15, 2, (__int64)v21, 16LL);
    *v9 = a1;
    *(_OWORD *)(v9 + 1) = *(_OWORD *)a2;
    v9[3] = *(_QWORD *)(a2 + 16);
    v11 = HvcallInitiateHypercall(142);
    if ( !v11 || v11 == 51 )
    {
      v12 = 0;
      *a3 = *v10;
    }
    else
    {
      v12 = -1073741823;
    }
    HvlpReleaseHypercallPage((unsigned int *)&v15);
    HvlpReleaseHypercallPage((unsigned int *)&v16);
    if ( v12 >= 0 )
    {
      v13 = *(void **)(a4 + 32);
      v14 = dword_140F8E1B8 << 12;
      if ( v13 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v14 )
        memmove(v13, Address, v14);
      else
        *(_QWORD *)(a4 + 32) = Address;
      *(_DWORD *)(a4 + 40) = v14;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return (unsigned int)v12;
  }
  else
  {
    return 3221225659LL;
  }
  return result;
}
