/*
 * XREFs of HalpDmaFindDeviceObjectByToken @ 0x14053BA08
 * Callers:
 *     HalpDmaCheckAdapterToken @ 0x14053B920 (HalpDmaCheckAdapterToken.c)
 *     HaliGetDmaAdapter @ 0x14053F950 (HaliGetDmaAdapter.c)
 *     HalpDmaLinkDeviceObjectByToken @ 0x1406FB1D0 (HalpDmaLinkDeviceObjectByToken.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaFindDeviceObjectByToken(__int64 a1, char a2, char a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  char v6; // si
  KIRQL v9; // al
  __int64 *v10; // r9
  KIRQL v11; // r8
  __int64 v12; // rcx
  __int64 **v13; // rax
  bool v14; // cf

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&HalpDmaPdoListLock);
  v10 = (__int64 *)HalpDmaPdoList;
  v11 = v9;
  while ( v10 != &HalpDmaPdoList )
  {
    v4 = v10;
    if ( v10[2] == a1 )
    {
      v5 = v10[3];
      if ( a2 )
      {
        v12 = *v10;
        if ( *(__int64 **)(*v10 + 8) != v10 || (v13 = (__int64 **)v10[1], *v13 != v10) )
          __fastfail(3u);
        *v13 = (__int64 *)v12;
        v6 = 1;
        *(_QWORD *)(v12 + 8) = v13;
      }
      if ( a3 )
      {
        v14 = *((_BYTE *)v10 + 32) != 0;
        *((_BYTE *)v10 + 32) = 1;
        v5 &= -(__int64)v14;
      }
      break;
    }
    v10 = (__int64 *)*v10;
  }
  KeReleaseSpinLock(&HalpDmaPdoListLock, v11);
  if ( v6 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
