/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x1C02D23E0
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C013FDF0 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C013FE3C (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall NtGdiGetServerMetaFileBits(
        __int64 a1,
        __int64 a2,
        volatile void *a3,
        _DWORD *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  SIZE_T v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // ecx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = (unsigned int)a2;
  v10 = 0;
  LOBYTE(a2) = 21;
  v11 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>((__int64)v17, v11);
  if ( HmgLockResultBase<META>::operator bool(v17) )
  {
    v12 = *(_DWORD *)(v17[0] + 24LL);
    if ( v12 == 1599096397 || v12 == 1480934989 )
    {
      v10 = *(_DWORD *)(v17[0] + 40LL);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == v10 )
        {
          v13 = (_DWORD *)a6;
          if ( a6 >= MmUserProbeAddress )
            v13 = (_DWORD *)MmUserProbeAddress;
          *v13 = *(_DWORD *)(v17[0] + 32LL);
          v14 = (_DWORD *)a7;
          if ( a7 >= MmUserProbeAddress )
            v14 = (_DWORD *)MmUserProbeAddress;
          *v14 = *(_DWORD *)(v17[0] + 36LL);
          if ( (unsigned __int64)a4 >= MmUserProbeAddress )
            a4 = (_DWORD *)MmUserProbeAddress;
          *a4 = *(_DWORD *)(v17[0] + 24LL);
          v15 = (_DWORD *)a5;
          if ( a5 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = *(_DWORD *)(v17[0] + 28LL);
          ProbeForWrite(a3, v9, 4u);
          memmove((void *)a3, (const void *)(v17[0] + 44LL), *(unsigned int *)(v17[0] + 40LL));
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v17);
  return v10;
}
