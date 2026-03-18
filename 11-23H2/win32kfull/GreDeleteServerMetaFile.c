/*
 * XREFs of GreDeleteServerMetaFile @ 0x1C02D2218
 * Callers:
 *     vCleanupMetaType @ 0x1C009E400 (vCleanupMetaType.c)
 *     FreeDdeXact @ 0x1C01FA700 (FreeDdeXact.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FBE64 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C013FDF0 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C013FE3C (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteServerMetaFile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  LOBYTE(a2) = 21;
  v2 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>((__int64)v6, v2);
  v3 = 0;
  if ( HmgLockResultBase<META>::operator bool(v6) )
  {
    v4 = *(_DWORD *)(v6[0] + 24LL);
    if ( v4 == 1599096397 || v4 == 1480934989 )
    {
      HmgFree(*(_QWORD *)v6[0]);
      v6[0] = 0LL;
      v3 = 1;
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v6);
  return v3;
}
