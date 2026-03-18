/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C000C720
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateAccelerator @ 0x1C000C884 (xxxTranslateAccelerator.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int128 v14; // [rsp+28h] [rbp-70h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h]
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int128 v18; // [rsp+58h] [rbp-40h]
  __int128 v19; // [rsp+68h] [rbp-30h]
  __int128 v20; // [rsp+78h] [rbp-20h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v18 = *a3;
  v19 = a3[1];
  v20 = a3[2];
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    LOBYTE(v6) = 8;
    v12 = HMValidateHandle(a2, v6);
    if ( v12 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v8;
      HMLockObject(v8);
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = v12;
      HMLockObject(v12);
      v11 = xxxTranslateAccelerator(v8);
      ThreadUnlock1();
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v11;
}
