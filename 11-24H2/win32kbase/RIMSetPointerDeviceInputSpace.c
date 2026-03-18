/*
 * XREFs of RIMSetPointerDeviceInputSpace @ 0x1401E1C98
 * Callers:
 *     NtSetPointerDeviceInputSpace @ 0x1401B9390 (NtSetPointerDeviceInputSpace.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F3D58 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall RIMSetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2, __int128 *a3)
{
  __int64 v3; // rbp
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int128 v10; // xmm0
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  tagDomLock *v13; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 392);
  v7 = 0;
  RIMLockExclusive(v3 + 104);
  v8 = (a1 + 72) & -(__int64)(a1 != 0);
  if ( (*(_DWORD *)(v8 + 0xB8) & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x1C8);
    if ( *(_DWORD *)(v9 + 24) != 7 )
    {
      RIMLockExclusive(v3 + 760);
      CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v12);
      if ( a2 )
      {
        if ( !InputConfig::GetInputSpace(*a2, (struct CLockedInputSpace *)v12) )
        {
          v7 = -1073741811;
          goto LABEL_12;
        }
        *(_DWORD *)(v9 + 236) = 1;
        *(struct _LUID *)(v9 + 240) = *a2;
        if ( a3 )
        {
          *(_DWORD *)(v9 + 248) = 1;
          v10 = *a3;
          goto LABEL_10;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 236) = 0;
        *(_QWORD *)(v9 + 240) = 0LL;
      }
      *(_DWORD *)(v9 + 248) = 0;
      v10 = 0LL;
LABEL_10:
      *(_OWORD *)(v9 + 252) = v10;
      RIMSetDeviceOutputConfig((struct RIMDEV *)v8, (struct tagHID_POINTER_DEVICE_INFO *)v9, 1u, 0LL);
LABEL_12:
      RIMUnlockExclusive(v3 + 760);
      tagDomLock::UnLockExclusive((PERESOURCE *)v13);
      goto LABEL_13;
    }
  }
  v7 = -1073741811;
LABEL_13:
  RIMUnlockExclusive(v3 + 104);
  return v7;
}
